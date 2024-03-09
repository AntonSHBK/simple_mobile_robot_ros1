#include <iostream>
#include <string>
#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "std_msgs/String.h"

ros::Publisher front_left_wheel_pub, front_right_wheel_pub;
ros::Publisher back_left_wheel_pub, back_right_wheel_pub;

void commandsCallback(const std_msgs::String::ConstPtr& msg) {
  float leftSpeed = 0;
  float rightSpeed = 0;

  std::string command = msg->data;

  if(command == "GO") 
  {
    leftSpeed = -1.0;
    rightSpeed = -1.0;
  }
  else if(command == "GO_REALLY_FAST")
  {
    leftSpeed = -10.0; // radians per second
    rightSpeed = -10.0;
  }
  else if(command == "BACK") 
  {
    leftSpeed = 0.5;
    rightSpeed = 0.5;
  } 
  else if(command == "LEFT") 
  {
    leftSpeed = -1.0;
    rightSpeed = -0.5;
  } 
  else if(command == "RIGHT") 
  {
    leftSpeed = -0.5;
    rightSpeed = -1.0;
  } 
  else 
  {
    leftSpeed = 0.0;  // Stop the robot
    rightSpeed = 0.0;
  }

  // send messages
  std_msgs::Float64 msgFrontLeft, msgFrontRight;
  std_msgs::Float64 msgBackLeft, msgBackRight;

  msgFrontLeft.data = leftSpeed;
  msgBackLeft.data = leftSpeed;
  msgFrontRight.data = rightSpeed;
  msgBackRight.data = rightSpeed;

  front_left_wheel_pub.publish(msgFrontLeft);
  back_left_wheel_pub.publish(msgBackLeft);
  front_right_wheel_pub.publish(msgFrontRight);
  back_right_wheel_pub.publish(msgBackRight);
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "Simple_Controller");
  ros::NodeHandle n;

  ros::Subscriber commandSub = n.subscribe("my_motor_commands", 1000, commandsCallback);

  front_left_wheel_pub = n.advertise<std_msgs::Float64>("/front_left_wheel_controller/command", 1000);
  front_right_wheel_pub = n.advertise<std_msgs::Float64>("/front_right_wheel_controller/command", 1000);
  back_left_wheel_pub = n.advertise<std_msgs::Float64>("/back_left_wheel_controller/command", 1000);
  back_right_wheel_pub = n.advertise<std_msgs::Float64>("/back_right_wheel_controller/command", 1000);

  ros::spin();

  return 0;
}
