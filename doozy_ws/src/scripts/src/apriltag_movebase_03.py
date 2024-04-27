#!/usr/bin/env python3

import rospy
from math import ceil, floor
from geometry_msgs.msg import Pose
from std_msgs.msg import Float64
from apriltag_ros.msg import AprilTagDetectionArray


class Apriltag_navigate:

    def __init__(self):

        rospy.init_node("move_base_action_lib")
        rospy.loginfo ("Welcome, node has begun")
        
        self.tag_orientation = Pose()
        self.tag_position = Pose() 

        self.x = Float64()
        self.y = Float64()
        self.z = Float64()

        rospy.Subscriber('/tag_detections', AprilTagDetectionArray, self.get_tag)

        self.compute()
        #rospy.spin()
        rospy.Rate(10).sleep()
        

    def get_tag(self, msg):

        self.tag_position.position.x = msg.detections[0].pose.pose.pose.position.x
        self.tag_position.position.y = msg.detections[0].pose.pose.pose.position.y
        self.tag_position.position.z = msg.detections[0].pose.pose.pose.position.z

        self.tag_position.orientation.x = msg.detections[0].pose.pose.pose.orientation.x
        self.tag_position.orientation.y = msg.detections[0].pose.pose.pose.orientation.y
        self.tag_position.orientation.z = msg.detections[0].pose.pose.pose.orientation.z
        self.tag_position.orientation.w = msg.detections[0].pose.pose.pose.orientation.w
        
        self.x.data = self.tag_position.position.z
        self.y.data = self.tag_position.position.x
        self.z.data = self.tag_position.orientation.z
        
        print((float(self.tag_position.position.z)))
    
    def compute(self):
        
        print(self.x)
        #print(self.y)
        #print(self.z)


            

if __name__=='__main__':


    try:
        result = Apriltag_navigate()

    
    except rospy.ROSInterruptException:
        pass
        
