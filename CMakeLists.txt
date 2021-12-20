cmake_minimum_required(VERSION 3.0.2)
project(robosys_2021)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES robosys_2021_ros
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)


add_executable(stu src/students.cpp)
add_executable(pro src/professor.cpp)

target_link_libraries(stu
  ${catkin_LIBRARIES}
)
target_link_libraries(pro
  ${catkin_LIBRARIES}
)
                                                                                                                                                                                                                                                                                                                 


