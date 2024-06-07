#!/usr/bin/env python3

import time
import sys
import serial
import serial.serialutil
import rospy
from move_base_msgs.msg import MoveBaseActionResult
from std_msgs.msg import Bool

class TugArm():
    def __init__(self) -> None:
        
        rospy.init_node('tug_arm')
        rospy.loginfo_once("Tug arm controller")

        self.turn_tug = '1'
        self.open_ = '1'
        self.close_ = '2'

        
        self.arduino_port = '/dev/ttyUSB0'
        self.latch_port = '/dev/ttyACM0'
        self.hook_port = '/dev/ttyACM1'

        self.baud_rate = 9600

        self.navigation_result = False

        rospy.Subscriber('/move_base/result', MoveBaseActionResult, self.tug_navigation_callback, queue_size=10)
        rospy.Subscriber('/dock_topic', Bool, self.dock_topic_cb, queue_size=10)

        self.docking_pub = rospy.Publisher ('/start_docking', Bool, queue_size = 10)

        rospy.on_shutdown(self.on_shutdown_cb)

        self.arduino_open = None
        self.latch_arduino = None
        self.tug_arm_state = False

        self.begun_docking = Bool()

        try:
            self.arduino_open = serial.Serial(self.arduino_port, self.baud_rate, timeout=5)
            self.latch_arduino = serial.Serial(self.latch_port, self.baud_rate, timeout=5)
            # self.hook_arduino = serial.Serial(self.hook_port, self.baud_rate, timeout=5)

            rospy.loginfo_once(f"Opening port {self.arduino_port} with rate {self.baud_rate}")
            rospy.loginfo_once(f"Opening port {self.latch_port} with rate {self.baud_rate}")

        except serial.serialutil.SerialException as e:
            rospy.loginfo_once(f"Failed to open port {self.arduino_port}: {e}")

    def tug_navigation_callback(self, msg):
        
        if msg.status.text:
            self.navigation_result = True
            print(self.navigation_result)

            time.sleep(0.5)
            rospy.loginfo_once(f"Opening port {self.arduino_port} with rate {self.baud_rate}")

            try:
                while self.arduino_open.is_open:
                    self.arduino_open.write(self.turn_tug.encode('ascii'))
                    rospy.loginfo_once(f"Writing to tug {self.turn_tug}")

                    self.read_input = self.arduino_open.readline().decode().strip()
                    rospy.loginfo(f"Arduino Feedback {self.read_input}")
                    time.sleep(1)
                        
                    if self.read_input == 'OK':
                        rospy.loginfo(f"Arduino Feedback {self.read_input}")
                        rospy.loginfo_once("Received positive feedback..")
                        self.begun_docking.data = True
                        self.docking_pub.publish(self.begun_docking)
                        self.tug_arm_state = True
                        break
                    
                    else:
                        self.begun_docking.data = False
                        self.docking_pub.publish(self.begun_docking)
            
            except serial.SerialException as e:
                pass
                return
        # if hook:
        #     rospy.loginfo("Entering latch down loop.")
            
        #     try:
        #         while self.latch_arduino.is_open:
        #             self.latch_arduino.write(self.close_.encode('ascii'))
        #             rospy.loginfo(f"Writing to latch: {self.close_}")
        #             self.read_latch2 = self.latch_arduino.readline().decode().strip()
        #             rospy.loginfo(f"Arduino Latch Feedback: {self.read_latch2}")
        #             time.sleep(3)

        #             if self.read_latch2 == 'DOWN':
        #                 rospy.loginfo("Received 'DOWN' feedback from latch.")
        #                 time.sleep(2)
        #                 latch = False
        #                 rospy.loginfo("Latch set to False.")
        #                 return
                    
        #     except serial.SerialException as e:
        #         rospy.logerr(f"Error communicating with latch Arduino: {e}")
        #         return
           
    def navigation_callback(self, msg):
        if msg.status.text:
            self.navigation_result = True
            print(self.navigation_result)

    def on_shutdown_cb(self):
        rospy.loginfo("Exiting")
        if self.arduino_open and self.arduino_open.is_open:
            self.arduino_open.close()
        if self.latch_arduino and self.latch_arduino.is_open:
            self.latch_arduino.close()
    
    def dock_topic_cb(self, msg):

        if msg.data and self.tug_arm_state:
            rospy.loginfo("Latch set to True.")

            while self.latch_arduino.is_open:
                self.latch_arduino.write(self.open_.encode('ascii'))
                rospy.loginfo(f"Writing to latch: {self.open_}")
                self.read_latch1 = self.latch_arduino.readline().decode().strip()
                rospy.loginfo(f"Arduino Latch Feedback: {self.read_latch1}")

                if self.read_latch1 == 'UP':
                    rospy.loginfo("Received 'UP' feedback from latch.")
                    self.latch_arduino.write(self.close_.encode('ascii'))
                        # rospy.loginfo(f"Writing to latch: {self.close_}")
                    time.sleep(2)
                    rospy.loginfo("Latch down set to True.")
                    self.tug_arm_state = False
                    break

def main():
    while not rospy.is_shutdown():
        TugArm()
        rospy.spin()

if __name__ == '__main__':
    try:
        main()
    except (rospy.ROSInternalException, rospy.ROSInterruptException) as e:
        rospy.logwarn_once(e)
