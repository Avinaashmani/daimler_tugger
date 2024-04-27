#!/usr/bin/env python3

import rospy
from playsound import playsound
from sensor_msgs.msg import LaserScan
from std_msgs.msg import String, Bool

class ObstacleDetect:

    def __init__(self):

        rospy.init_node("obstacle_detect",anonymous=False)
        rospy.loginfo("Welcome, Node has Begun")

        self.laser_ranges = 0.0
        self.obstacle_present = False
        #self.dist_cm = 0.0

        self.obstacle_detect = False

        self.Q_Size = 10.0
        self.rate = 10.0
        
        obstacle_pressence_pub = rospy.Publisher('/turtleBot3/Obstacle_pressence',Bool, queue_size=self.Q_Size)
        rospy.Subscriber('/scan',LaserScan, self.callback_laser)

    def compute(self):
        
        if (self.laser_ranges != 'inf'):
            if (self.laser_ranges <1.0):
                self.obstacle_present = True
                playsound('/home/avinaash/doozy_ws/src/speech_obstacle_presence.mp3')
            else:
                self.obstacle_present = False
        else:
            print("there is nothing infront of the robot")
        rospy.loginfo(self.obstacle_present)


    def ros_spin(self):

        r = rospy.Rate(self.rate)
        while not rospy.is_shutdown():
            self.compute()
            r.sleep()
    
    def callback_laser(self, msg):
        self.laser_ranges = msg.ranges[1]
        


if __name__ == '__main__':
    try:
        obstacle_detect = ObstacleDetect()
        obstacle_detect.ros_spin()
    except rospy.ROSInterruptException():
        pass