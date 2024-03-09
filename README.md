# Simple robot with ros1

![Gazebo + OpenCV](/imgs/gazebo_camera.jpg)


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
