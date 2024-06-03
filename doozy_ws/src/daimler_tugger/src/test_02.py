#!/usr/bin/env python3

import time
import sys
import serial
import serial.serialutil
import rospy
import smach
from std_srvs.srv import SetBool, SetBoolResponse

class TugArm():
    def __init__(self) -> None:
        
        rospy.init_node('tug_arm')
        rospy.loginfo_once("Tug arm controller")

        self.turn_tug = '1'
        
        self.arduino_port = '/dev/ttyACM1'
        self.baud_rate = 57600
        self.set_bool = SetBool()

        try:
            rospy.Service('turn_tug', SetBool, self.tug_srv_callback)
        
        except rospy.ServiceException as e:
            rospy.logerr(e)

    def tug_srv_callback(self, req):
        self.request = req.data
        
        if self.request:
            
            try:
                self.arduino_open = serial.Serial(self.arduino_port, self.baud_rate, timeout=0)
            
            except serial.serialutil.SerialException as e:
                rospy.logerr_once(e)

            time.sleep(2)
            rospy.loginfo_once(f"Opening port {self.arduino_port} with rate {self.baud_rate}")
            time.sleep(2)

            if self.request:
                self.arduino_open.write(self.turn_tug.encode('ascii'))
                rospy.loginfo_once(f"Writing to arduino {self.turn_tug}")
            # else:
            #     pass

            while self.arduino_open.open:
                    
                time.sleep(2)
                self.read_input = self.arduino_open.readline().decode().strip()
                rospy.loginfo(f"Arduino Feedback {self.read_input}")
                if self.read_input == 'OK':
                    rospy.loginfo(f"Arduino Feedback {self.read_input}")
                    rospy.loginfo_once ("Recieved positive feedback..")
                    rospy.signal_shutdown("Recieved positive feedback")
                    rospy.on_shutdown(self.on_shutdown_cb)
                    # self.arduino_open.close()
                    break
        
        self.request = False  
        return True

                
                # sys.exit()
            

    def on_shutdown_cb(self):
        rospy.loginfo("Exiting")

def main():
    # while not rospy.is_shutdown():
    TugArm()
    rospy.spin()

if __name__ == '__main__':

    try:
        main()

    except (rospy.ROSInternalException, rospy.ROSInterruptException) as e:
        rospy.logwarn_once(e)
    

