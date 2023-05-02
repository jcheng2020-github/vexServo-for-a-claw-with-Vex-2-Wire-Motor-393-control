## Use the Start button of the Xbox controller to control the gripper open and close:
# Instructions to setup the circuit for the gripper:
* Make Arduino Mega 2560 and Arduino UNO of gripper common ground
* Connect Pin8 of Arduino Mega 2560 to Pin3 of Arduino Uno, where Pin 3 recieves pulse signal.
* Run Chris Annin's ARCS program `AR4 HMI interface 1.3 exe` for AR4 form page: https://www.anninrobotics.com/downloads,
setup the COM port for Arduino Mega 2560, activate xbox controller control mode. Then the user is able to control the open and close of the gripper.
