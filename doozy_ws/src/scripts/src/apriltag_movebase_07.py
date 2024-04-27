#!/usr/bin/env python3

import rospy
import actionlib 

from geometry_msgs.msg import Twist
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal

from jsk_recognition_msgs.msg import BoundingBox

def move_to_pallet(pallet_id):

    rospy.loginfo("Moving to pallet %s", pallet_id)
    #rospy.Subscriber('/tag_detections', AprilTagDetectionArray, tag_detections_callback)

    pallet_coordinates = {'1': [-0.590, -1.42, 1.0, -0.053], 
                          '2': [0.21, 2.48, 1.0, -0.016], 
                          '3': [0.875, -1.40, -0.1, 1.0],
                          '0': [0, 0]}

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
        rate = rospy.Rate(10)  
    else:
        rospy.logwarn("Pallet ID %s not found", pallet_id)

def main():

    rospy.init_node('pallet_navi_01', anonymous=False)
    rospy.loginfo("Welcome, Pallet Navi node has Begun")

    box_one = BoundingBox()
    box_two = BoundingBox()
    box_three = BoundingBox()

    box_1 = rospy.Publisher('/bounding_box/One', BoundingBox, queue_size=10)
    box_2 = rospy.Publisher('/bounding_box/Two', BoundingBox, queue_size=10)        
    box_3 = rospy.Publisher('/bounding_box/Three', BoundingBox, queue_size=10)

    box_one.pose.position.x = -1.87
    box_one.pose.position.y = -1.50
    box_one.pose.position.z = 0.1
        
    box_one.dimensions.x = 0.4
    box_one.dimensions.y = 0.2
    box_one.dimensions.z = 0.2

    box_two.pose.position.x = -1.87
    box_two.pose.position.y = 2.44
    box_two.pose.position.z = 0.1
        
    box_two.dimensions.x = 0.4
    box_two.dimensions.y = 0.2
    box_two.dimensions.z = 0.2

    box_three.pose.position.x = 2.50
    box_three.pose.position.y = -1.41
    box_three.pose.position.z = 0.1
        
    box_three.dimensions.x = 0.4
    box_three.dimensions.y = 0.2
    box_three.dimensions.z = 0.2

    box_one.header.frame_id ='map'
    box_two.header.frame_id ='map'
    box_three.header.frame_id ='map'

    while not rospy.is_shutdown():

        box_1.publish(box_one)
        box_2.publish(box_two)
        box_3.publish(box_three)   

        pallet_id = input('Enter the Pallet ID: ')
        move_to_pallet(pallet_id)
        
if __name__ == '__main__':
    main()
