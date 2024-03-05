cmake_minimum_required(VERSION 3.0.2)
project(mobile_robot_base_ros1)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)

## Generate messages in the 'msg' folder
# add_message_files(
#   FILES
#   Num.msg
# )

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   AddTwoInts.srv
# )

## Generate added messages and services with any dependencies listed here
# generate_messages(
#   DEPENDENCIES
#   std_msgs
# )

catkin_package(
  # INCLUDE_DIRS include
  # LIBRARIES beginner_tutorials
  CATKIN_DEPENDS roscpp rospy std_msgs message_runtime
  # DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
    include 
    ${catkin_INCLUDE_DIRS}
)

#############
## Install ##
#############

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
# catkin_install_python(
#   PROGRAMS
#   scripts/talker.py
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

add_executable(my_publisher src/main.cpp)
target_link_libraries(my_publisher ${catkin_LIBRARIES})

