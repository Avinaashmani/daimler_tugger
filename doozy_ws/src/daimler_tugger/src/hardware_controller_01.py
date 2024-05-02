#!/usr/bin/env python3

import serial.serialutil
import roslaunch.parent
import roslaunch.rlutil
import rospy 
import serial
import time
from std_msgs.msg import String, Bool, Int16
from move_base_msgs.msg import MoveBaseActionResult
from std_srvs.srv import SetBool, SetBoolResponse
import roslaunch

class ArduinoController:

    def __init__(self):

        rospy.init_node('arduino_controller')
        rospy.loginfo_once("Daimler Hardware Controller")

        self.tug_arm_diag_pub = rospy.Publisher('/arduino_tug_arm_diagnostics', String, queue_size=10)
        self.latch_arm_diag_pub = rospy.Publisher('arduino_latch_arm_diagnostics', String, queue_size=10)
        self.hook_diag_pub = rospy.Publisher('arduino_hook_arm_diagnostics', String, queue_size=10)

        self.arduino_operation_controller = rospy.Publisher ('/arduino_controller_flag', Bool, queue_size=10)
        self.general_diagnostics_pub = rospy.Publisher('/general_diagnostics', String, queue_size=10)

        # rospy.Subscriber('/dock_topic', Bool, self.docking_callback, queue_size=10)


        rospy.Subscriber('/move_base/result', MoveBaseActionResult, self.navigation_callback, queue_size=10)
        # rospy.Subscriber('/operations_topic', Int16, self.loading_unloading_callback, queue_size=10)

        self.navigation_ = False
        self.docking_ = False
        self.loading_ = True
        self.unloading_ = False

        self.loading_process_flag = False
        self.unloading_process_flag = False
        
        self.tug_arm_diagnostics = String()
        self.latch_arm_diagnostics = String()
        self.hook_arm_diagnostics = String()
        self.general_diagnostics = String()

        self.baud_rate = 9600
        
        self.tug_port = '/dev/ttyUSB0'
        # self.latch_port = '/dev/ttyUSB0'
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

        self.tug_msg_read = '0'
        self.latch_msg_read = '0'
        self.hook_msg_read = '0'

        self.navigation_complete_flag = False
        self.docking_complete_flag = False
        self.docking_start_flag = False

        self.arduino_1 = serial.Serial(port=self.tug_port, baudrate=self.baud_rate, timeout=0)
        # self.arduino_2 = serial.Serial(port=self.latch_port, baudrate=self.baud_rate, timeout=0)
        # self.arduino_3 = serial.Serial(port=self.hook_port, baudrate=self.baud_rate, timeout=0)

        time.sleep(2)
        rospy.loginfo_once(f"Opening Tug Arm Port {self.tug_port} with baudrate {self.baud_rate}")
        # rospy.loginfo_once(f"Opening Latch Arm Port {self.latch_port} with baudrate {self.baud_rate}")
        # rospy.loginfo_once(f"Opening Hook Port {self.hook_port} with baudrate {self.baud_rate}")

        # try:
        #     rospy.Service('set_dock_state', SetBool, self.docking_func)
        # except rospy.ServiceException:
        #     pass

        # while self.loading_:
        #     self.loading()
        #     rospy.logwarn_once("Loading Operation")

        # while self.unloading_:
        #     self.unloading()
        #     rospy.logwarn_once("Unloading Operation")

        # else:
        #     rospy.logwarn("None")

        # while True:

        self.compute()
    
    def navi_callback(self):
        try:
            if self.navigation_:
                self.navigation_complete_flag = False

                self.loading_process_flag = False
                rospy.loginfo_once ('Reached Dolly,, Waiting to Dock...')
                self.general_diagnostics.data = "Reached Dolly, Waiting to Dock..."
                self.general_diagnostics_pub.publish(self.general_diagnostics)

                time.sleep(2)

                rospy.loginfo_once("Turning the Tug Arm")
                
                self.tug_arm_diagnostics.data = "Turning the Tug-Arm !! Caution !!"
                self.tug_arm_diag_pub.publish(self.tug_arm_diagnostics)
                
                self.arduino_1.write(self.tug_loading.encode('ascii'))
                time.sleep(3)
                self.tug_msg_read = self.arduino_1.readline().decode().strip()

                self.general_diagnostics.data = '----'
                self.general_diagnostics_pub.publish(self.general_diagnostics)
                
                if self.navigation_ and self.tug_msg_read=='1':

                    self.loading_process_flag = True

                    self.tug_arm_diagnostics.data = '<< Tug Arm Turned >>'
                    self.tug_arm_diag_pub.publish(self.tug_arm_diagnostics)
                
                    rospy.loginfo_once("Tug Arm Turned..")
                    time.sleep(3)
                    rospy.loginfo_once("Open to Dock/ Undock")
                    time.sleep(3)
                    self.navigation_complete_flag = True
                    self.docking_start_flag = True

                    time.sleep(3)
                    rospy.logwarn("Stopping Navigation")
                    self.navigation_ = False
                    return True

                else:
                    self.tug_arm_diagnostics.data = f'CHECK TUG ARM !! Feedback--> {self.tug_msg_read}'
                    self.tug_arm_diag_pub.publish(self.tug_arm_diagnostics)
                    rospy.loginfo_once(f'CHECK TUG ARM !! Feedback--> {self.tug_msg_read}')
                    self.loading_process_flag = False
                    # self.navigation_complete_flag = False
                    return False
        
        except serial.serialutil.SerialException as e:
            rospy.logwarn (e)

    def docking_func(self, req):
        
        rospy.loginfo("Docking Function")
        
        try:    
            
            if req:
                
                rospy.loginfo("Docking Function called...")
                rospy.loginfo(self.navigation_complete_flag)
                
                if self.docking_start_flag :
                    rospy.loginfo(self.navigation_complete_flag)
                    rospy.loginfo_once("Lowering Hook Arm...")
                    self.latch_arm_diagnostics.data ="Lowering Hook Arm..."
                    self.latch_arm_diag_pub.publish (self.latch_arm_diagnostics)
                    # print(srv_call)

                    time.sleep(5)

                    # self.arduino_2.write(self.latch_loading.encode('ascii'))
                    # time.sleep(3)
                    # latch_arm_msg = self.arduino_2.readline().decode().strip()

                    latch_arm_msg = '1'

                    if latch_arm_msg == '1':
                        
                        rospy.loginfo_once('Opening Hook...')
                        rospy.loginfo_once("Hook Arm Lowered.")
                        
                        self.latch_arm_diagnostics.data ="<< Hook Arm Lowered.>>"
                        self.latch_arm_diag_pub.publish (self.latch_arm_diagnostics)

                        hook_msg = '1'
                       
                        if hook_msg == '1':
                            
                            rospy.loginfo_once('Hook Opened.')
                            
                            self.hook_arm_diagnostics.data='<< Hook Open >>'
                            self.hook_diag_pub.publish(self.hook_arm_diagnostics)

                            time.sleep(3)

                            self.general_diagnostics.data='<< Loading Completed >>'
                            self.general_diagnostics_pub.publish(self.general_diagnostics)
                            rospy.loginfo("<< Docking Completed >>")

                            self.navigation_ = False
                            self.docking_ = False
                            # self.loading_process_flag = False
                            # SetBoolResponse.success = True
                            self.docking_complete_flag = True

                        else:
                            rospy.logwarn_once(f'!! CHECK HOOK !! -- Hook Feedback {hook_msg}')
                            
                            self.hook_arm_diagnostics.data=f'!! CHECK HOOK !! --> Hook Feedback {hook_msg}'
                            self.hook_diag_pub.publish(self.hook_arm_diagnostics)

                            time.sleep(3)

                            self.general_diagnostics.data='!! CHECK HOOK !!'
                            self.general_diagnostics_pub.publish(self.general_diagnostics)

                            self.navigation_ = False
                            self.docking_ = False
                            # self.loading_process_flag = False
                            self.docking_complete_flag = True
                            # self.docking_start_flag = False
                    else:
                        rospy.logwarn_once ('!! CHECK LATCH ARM !!')
            
                        self.latch_arm_diagnostics.data ="!! CHECK LATCH ARM !!"
                        self.latch_arm_diag_pub.publish (self.latch_arm_diagnostics)

                        self.hook_arm_diagnostics.data ="!! CHECK HOOK !!"
                        self.hook_diag_pub.publish(self.hook_arm_diagnostics)

                        self.navigation_ = False
                        self.docking_ = False
                        # self.loading_process_flag = False
                        # self.docking_start_flag = False
            else:
                print("Navigation Not completed yet...")               
        except serial.serialutil.SerialException as e:
            rospy.logwarn (e)
    
    def unloading (self, req):
        try:
            if self.navigation_:

                self.unloading_process_flag = False
                rospy.loginfo_once ('Undocking...')
                self.general_diagnostics.data = "Undocking..."
                self.general_diagnostics_pub.publish(self.general_diagnostics)

                time.sleep(2)
                
                self.unloading_process_flag = True
            
            if self.unloading_process_flag :

                rospy.loginfo_once("Lowering Hook Arm...")
                self.latch_arm_diagnostics.data ="Lowering Hook Arm..."
                self.latch_arm_diag_pub.publish (self.latch_arm_diagnostics)

                time.sleep(3)

                # self.arduino_2.write(self.latch_unloading.encode('ascii'))
                # time.sleep(3)
                # latch_arm_msg = self.arduino_2.readline().decode().strip()

                latch_arm_msg = '1'

                if latch_arm_msg == '1':
                        
                    rospy.loginfo_once('Opening Hook...')
                    rospy.loginfo_once("Hook Arm Lowered.")
                        
                    self.latch_arm_diagnostics.data ="<< Hook Arm Lowered. >>"
                    self.latch_arm_diag_pub.publish (self.latch_arm_diagnostics)

                    self.hook_arm_diagnostics.data ="Opening Hook..."
                    self.hook_diag_pub.publish(self.hook_arm_diagnostics)

                    time.sleep(5)

                    # self.arduino_3.write(self.hook_unloading.encode('ascii'))
                    # time.sleep(3)
                    hook_msg = '1'
                       
                    if hook_msg == '1':
                            
                        rospy.loginfo_once('Hook Opened.')
                            
                        self.hook_arm_diagnostics.data='<< Hook Open >>'
                        self.hook_diag_pub.publish(self.hook_arm_diagnostics)

                        time.sleep(3)

                        self.general_diagnostics.data='<< Unloading Completed >>'
                        self.general_diagnostics_pub.publish(self.general_diagnostics)

                        self.navigation_ = False
                        self.docking_ = False
                        self.loading_process_flag = False
                    else:
                        rospy.logwarn_once(f'!! CHECK HOOK !! -- Hook Feedback {hook_msg}')
                            
                        self.hook_arm_diagnostics.data=f'!! CHECK HOOK !! --> Hook Feedback {hook_msg}'
                        self.hook_diag_pub.publish(self.hook_arm_diagnostics)

                        time.sleep(3)

                        self.general_diagnostics.data='!! CHECK HOOK !!'
                        self.general_diagnostics_pub.publish(self.general_diagnostics)

                        self.navigation_ = False
                        self.docking_ = False
                        self.loading_process_flag = False
                else:
                    rospy.logwarn_once ('!! CHECK LATCH ARM !!')
            
                    self.latch_arm_diagnostics.data ="!! CHECK LATCH ARM !!"
                    self.latch_arm_diag_pub.publish (self.latch_arm_diagnostics)

                    self.hook_arm_diagnostics.data ="!! CHECK HOOK !!"
                    self.hook_diag_pub.publish(self.hook_arm_diagnostics)

                    self.navigation_ = False
                    self.docking_ = False
                    self.loading_process_flag = False

        except serial.serialutil.SerialException as e:
            rospy.logwarn_once (e)

    def navigation_callback(self, msg):
        
        if msg.status.text:
            self.navigation_ = True
        
        else:
            self.navigation_ = False
        
        rospy.logwarn_once (f"Navigation... {msg.status.text}")
    
    # def docking_callback(self, msg):
        
    #     self.docking_start_flag = msg.data
    #     # rospy.loginfo(self.docking_start_flag)

    #     print(self.docking_start_flag)

    def compute(self):
        # while True:
        try:
            
            if self.navigation_:
                self.navi_callback()
                # uuid = roslaunch.rlutil.get_or_generate_uuid(None, False)
                # roslaunch.configure_logging(uuid)
                # launch = roslaunch.parent.ROSLaunchParent(uuid, roslaunch_files='daimler_sick.launch')
                # launch.start()
                if self.navigation_complete_flag:
                    rospy.Service('set_dock_state', SetBool, self.docking_func)
                    if self.docking_complete_flag is not True:
                        print("Docking in Progress...")
                    else:
                        print("Loading operation Completed....")
            # rospy.on_shutdown()

            else:

                self.general_diagnostics.data = "-----------"
                self.general_diagnostics_pub.publish(self.general_diagnostics)
        except rospy.ServiceException:
            pass 

def main():
    ArduinoController()
    

if __name__=='__main__':
    
    try:
        while not rospy.is_shutdown():
            main()
    except (rospy.ROSInternalException, rospy.ROSInterruptException) as e:
        rospy.logwarn_once(e)
