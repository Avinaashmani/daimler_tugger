#!/usr/bin/env python3

import rospy
import actionlib 
import tf
import numpy

from geometry_msgs.msg import  Quaternion, Pose
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal

from tf.transformations import euler_from_quaternion, quaternion_from_euler

class Pallet_Navi:

    def __init__(self):
        
        rospy.init_node('pallet_navi_01', anonymous=False)
        rospy.loginfo("<<<< Welcome, Pallet Navi node has Begun >>>>")

        self.pallet_coordinates = {'1':[0.67, -1.42], '2':[0.21, 2.48], '0':[0, 0]}

        self.goal__ = Pose()

        self.reached__ = True

        self.tag_tf = tf.TransformListener()

        self.tag_child = 'tag_0'
        self.tag_parent = 'odom'

        self.quat = Quaternion()
        self.goal = MoveBaseGoal()

        if self.reached__ is True:

            self.pallet_id = input('<<< Enter the Pallet ID >>> ')

            if self.pallet_id in self.pallet_coordinates:

                coordinates = self.pallet_coordinates[self.pallet_id]

                goal_POSITION = Pose()
                goaL_QUAT = Quaternion()
        
                goaL_QUAT.z = 1.0
                goaL_QUAT.w = -0.016

                goal_POSITION.position.x = coordinates[0]
                goal_POSITION.position.y = coordinates[1]
                goal_POSITION.orientation = goaL_QUAT

            else:

                pass

        self.goal.target_pose.header.frame_id = 'map'
        self.goal.target_pose.header.stamp = rospy.Time.now()

        self.goal.target_pose.pose = goal_POSITION

        self.client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
        self.client.wait_for_server()
        self.client.send_goal(self.goal)

        wait = self.client.wait_for_result()

        self.reached__ = wait
        
        if not wait:
            rospy.loginfo("No server")
            rospy.signal_shutdown("No server")
        else:
            print(self.client.get_result())
        
        print(self.reached__)
        
        rospy.spin()
        rospy.Rate(10).sleep()

    def get_tag(self):

        try:
            self.tag_tf.waitForTransform('odom', 'tag_0', rospy.Time(), rospy.Duration(1))
        
            rospy.loginfo("tag_0 failed, trying tag_1")
            
            (trans, rot) = self.tag_tf.lookupTransform(self.tag_parent, self.tag_child, rospy.Time(0))

            self.goal__.position.x = round(trans[0], 2)
            self.goal__.position.y = round(trans[1], 2) * 0.3

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
    
    def go_to_pallet(self, coordinates):
        
        pass
   
        
if __name__=='__main__':
    try:
        result = Pallet_Navi()
    
    except rospy.ROSInterruptException:
        pass