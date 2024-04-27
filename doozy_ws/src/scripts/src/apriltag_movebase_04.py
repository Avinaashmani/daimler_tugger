#!/usr/bin/env python3

import rospy
import actionlib
import tf
from math import pi, ceil, floor
import numpy

from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
from apriltag_ros.msg import AprilTagDetectionArray
from std_msgs.msg import Float64
from geometry_msgs.msg import Point, Quaternion, Pose

from tf.transformations import euler_from_quaternion, quaternion_from_euler


class Apriltag_navigate:

    def __init__(self):

        rospy.init_node("move_base_action_lib")
        rospy.loginfo ("Welcome, node has begun")
        
        self.client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
        self.client.wait_for_server()

        self.tag_pose = Point()
        self.tag_orientation = Quaternion()
        self.goal__ = Pose()

        self.tag_tf = tf.TransformListener()
        
        try:
            self.tag_tf.waitForTransform('map', 'tag_0', rospy.Time(), rospy.Duration(1.0))
        
        except (tf.LookupException, tf.ConnectivityException, tf.Exception):
            rospy.loginfo("TF Wait exception")

        self.goal = MoveBaseGoal()
        self.goal.target_pose.header.frame_id = 'map'
        self.goal.target_pose.header.stamp = rospy.Time.now()

        self.goal.target_pose.pose = self.get_tag()

        self.client.send_goal(self.goal)

        wait = self.client.wait_for_result()
        
        if not wait:
            rospy.loginfo("No server")
            rospy.signal_shutdown("no server")
        
        #rospy.Subscriber('/tag_detections', AprilTagDetectionArray, self.get_tag)
        rospy.spin()
        #rospy.Rate(10).sleep()
    """"
    def get_tag(self, msg):

        self.tag_pose.x = msg.detections[0].pose.pose.pose.position.z
        self.tag_pose.y = msg.detections[0].pose.pose.pose.position.x
        #self.tag_pose.z = msg.detections[0].pose.pose.pose.position.y

        self.tag_orientation.x = msg.detections[0].pose.pose.pose.orientation.z
        self.tag_orientation.y = msg.detections[0].pose.pose.pose.orientation.x
        self.tag_orientation.z = msg.detections[0].pose.pose.pose.orientation.y
        self.tag_orientation.w = msg.detections[0].pose.pose.pose.orientation.w

        print(self.tag_orientation)
        print(self.tag_pose) 
    """
    def get_tag(self):

        try:
            (trans, rot) = self.tag_tf.lookupTransform('odom', 'tag_0', rospy.Time(0))
            
            self.goal__.position.x = round(trans[0], 2)
            self.goal__.position.y = (round(trans[1], 2))*0.2
            quat = Quaternion(*rot)
            
            self.goal__.orientation.z = float(int(rot[2]))
            self.goal__.orientation.w = 1.0
            
            euler = euler_from_quaternion(rot)
            degrees = numpy.rad2deg(euler)

            print(self.goal__.position)
            print("----------")
            print(degrees[2])
            return self.goal__
        
        except (tf.LookupException, tf.ConnectivityException, tf.Exception):
            rospy.loginfo("TF Lookup exception -- TAG")

if __name__=='__main__':

    try:
        result = Apriltag_navigate()

    except rospy.ROSInterruptException:
        pass
        