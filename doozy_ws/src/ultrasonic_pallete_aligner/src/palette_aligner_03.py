#!/usr/bin/env python3

import rospy
import time
from std_msgs.msg import Bool
from sensor_msgs.msg import Range
from geometry_msgs.msg import Twist

class UltrasonicForkAlignment:

    def __init__(self):

        rospy.init_node("fork_aligner_03")
        rospy.loginfo("Welcome, the node has begun")

        self.Q_size = 10.0
        self.rate = 10.0

        self.range_01 = 0.0
        self.range_02 = 0.0
        self.range_03 = 0.0

        self.value_01 = 0.0
        self.value_02 = 0.0
        self.value_03 = 0.0

        self.final_out = False
        
        rospy.Subscriber('/range_sensor/one', Range, self.callback_01)
        rospy.Subscriber('/range_sensor/two', Range, self.callback_02)
        rospy.Subscriber('/range_sensor/three', Range, self.callback_03)

        self.dock_pub = rospy.Publisher('/fork_is_docked', Bool, queue_size=self.Q_size)
        self.move_fork_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=self.Q_size)

    def check_sensors(self):

        if self.value_01 < 40 and self.value_01 > 30:
            self.range_01 = True
        
        else:
            rospy.loginfo ("Right Sonar is Misaligned...")
            self.range_01 = False
            
        if self.value_02 > 30 and self.value_02 < 40:
            self.range_02 = True

        elif self.value_02 == 29:
            self.range_02 = False
            rospy.loginfo ("Center Sonar is Mis-aligned...")

        else:
            self.range_02 = False
            rospy.loginfo ("Center Sonar is Mis-aligned...")

        if self.value_03 < 50 and self.value_03 > 30:
            self.range_03 =  True

        else:
            rospy.loginfo ("Left Sonar is not Misaligned...")
            self.range_03 = False
        
        if self.range_01 and self.range_02 and self.range_03 is True:
            return True
        else:
            return False
        
    def timer_check(self):

        if self.check_sensors() is True:

            start_time = time.time()
            print(start_time - time.time())

            while time.time() - start_time < 2:

                if self.check_sensors() is True:
                    self.final_out = True              

                elif self.check_sensors() is False:
                    self.final_out = False
                    break

            return self.final_out
        
    def compute(self):

        is_docked = Bool()
        move_forks = Twist()

        print ("-----------")
        print(self.value_01)
        print(self.value_02)
        print(self.value_03)
        print ("-----------")

        print ("-----------")
        print(self.range_01)
        print(self.range_02)
        print(self.range_03)
        print ("-----------")
        print("is_aligned ---> ", self.final_out)
        print ("-----------")
        

        if self.timer_check() is True:
            is_docked = True
            move_forks.linear.x = 0.2
            rospy.loginfo ("Fork is Aligned....")

        else:
            is_docked = False
            move_forks.linear.x = 0.0
            rospy.loginfo ("Fork is Misaligned....")

    
        self.dock_pub.publish(is_docked)
        #self.move_fork_pub.publish(move_forks)    

    def ros_spin(self):

        r = rospy.Rate(self.rate)
        while not rospy.is_shutdown():
            self.compute()
            r.sleep()

    def callback_01(self, msg):
        self.value_01 = msg.range
    def callback_02(self, msg):
        self.value_02 = msg.range
    def callback_03(self, msg):
        self.value_03 = msg.range

if __name__=='__main__':

    try:
        ultrasonic_checker = UltrasonicForkAlignment()
        ultrasonic_checker.ros_spin()
    
    except rospy.ROSInternalException:
        pass