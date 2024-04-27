#!/usr/bin/env python3

import rospy
import actionlib
from std_msgs.msg import Int32
from geometry_msgs.msg import Twist
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
from dolly_action_msgs.msg import amrDockAction, amrDockGoal

class Move_To_Pallet:

    def __init__(self):

        rospy.init_node('pallet_navi_01', anonymous=False)
        rospy.loginfo("Welcome, node has begun ... ")

        self.move_cmd = rospy.Publisher('/cmd_vel', Twist, queue_size=10.0)
        self.align_amr = actionlib.SimpleActionClient('amr_docking_srv', amrDockAction)
        self.fork_move = Twist()
        self.target_reached = False
        self.is_aligned = False
        self.pallet_idx = Int32()

    def move_to_pallet(self, pallet_id):

        rospy.loginfo("Moving to pallet %s", pallet_id)

        pallet_coordinates = {'1': [1.96, -0.27, 0.73, 0.68], 
                            '2': [-0.53, -0.33, 0.43, 0.90], 
                              '0': [-0.10, -2.00, 0.026, 0.99]}

        if pallet_id in pallet_coordinates:
            coordinates = pallet_coordinates[pallet_id]

            # Move to the pallet using MoveBase
            move_base_goal = MoveBaseGoal()
            move_base_goal.target_pose.header.frame_id = 'map'
            move_base_goal.target_pose.header.stamp = rospy.Time.now()
            move_base_goal.target_pose.pose.position.x = coordinates[0]
            move_base_goal.target_pose.pose.position.y = coordinates[1]
            move_base_goal.target_pose.pose.orientation.z = coordinates[2]
            move_base_goal.target_pose.pose.orientation.w = coordinates[3]

            move_base_client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
            move_base_client.wait_for_server()
            move_base_client.send_goal(move_base_goal)
            move_base_client.wait_for_result()

            rospy.loginfo("Reached pallet %s", pallet_id)
            return True
        else:
            rospy.logwarn("Pallet ID %s not found", pallet_id)
            return False

    def main(self):
  
        while not rospy.is_shutdown():
            pallet_id = input('Enter the Pallet ID: ')
            
            if self.move_to_pallet(pallet_id) is True:
                
                self.pallet_idx.data = int(pallet_id)
                align_goal = amrDockGoal()
                align_goal.reached_point = True
                align_goal.pallet_idx = pallet_id
                self.align_amr.send_goal(align_goal)
                self.align_amr.wait_for_result()  
                  
    
if __name__ == '__main__':

    try:
        pallet_navi = Move_To_Pallet()
        pallet_navi.main()

    except rospy.ROSInterruptException:
        pass
