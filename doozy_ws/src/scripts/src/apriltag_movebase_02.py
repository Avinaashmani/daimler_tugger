#!/usr/bin/env python3

import rospy
import actionlib
import tf
import math
from tf.transformations import euler_from_quaternion
from std_msgs.msg import Float64
from geometry_msgs.msg import Point
from apriltag_ros.msg import AprilTagDetection, AprilTagDetectionArray
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal

class Apriltag_navigate:

    def __init__(self):

        rospy.init_node("move_base_action_lib")
        rospy.loginfo ("Welcome, node has begun")

        self.palett_locations = {"1":[1.50, -1.42, 0.18, 1.0], "2":[0.16, 2.4, 0.18, -1.0], "3":[-0.6, -1.15, 12, 1], "0":[0, 0, 0, 1]}
        self.client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
        self.client.wait_for_server()
        
        self.tag_tf = tf.TransformListener()
        
        self.tag_position = Float64()
        self.tag_position = self.get_tag()

        self.x_ = 0.0
        self.y_ = 0.0
        self.angle_z = 0.0
        self.w = 0.0
        self.user_input = input("Enter the Pallet ID: ")
        self.goal = MoveBaseGoal()
        self.goal.target_pose.header.frame_id = 'map'
        self.goal.target_pose.header.stamp = rospy.Time.now()

        self.return_goal(self, self.user_input, self.palett_locations)

        self.goal.target_pose.pose.position.x = self.x_
        self.goal.target_pose.pose.position.y = self.y_
        self.goal.target_pose.pose.orientation.z = self.angle_z
        self.goal.target_pose.pose.orientation.w = self.w

        self.client.send_goal(self.goal)

        wait = self.client.wait_for_result()

        #rospy.Subscriber('/tag_detections', AprilTagDetectionArray, self.get_tag)
        
        #print(self.tag_position)
        
        if not wait:
            rospy.loginfo("No server")
            rospy.signal_shutdown("no server")

    def compute_goal(self):
        pass

    def get_tag(self):
        
        try:
            (trans, rot) = self.tag_tf.lookupTransform('/odom', '/tag_0', rospy.Time(0))
            rotation = euler_from_quaternion(rot)
            transalation = Point(*trans)
            return transalation.x

        except (tf.Exception, tf.ConnectivityException, tf.LookupException):
            #rospy.loginfo("TF Exception -----> Tag")
            pass

    def return_goal(self, input, dict):
        
        for x, y in dict.items():
            
            if x == input:

                self.x_ = Float64(y[0])
                self.y__ = Float64(y[1])
                self.angle_z = Float64 (y[2])
                self.w = Float64(y[3])
            else:
                pass

if __name__=='__main__':

    try:
        result = Apriltag_navigate()
        if result:
            rospy.loginfo("Goal execution Done")
    
    except rospy.ROSInterruptException:
        pass
        
