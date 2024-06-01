#!/usr/bin/env python3

import serial
import serial.serialutil
import rospy
import time
from std_srvs.srv import SetBool, SetBoolResponse

class ArduinoController:

    def __init__(self):
        rospy.init_node('arduino_controller')
        rospy.loginfo_once("Arduino Tug Arm Controller")

        self.baud_rate = 9600
        self.tug_port = '/dev/ttyUSB0'
        self.turn_cw = '1'
        self.tug_msg_int = 0

        self.arduino_1 = serial.Serial(port=self.tug_port, baudrate=self.baud_rate, timeout=1)
        time.sleep(2)
        rospy.loginfo_once(f"Opening Tug Arm Port {self.tug_port} with baudrate {self.baud_rate}")

        try:
            rospy.Service('set_dock_state', SetBool, self.loading)
        except rospy.ServiceException as e:
            rospy.logwarn(e)

    def loading(self, req):
        if req.data:
            rospy.loginfo_once('Received loading request, turning the tug arm...')
            while not rospy.is_shutdown():
                self.write_to_arduino(self.turn_cw)

                if self.wait_for_arduino_feedback():
                    rospy.loginfo_once('Tug Arm Turned, received feedback signal "1"')
                    rospy.on_shutdown(self.on_shutdown)

                    return SetBoolResponse(success=True, message="Tug Arm Turned successfully.")
                
                else:
                    self.write_to_arduino(self.turn_cw)
                    time.sleep(1)  # Wait before retrying

        return SetBoolResponse(success=False, message="Service call received with data set to False.")

    def write_to_arduino(self, message):
        self.arduino_1.write(message.encode('ascii'))

    def wait_for_arduino_feedback(self):
        time.sleep(3)  # Adjust the sleep duration as needed
        tug_msg_read = self.arduino_1.readline().decode().strip()
        print(f"Feed Back: {repr(tug_msg_read)}")
        if tug_msg_read == "OK":
            return True # Check if the feedback signal is "1"
        else:
            return False
        
    def on_shutdown(self):
        rospy.loginfo('Exiting :)')

def main():
    controller = ArduinoController()
    rospy.spin()

if __name__ == '__main__':
    try:
        main()
    except (rospy.ROSInternalException, rospy.ROSInterruptException) as e:
        rospy.logwarn_once(e)
