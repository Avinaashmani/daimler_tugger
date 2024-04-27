#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSHistoryPolicy, QoSProfile, QoSReliabilityPolicy
from std_msgs.msg import String
from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult

class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.navigator = BasicNavigator()

        self.initial_pose = PoseStamped()
        self.qos_profile = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=1
        )
        
        self.pallet_id_pub = self.create_publisher(String, topic='/pallet_idx', qos_profile=self.qos_profile)
        # ^^^ Publisher for sending pallet ID

    def start(self):
        self.initial_pose.header.frame_id = 'map'
        self.initial_pose.header.stamp = self.navigator.get_clock().now().to_msg()
        self.initial_pose.pose.position.x = 1.0
        self.initial_pose.pose.position.y = 2.0
        self.initial_pose.pose.orientation.z = 1.0
        self.initial_pose.pose.orientation.w = 0.0

        self.navigator.lifecycleStartup()

        self.goal_poses = [
            PoseStamped(),
            PoseStamped(),
            PoseStamped(),
            PoseStamped()
        ]

        # Setting up goal poses
        for i, pose in enumerate(self.goal_poses):
            pose.header.frame_id = 'map'
            pose.header.stamp = self.navigator.get_clock().now().to_msg()
            pose.pose.position.x = [-0.00800, 2.00, 0.006, -2.009][i]
            pose.pose.position.y = [2.0, -0.00044, -2.00, -0.00046][i]
            pose.pose.orientation.z = [-0.70, 0.99, 0.70, -0.00055][i]
            pose.pose.orientation.w = [0.70, 6.00, 0.70, 0.99][i]

        self.current_goal_index = 0
        self.navigator.goToPose(self.goal_poses[self.current_goal_index])

        while True:
            user_input = input("Enter the next goal ID (0, 1, 2, 3) or 'exit' to end: ")
            if user_input == 'exit':
                break
            try:
                goal_id = int(user_input)
                if goal_id < 1 or goal_id > len(self.goal_poses):
                    print("Invalid goal ID. Please enter a number between 1 and", len(self.goal_poses))
                    continue
                self.current_goal_index = goal_id - 1
                self.navigator.goToPose(self.goal_poses[self.current_goal_index])
                # Publish pallet ID
                pallet_id_msg = String()
                pallet_id_msg.data = user_input
                self.pallet_id_pub.publish(pallet_id_msg)
            except ValueError:
                print("Invalid input. Please enter a valid goal ID or 'exit'.")

        result = self.navigator.getResult()
        if result == TaskResult.SUCCEEDED:
            print('Goal succeeded!')
        elif result == TaskResult.CANCELED:
            print('Goal was canceled!')
        elif result == TaskResult.FAILED:
            print('Goal failed!')
        else:
            print('Goal has an invalid return status!')

        rclpy.shutdown()

def main():
    rclpy.init()
    robot_controller = RobotController()
    robot_controller.start()

if __name__ == '__main__':
    main()
