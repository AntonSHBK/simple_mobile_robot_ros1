# Simple robot with ros1

![Gazebo + OpenCV](/imgs/gazebo_camera.jpg)


Requirements:
- f
- g
- f
  
#### For the developers only
##### 1. Create **catkinized**  workspace.
##### 2. Clone this repository.
```bash
cd <catkin_ws>/src
git clone https://github.com/CIR-KIT-Unit03/cirkit_unit03_common.git
```
##### 4. Download depended packages by rosdep.
```bash
cd <catkin_ws>
rosdep install -i -r -y --from-paths src --ignore-src
```
##### 5. Build packages, and set the path for the packages.
```bash
cd <catkin_ws>
catkin_make
source devel/setup.bash
```


Tree's project:
```
.
├── CMakeLists.txt
├── LICENSE
├── README.md
├── config
│   └── robot_joint_state.yaml
├── docker
│   ├── Dockerfile
│   └── docker-compose.yml
├── imgs
├── include
│   └── mobile_robot_base_ros1
│       └── example.h
├── launch
│   ├── gazebo.launch
│   ├── robot_base.launch
│   └── rviz.launch
├── meshes
│   └── init
├── models
│   ├── map_ground
│   │   ├── materials
│   │   │   ├── scripts
│   │   │   │   └── map_ground.material
│   │   │   └── textures
│   │   │       └── map.jpg
│   │   ├── model.config
│   │   └── model.sdf
│   └── my_model
│       ├── materials
│       │   ├── scripts
│       │   │   └── my_material.material
│       │   └── textures
│       │       └── ball.png
│       ├── meshes
│       │   └── shelf_pin.stl
│       ├── model.config
│       └── model.sdf
├── package.xml
├── requirements.txt
├── rviz
│   └── base.rviz
├── scripts
│   ├── camera_view.py
│   └── class_example_cv.py
├── src
│   └── simple_controller.cpp
├── srv
│   └── init
├── urdf
│   ├── camera.xacro
│   ├── common_macro.xacro
│   ├── control_block.xacro
│   ├── corpus.xacro
│   ├── main.xacro
│   └── wheel.xacro
└── world
    ├── empty_world.world
    ├── map.jpg
    └── map_ground.material
```






