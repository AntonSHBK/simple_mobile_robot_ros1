cmake_minimum_required(VERSION 3.0.2)
project(mobile_robot_base_ros1)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
    roscpp
    rospy
    std_msgs
    message_generation
    sensor_msgs
    cv_bridge
    image_transport
)

find_package(catkin REQUIRED COMPONENTS
    ${PKG_DEPS}
    ${OpenCV_INCLUDE_DIRS})

find_package(OpenCV 4.2.0 REQUIRED)

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
#   CATKIN_DEPENDS roscpp rospy std_msgs message_runtime
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
    {OpenCV_INCLUDE_DIRS}
)

#############
## Install ##
#############

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
catkin_install_python(
    PROGRAMS
    scripts/camera_view.py
    DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

add_executable(simple_motor_controller src/simple_controller.cpp)

target_link_libraries(
    simple_motor_controller 
    ${catkin_LIBRARIES}
)

