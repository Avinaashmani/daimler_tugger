#!/usr/bin/env python3

import time
import sys
import serial
import serial.serialutil
import threading
import rospy
from move_base_msgs.msg import MoveBaseActionResult

class TugArm():
    def __init__(self) -> None:
        
        rospy.init_node('tug_arm')
        rospy.loginfo_once("Tug arm controller")

        self.turn_tug = '1'
        
        self.arduino_port = '/dev/ttyUSB0'
        self.baud_rate = 9600

        self.navigation_result = False

        rospy.Subscriber('/move_base/result', MoveBaseActionResult, self.tug_navigation_callback, queue_size=10)
        rospy.on_shutdown(self.on_shutdown_cb)
        try:
            self.arduino_open = serial.Serial(self.arduino_port, self.baud_rate, timeout=5)
            rospy.loginfo_once(f"Opening port {self.arduino_port} with rate {self.baud_rate}")

        except serial.serialutil.SerialException as e:
            rospy.loginfo_once(e)
            
        # self.navigation_thread = threading.Thread(target=self.tug_navigation_callback)
        # self.navigation_thread.start()

    def tug_navigation_callback(self, msg):

        if msg.status.text:
            self.navigation_result = True
            print(self.navigation_result)

        if self.navigation_result:
            time.sleep(0.5)
            rospy.loginfo_once(f"Opening port {self.arduino_port} with rate {self.baud_rate}")

            while self.arduino_open.open:
                if self.navigation_result:
                    
                    self.arduino_open.write(self.turn_tug.encode('ascii'))
                    rospy.loginfo_once(f"Writing to arduino {self.turn_tug}")
                    # time.sleep(1)
                    
                    self.read_input = self.arduino_open.readline().decode().strip()
                    rospy.loginfo(f"Arduino Feedback {self.read_input}")
                    
                    if self.read_input == 'OK':
                        rospy.loginfo(f"Arduino Feedback {self.read_input}")
                        rospy.loginfo_once ("Recieved positive feedback..")
                        # rospy.signal_shutdown("Recieved positive feedback")
                        rospy.on_shutdown(self.on_shutdown_cb)

                        self.navigation_result = False  
                        return True

    def navigation_callback(self, msg):
        
        if msg.status.text:
            self.navigation_result = True
            print(self.navigation_result)

    def on_shutdown_cb(self):
        rospy.loginfo("Exiting")
        # if self.navigation_thread.is_alive():
        #     # self.navigation_thread.join()

def main():
    while not rospy.is_shutdown():
        TugArm()
        rospy.spin()

if __name__ == '__main__':

    try:
        main()

    except (rospy.ROSInternalException, rospy.ROSInterruptException) as e:
        rospy.logwarn_once(e)
    

