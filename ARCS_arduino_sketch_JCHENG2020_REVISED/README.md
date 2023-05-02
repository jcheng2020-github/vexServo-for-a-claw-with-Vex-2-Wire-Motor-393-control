# Use the start button of the Xbox controller to control the gripper open and close
## Instructions to setup the circuit for the gripper:
* Make Arduino Mega 2560 and Arduino UNO of gripper common ground
* Connect Pin 8 of Arduino Mega 2560 to Pin3 of Arduino Uno, where Pin 3 receives the pulse signal.
## Circuit Diagram:
![](gripper%20ARCS%20Arduino%20Mega%202560-Arduino%20Uno-Vex%20Motor%20Controller%2029%20diagram.PNG)
## Instructions to setup ARCS program:
* Connect Arduino Mega 2560 to a Windows PC computer by a USB cable. And burn Arduino Mega 2560 script `ARCS_arduino_sketch_JCHENG2020_REVISED` in the Arduino Mega 2560 (gripper)
* Run Chris Annin's ARCS program `AR4 HMI interface 1.3 exe` for AR4 form page: https://www.anninrobotics.com/downloads,
setup the COM port for Arduino Mega 2560, activate xbox controller control mode. Then the user is able to control the open and close of the gripper by pushing and releasing the start button of the Xbox controller.
