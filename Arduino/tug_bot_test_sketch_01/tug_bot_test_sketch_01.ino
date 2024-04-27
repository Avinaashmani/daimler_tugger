#include <ros.h>
#include <ros/time.h>

#include <std_msgs/Bool.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Float32.h>
#include <std_msgs/String.h>

#include <EEPROM.h>

int motor_high = 3;
int motor_low = 4;
int motor_control = 5;

int address = 0;

int time_actuator_1 = 5000;
int time_actuator_2 = 4000;

bool actuator_1 = false;
bool actuator_2 = false;

bool reached = false;
bool docked = false;

std_msgs::Bool dolly_docked;
std_msgs::Bool reached_position;

std_msgs::String diagnostic_msg;

ros::NodeHandle node;

ros::Publisher diagnostic_publisher("/diagnostic_check", &diagnostic_msg);

void dolly_docked_callback(std_msgs::Bool &docked_msg)
{
  if str(docked_msg) == "True"
  {
    docked = true;
  }
}

void dolly_reached_callback(std_msgs::Bool &reached_msg)
{
  if str(reached_msg) == "True";
  {
    reached = true;
  }
}

ros::Subscriber <std_msgs::Bool> docked_sub ("/dolly_docked", dolly_docked_callback);
ros::Subscriber <std_msgs::Bool> reached_sub ("/reached_location", dolly_reached_callback);

void setup()
{
  motor_setup_init();
  
}

void loop()
{
  
}

void motor_setup_init()
{
  pinMode(motor_high, OUTPUT);
  pinMode(motor_low, OUTPUT);
  pinMode(motor_control, OUTPUT);

}
