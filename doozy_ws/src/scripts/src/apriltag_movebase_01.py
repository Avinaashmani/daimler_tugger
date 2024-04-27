#!/usr/bin/env python3

import rospy
import actionlib

from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal

class Apriltag_navigate:

    def __init__(self):

        rospy.init_node("move_base_action_lib")
        rospy.loginfo ("Welcome, node has begun")
        
        self.client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
        self.client.wait_for_server()

        self.goal = MoveBaseGoal()
        self.goal.target_pose.header.frame_id = 'map'
        self.goal.target_pose.header.stamp = rospy.Time.now()

        self.goal.target_pose.pose.position.x = -1.352
        self.goal.target_pose.pose.position.y = -1.497
        self.goal.target_pose.pose.orientation.z = 1.0
        self.goal.target_pose.pose.orientation.w = 0.041

        self.client.send_goal(self.goal)

        wait = self.client.wait_for_result()

        if not wait:
            rospy.loginfo("No server")
            rospy.signal_shutdown("no server")

    
if __name__=='__main__':

    try:
        result = Apriltag_navigate()
        if result:
            rospy.loginfo("Goal execution Done")
    except rospy.ROSInterruptException:
        pass
        
