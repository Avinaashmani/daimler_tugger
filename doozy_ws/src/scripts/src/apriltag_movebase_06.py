#!/usr/bin/env python3

import rospy
import actionlib 
import tf
import numpy

from geometry_msgs.msg import Quaternion, Pose, Twist
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
from tf.transformations import euler_from_quaternion




def main():

    rospy.init_node('pallet_navi_01', anonymous=False)
    rospy.loginfo("Welcome, Pallet Navi node has Begun")
    

    rospy.wait_for_service('/move_base/clear_costmaps')

    goal = MoveBaseGoal()
    goal.target_pose.header.frame_id = 'map'
    goal.target_pose.header.stamp = rospy.Time.now()

    try:

        while not rospy.is_shutdown():
            pallet_id = input('Enter the Pallet ID: ')

            rospy.loginfo("Moving to pallet %s", pallet_id)

            pallet_coordinates = {'1': [-0.590, -1.42, 1.0, -0.053], '2': [0.21, 2.48, 1.0, -0.016], '3' : [0.875, -1.40, 0.007, 1.0],'0': [0, 0]}

            if pallet_id in pallet_coordinates:
                coordinates = pallet_coordinates[pallet_id]

                goal_POSITION = Pose()
                goaL_QUAT = Quaternion()
        
                goaL_QUAT.z = 1.0
                goaL_QUAT.w = -0.016

                goal_POSITION.position.x = coordinates[0]
                goal_POSITION.position.y = coordinates[1]
                goal_POSITION.orientation = goaL_QUAT

                goal.target_pose.pose = goal_POSITION

                client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
                client.wait_for_server()
                client.send_goal(goal)
                client.wait_for_result()

                rospy.loginfo("Reached pallet %s", pallet_id)

                goal__ = Twist()
    
                align_pub = rospy.Publisher('/cmd_vel',Twist, queue_size=10)
                start_time = rospy.get_rostime()

                """ 
                while (rospy.get_rostime() - start_time).to_sec() < 2:
        
                    align_pub.publish(goal__)
                    goal__.linear.x = 0.1
                    rospy.Rate(10).sleep()
                    goal__.linear.x = 0.0
                    align_pub.publish(goal__)
                """

                rospy.loginfo("Getting tag...")
            else:
                rospy.logwarn("Pallet ID %s not found", pallet_id)
                return False


            try:
                goal__ = Twist()
                align_pub = rospy.Publisher('/cmd_vel',Twist, queue_size=10)
                
                goal__.linear.x = 0.1
                align_pub.publish (goal__)
                
                tag_tf = tf.TransformListener()
                tag_child = 'camera_rgb_optical_frame'
                tag_parent ='tag_0'
                tag_tf.waitForTransform(tag_parent, tag_child, rospy.Time(), rospy.Duration(1))
                rospy.loginfo("tag_0, recieved...")
                (trans, rot) = tag_tf.lookupTransform(tag_parent, tag_child, rospy.Time(0))

                
            except (tf.LookupException, tf.ConnectivityException, tf.Exception):

                rospy.loginfo("TF Lookup exception -- TAG")


    except rospy.ROSInterruptException:
        rospy.loginfo("Exiting...")


if __name__ == '__main__':

    main()
