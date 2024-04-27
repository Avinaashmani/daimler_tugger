#include <ros.h>
#include <sensor_msgs/Range.h>
#include <std_msgs/Int32.h>


int sonarPin_1 = A0;
int sonarPin_2 = A2;
int sonarPin_3 = A1;

float sonar_1;
float sonar_2;
float sonar_3;

sensor_msgs::Range sonar1;
sensor_msgs::Range sonar2;
sensor_msgs::Range sonar3;

std_msgs::Int32 sonar_int1;
std_msgs::Int32 sonar_int2;
std_msgs::Int32 sonar_int3;

ros::Publisher range_1 ("/range_sensor/one", &sonar1);
ros::Publisher range_2 ("/range_sensor/two", &sonar2);
ros::Publisher range_3 ("/range_sensor/three",&sonar3);

ros::Publisher int_range1("/int_range/one", &sonar_int1);
ros::Publisher int_range2("/int_range/two", &sonar_int2);
ros::Publisher int_range3("/int_range/three", &sonar_int3);

ros::NodeHandle node;

int seq = 0;

void setup() 
{
  Serial.begin(57600);

  node.initNode();
  node.advertise(range_1);
  node.advertise(range_2);
  node.advertise(range_3);

  node.advertise(int_range1);
  node.advertise(int_range2);
  node.advertise(int_range3);
}

void loop() 
{
  read_sensor_1();
  read_sensor_2();
  read_sensor_3();

  sonar1.header.seq = seq;
  sonar1.range = sonar_1;

  sonar2.header.seq = seq;
  sonar2.range = sonar_2;

  sonar3.header.seq = seq;
  sonar3.range = sonar_3;

  sonar_int1.data = analogRead(sonarPin_1)/2;
  sonar_int2.data = analogRead(sonarPin_2)/2;
  sonar_int3.data = analogRead(sonarPin_3)/2;

  range_1.publish(&sonar1);
  range_2.publish(&sonar2);
  range_3.publish(&sonar3);  

  int_range1.publish(&sonar_int1);
  int_range2.publish(&sonar_int2);
  int_range3.publish(&sonar_int3);  

  seq++;

  node.spinOnce();

}

void read_sensor_1()
{
  sonar_1 = analogRead(sonarPin_1)/2;
  return sonar_1;
}

void read_sensor_2()
{
  sonar_2 = analogRead(sonarPin_2)/2;
  return sonar_2;
}

void read_sensor_3()
{
  sonar_3 = analogRead(sonarPin_3)/2;
  return sonar_3;
}
