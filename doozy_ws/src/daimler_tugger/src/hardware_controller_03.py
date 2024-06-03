#!/usr/bin/env python3

import serial.serialutil
import rospy 
import serial
import time
from std_msgs.msg import String, Bool, Int16
from std_srvs.srv import SetBool

class ArduinoController:

    def __init__(self):
        rospy.init_node('arduino_controller')
        rospy.loginfo_once("Daimler Hardware Controller")

        self.tug_arm_diag_pub = rospy.Publisher('arduino_tug_arm_diagnostics', String, queue_size=10)
        self.latch_arm_diag_pub = rospy.Publisher('arduino_latch_arm_diagnostics', String, queue_size=10)
        self.hook_diag_pub = rospy.Publisher('arduino_hook_arm_diagnostics', String, queue_size=10)

        self.arduino_operation_controller = rospy.Publisher('/arduino_controller_flag', Bool, queue_size=10)
        self.general_diagnostics_pub = rospy.Publisher('/general_diagnostics', String, queue_size=10)
        self.dock_publisher = rospy.Publisher('/start_docking', Bool, queue_size=10)

        rospy.Subscriber('/dock_topic', Bool, self.docking_callback, queue_size=10)
        rospy.Subscriber('/move_base/result', String, self.navigation_callback, queue_size=10)
        rospy.Subscriber('/operations_topic', Int16, self.loading_unloading_callback, queue_size=10)

        self.navigation_ = False
        self.docking_ = False
        self.loading_ = False
        self.unloading_ = False

        self.loading_process_flag = False
        self.unloading_process_flag = False

        self.tug_arm_diagnostics = String()
        self.latch_arm_diagnostics = String()
        self.hook_arm_diagnostics = String()
        self.general_diagnostics = String()

        self.baud_rate = 9600
        self.tug_port = '/dev/ttyUSB0'
        # self.latch_port = '/dev/ttyUSB2'
        # self.hook_port = '/dev/ttyUSB0'

        self.tug_arm_diagnostics.data = 'TUG ARM STARTING...'
        self.latch_arm_diagnostics.data = 'LATCH ARM STARTING...'
        self.hook_arm_diagnostics.data = 'HOOK STARTING...'

        self.tug_loading = '1'
        self.latch_loading = '1'
        self.hook_loading = '1'

        self.tug_unloading = '2'
        self.latch_unloading = '2'
        self.hook_unloading = '2'

        self.arduino_1 = serial.Serial(port=self.tug_port, baudrate=self.baud_rate, timeout=1)
        # self.arduino_2 = serial.Serial(port=self.latch_port, baudrate=self.baud_rate, timeout=0)
        # self.arduino_3 = serial.Serial(port=self.hook_port, baudrate=self.baud_rate, timeout=0)
        # self.arduino_1.write(self.tug_loading.encode('ascii'))
        time.sleep(2)
        rospy.loginfo_once(f"Opening Tug Arm Port {self.tug_port} with baudrate {self.baud_rate}")
        # rospy.loginfo_once(f"Opening Latch Arm Port {self.latch_port} with baudrate {self.baud_rate}")
        # rospy.loginfo_once(f"Opening Hook Port {self.hook_port} with baudrate {self.baud_rate}")

        self.turn_cw = '1'
        self.turn_ccw = '2'
        self.stop = '0'

        self.tug_msg_int = 0

        try:
            rospy.Service('set_undock_state', SetBool, self.unloading)
            rospy.Service('set_dock_state', SetBool, self.loading)
        except rospy.ServiceException as e:
            pass

    def loading(self, req):
        self.navigation_ = req.data

        try:
            if self.navigation_:
                self.loading_process_flag = False
                rospy.loginfo_once('Reached Dolly, Waiting to Dock...')
                self.general_diagnostics.data = "Reached Dolly, Waiting to Dock..."
                self.general_diagnostics_pub.publish(self.general_diagnostics)

                time.sleep(2)
                self.write_to_arduino(self.turn_cw)

                if not self.wait_for_arduino_feedback():
                    # rospy.loginfo_once('First attempt ...')
                    self.write_to_arduino(self.turn_cw)
                    if not self.wait_for_arduino_feedback():
                        # rospy.loginfo_once('Second attempt ...')
                        self.loading_process_flag = True
                    else:
                        self.loading_process_flag = True
                else:
                    self.loading_process_flag = True

                if self.loading_process_flag:
                    self.tug_arm_diagnostics.data = '<< Tug Arm Turned >>'
                    self.tug_arm_diag_pub.publish(self.tug_arm_diagnostics)
                    rospy.loginfo_once('Tug Arm Turned..')
                else:
                    self.tug_arm_diagnostics.data = 'CHECK TUG ARM !!'
                    self.tug_arm_diag_pub.publish(self.tug_arm_diagnostics)
                    rospy.loginfo_once('CHECK TUG ARM !!')

                while self.loading_process_flag:
                    rospy.loginfo_once('Waiting to dock')
                    if self.docking_:
                        self.docking_procedure()
            else:
                rospy.logwarn_once('Navigation flag not set')
        except serial.serialutil.SerialException as e:
            rospy.logwarn(e)

    def write_to_arduino(self, message):
        self.arduino_1.write(message.encode('ascii'))

    def wait_for_arduino_feedback(self):
        time.sleep(3)  # Adjust the sleep duration as needed
        tug_msg_read = self.arduino_1.readline().decode('ascii').strip()
        print(f"Raw message: {repr(tug_msg_read)}")
        if tug_msg_read.isdigit():
            self.tug_msg_int = int(tug_msg_read)
            return self.tug_msg_int in [0, 1]  # Assume 0 and 1 are valid responses
        else:
            return False

    def docking_procedure(self):
        rospy.loginfo_once('Lowering Hook Arm...')
        self.latch_arm_diagnostics.data = 'Lowering Hook Arm...'
        self.latch_arm_diag_pub.publish(self.latch_arm_diagnostics)
        time.sleep(5)
        latch_arm_msg = '1'
        if latch_arm_msg == '1':
            rospy.loginfo_once('Opening Hook...')
            self.latch_arm_diagnostics.data = '<< Hook Arm Lowered. >>'
            self.latch_arm_diag_pub.publish(self.latch_arm_diagnostics)
            hook_msg = True
            if hook_msg:
                rospy.loginfo_once('Hook Opened.')
                self.hook_arm_diagnostics.data = '<< Hook Open >>'
                self.hook_diag_pub.publish(self.hook_arm_diagnostics)
                time.sleep(3)
                self.general_diagnostics.data = '<< Loading Completed >>'
                self.general_diagnostics_pub.publish(self.general_diagnostics)
                self.navigation_ = False
                self.docking_ = False
                self.loading_process_flag = False
            else:
                self.handle_hook_error(hook_msg)
        else:
            self.handle_latch_error()

    def handle_hook_error(self, hook_msg):
        rospy.logwarn_once(f'!! CHECK HOOK !! -- Hook Feedback {hook_msg}')
        self.hook_arm_diagnostics.data = f'!! CHECK HOOK !! --> Hook Feedback {hook_msg}'
        self.hook_diag_pub.publish(self.hook_arm_diagnostics)
        time.sleep(3)
        self.general_diagnostics.data = '!! CHECK HOOK !!'
        self.general_diagnostics_pub.publish(self.general_diagnostics)
        self.navigation_ = False
        self.docking_ = False
        self.loading_process_flag = False

    def handle_latch_error(self):
        rospy.logwarn_once('!! CHECK LATCH ARM !!')
        self.latch_arm_diagnostics.data = '!! CHECK LATCH ARM !!'
        self.latch_arm_diag_pub.publish(self.latch_arm_diagnostics)
        self.hook_arm_diagnostics.data = '!! CHECK HOOK !!'
        self.hook_diag_pub.publish(self.hook_arm_diagnostics)
        self.navigation_ = False
        self.docking_ = False
        self.loading_process_flag = False

    def unloading(self, req):
        self.navigation_ = req.data

        try:
            if self.navigation_:
                self.unloading_process_flag = False
                rospy.loginfo_once('Undocking...')
                self.general_diagnostics.data = "Undocking..."
                self.general_diagnostics_pub.publish(self.general_diagnostics)
                time.sleep(2)
                self.unloading_process_flag = True

            if self.unloading_process_flag:
                rospy.loginfo_once("Lowering Hook Arm...")
                self.latch_arm_diagnostics.data = "Lowering Hook Arm..."
                self.latch_arm_diag_pub.publish(self.latch_arm_diagnostics)
                time.sleep(3)
                # self.arduino_2.write(self.latch_unloading.encode('ascii'))
                # time.sleep(3)
                # latch_arm_msg = self.arduino_2.readline().decode().strip()
                latch_arm_msg = '1'
                if latch_arm_msg == '1':
                    rospy.loginfo_once('Opening Hook...')
                    rospy.loginfo_once("Hook Arm Lowered...")
                    self.latch_arm_diagnostics.data = "<< Hook Arm Lowered. >>"
                    self.latch_arm_diag_pub.publish(self.latch_arm_diagnostics)
                    self.hook_arm_diagnostics.data = "Opening Hook..."
                    self.hook_diag_pub.publish(self.hook_arm_diagnostics)
                    time.sleep(5)
                    hook_msg = '1'
                    if hook_msg == '1':
                        rospy.loginfo_once('Hook Opened.')
                        self.hook_arm_diagnostics.data = '<< Hook Open >>'
                        self.hook_diag_pub.publish(self.hook_arm_diagnostics)
                        time.sleep(3)
                        self.general_diagnostics.data = '<< Unloading Completed >>'
                        self.general_diagnostics_pub.publish(self.general_diagnostics)
                        self.navigation_ = False
                        self.docking_ = False
                        self.loading_process_flag = False
                    else:
                        self.handle_hook_error(hook_msg)
                else:
                    self.handle_latch_error()
        except serial.serialutil.SerialException as e:
            rospy.logwarn_once(e)

    def navigation_callback(self, msg):
        if msg.status.text == 'Goal reached':
            self.navigation_ = True
        else:
            self.navigation_ = False
            
        rospy.logwarn_once(f"Navigation... {msg.data}")

    def docking_callback(self, msg):
        self.docking_ = msg.data
        rospy.logwarn_once(f"Docking... {msg.data}")

    def loading_unloading_callback(self, msg):
        if msg.data == 1:
            self.loading_ = True
            self.unloading_ = False
        elif msg.data == 2:
            self.unloading_ = True
            self.loading_ = False
        else:
            self.loading_ = False
            self.unloading_ = False

    def run_script(self, req):
        result = False
        if req.Set_Dock_State:
            self.loading_ = True
            print(self.loading_)
            result = False
        elif req.Set_Undock_State:
            self.unloading_ = True
            print(self.unloading_)
            result = True
        else:
            rospy.logwarn_once('Waiting to Navigate')
            self.general_diagnostics.data = 'Completing Navigation...'
            self.general_diagnostics_pub.publish(self.general_diagnostics)
        # return DaimlerServiceCallResponse(result)

def main():
    ArduinoController()
    # try:
    #     rospy.Service('set_dock_state', DaimlerServiceCall, ArduinoController.loading)
    # except rospy.ServiceException as e:
    #     rospy.logwarn(e)

if __name__ == '__main__':
    try:
        while not rospy.is_shutdown():
            main()
    except (rospy.ROSInternalException, rospy.ROSInterruptException) as e:
        rospy.logwarn_once(e)
