#!/usr/bin/env python3

import rospy
import actionlib 

from std_msgs.msg import Bool
from geometry_msgs.msg import Twist
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal

class Move_To_Pallet:

    def __init__(self):

        rospy.init_node('pallet_navi_01', anonymous=False)
        rospy.loginfo("Welcome, node has begun ... ")
        
        self.move_cmd = rospy.Publisher('/cmd_vel', Twist, queue_size=10.0)
        self.fork_move = Twist()

        self.is_alligned = False

    def move_to_pallet(self, pallet_id):

        rospy.loginfo("Moving to pallet %s", pallet_id)
        rospy.Subscriber('/fork_is_docked', Bool, self.ultrasonic_align_callback)

        pallet_coordinates = {'1': [-0.590, -1.42, 1.0, -0.053], 
                          '2': [0.21, 2.48, 1.0, -0.016], 
                          '3': [0.875, -1.40, -0.1, 1.0],
                          '0': [0, 0, 0, 1.0]}

        if pallet_id in pallet_coordinates:
            coordinates = pallet_coordinates[pallet_id]

            goal = MoveBaseGoal()
            goal.target_pose.header.frame_id = 'map'
            goal.target_pose.header.stamp = rospy.Time.now()

            goal.target_pose.pose.position.x = coordinates[0]
            goal.target_pose.pose.position.y = coordinates[1]

            goal.target_pose.pose.orientation.z = coordinates[2]
            goal.target_pose.pose.orientation.w = coordinates[3]

            client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
            client.wait_for_server()
            client.send_goal(goal)
            client.wait_for_result()

            rospy.loginfo("Reached pallet %s", pallet_id)

            if pallet_id != '0':
                while not rospy.is_shutdown():
                    if self.is_alligned:
                        self.fork_move.linear.x = 0.1
                        self.move_cmd.publish(self.fork_move)
                        rospy.sleep(0.1)  # Adjust the sleep duration as needed
                    else:
                        self.fork_move.linear.x = 0.0
                        self.move_cmd.publish(self.fork_move)
                        rospy.logwarn("Fork is not docked. Waiting for 3 seconds...")
                        rospy.sleep(3)
                        if not self.is_alligned:
                            rospy.logwarn("Fork is still not docked after waiting.")
                            break
        else:
            rospy.logwarn("Pallet ID %s not found", pallet_id)

    def ultrasonic_align_callback(self, msg):
        self.is_alligned = msg.data

    def main(self):
  
        while not rospy.is_shutdown():

            pallet_id = input('Enter the Pallet ID: ')
            self.move_to_pallet(pallet_id)          
    
if __name__ == '__main__':

    try:
        pallet_navi = Move_To_Pallet()
        pallet_navi.main()

    except rospy.ROSInterruptException:
        pass
