# MR_1B_Code (Modified based on 2.120 Lab07)

2.12/2.120 Intro to Robotics  
Spring 2024[^1]


We have modified the code, including faster speed and noise filtering for robot in PID session. 



## 1 Joystick Control

### 1.1 Get Robot MAC Address

In order to establish wireless communication, we first have to make sure that both microcontrollers know each other's MAC addresses.

Run `lib/Wireless/examples/get_mac.cpp` (you will have to temporarily move the existing files inside the `src/robot/` folder and replace them with `get_mac.cpp`). Open `lib/Wireless/wireless.h` and change `robotAddr` to the MAC address being printed to the Serial monitor.

### 1.2 Get Controller MAC Address

Connect to the microcontroller on your controller and change your PlatformIO environment to be `env:controller`.


</details>

Run `lib/Wireless/examples/get_mac.cpp` (you will have to temporarily move the existing files inside the `src/controller/` folder and replace them with `get_mac.cpp`). Open `lib/Wireless/wireless.h` and change `controllerAddr` to this MAC address.

### 1.3 Validate Controller

Run `src/test_controller/controller_test.cpp`. You should see joystick readings being printed to your Serial monitor.

### 1.4 Run Controller

Upload `MR_1B_controller_main.cpp` and `MR_1B_controller_wireless.cpp` to the microcontroller on your controller. This will read the joystick and set up two-way wireless communication with the microcontroller on the mobile robot.

### 1.5 Run Joystick Control

Set your PlatformIO environment back to `env:robot`. Upload `MR_1B_robot_main.cpp`, `MR_1B_robot_drive.cpp`, `MR_1B_robot_motion_control.cpp`, and `MR_1B_robot_wireless.cpp` to the microcontroller on your mobile robot. At this point, you should be able to drive your mobile robot around with your joystick!


[^1]: Version 1 - 2016: Peter Yu, Ryan Fish and Kamal Youcef-Toumi  
  Version 2 - 2017: Yingnan Cui and Kamal Youcef-Toumi  
  Version 3 - 2019: Jerry Ng  
  Version 4 - 2023: Joseph Ntaimo, Kentaro Barhydt, Ravi Tejwani, Kamal Youcef-Toumi and Harrison Chin  
  Version 5 - 2024: Jinger Chong, Josh Sohn  
  Version 6 - 2024: Lianming Hu, Audrey Lee, Branden Francis  
