# robosys_2021

In this package, the professor gives credits to the student according to the amount paid by the student. The number of credits that a student receives is determined by the amount paid by the student and a random number.

### Nodes

There are two nodes in this package, ```student``` and ```professor```.

- ```student```: A node for entering an amount.
- ```professor```: A node for giving credits to the received amount(USD). The number of credits to be given is as follows.
  - 0〜999: 0(Displayed as ```I will not give you any credits.```)
  - 1000〜9999: 1~3
  - 10000〜99999: 4~7
  - 100000〜999999: 8~10
  - 1000000〜: Provide enough credits to graduate.(Displayed as ```I allow you to graduate this college```)
  
The number of credits is determined by a random number.

# Execution environment
This package have been developed and tested on ROS Melodic. Please see below for details.

- ROS Melodic
  - OS: ubuntu 18.04 LTS
  - ROS Distribution: Melodic Morenia
# Install
- ROS
  - http://wiki.ros.org/melodic/Installation
- Create a [catkin](http://wiki.ros.org/catkin#Installing_catkin) workspace
  - http://wiki.ros.org/ja/catkin/Tutorials/create_a_workspace
- Clone this repository and enter it:
```
git clone git@github.com:kippei-onishi/robosys_2021_ros.git
cd ~/catkin_ws
catkin build
```
# Usage Instructions
Open a terminal and enter this command to start ROS:
```
roscore
```
Starting publisher, open another terminal and enter this command(```terminal1```):
```
rosrun robosys_2021 stu
```
Starting subscriber, open another terminal and enter this command(```terminal2```):
```
rosrun robosys_2021 pro
```
In ```terminal1```, Enter the amount as shown below. 

![ter1](https://user-images.githubusercontent.com/94519129/146707955-5044a251-f351-4696-ad5f-46818cee6d6c.png)

In ```terminal2```, it will be displayed as follows.

![ter2](https://user-images.githubusercontent.com/94519129/146708339-7f69607e-bc48-459e-8005-4f93b3c5566a.png)

When you enter the amount, it will be displayed as follows. The left side is ```student``` and the right side is ```professor```.

![Screenshot from 2021-12-20 12-44-22](https://user-images.githubusercontent.com/94519129/146709021-389d277f-0311-4732-963c-c411cf5267e0.png)

- To stop node ```student```, enter a number greater than or equal to 999999999999.
- To stop node ```professor```, enter ```ctrl + c```.

# Note

You can not obtain credits if you pay money to your professors.

# Author
- Chiba Institute of Technology 
  - Kippei Onishi(s18C1019UM@s.chibakoudai.jp) and Ryuichi Ueda  

# License

"robosys_2021" is under [BSD 3-Clause "New" or "Revised" License](https://en.wikipedia.org/wiki/BSD_licenses).
