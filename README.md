# vexServo-for-a-claw-with-Vex-2-Wire-Motor-393-control
A new C++ class established for control a gripper by an Arduino Uno

The gripper is a claw as shown in 276-2600-Claw-Assembly.pdf (link: https://content.vexrobotics.com/docs/276-2600-Claw-Assembly.pdf)

The Vex 2 Wire Motor 393 drives this gripper.(link: https://www.vexrobotics.com/motors.html)

And a VEX Motor Controller 29 is required to control the Vex 2 Wire Motor 393.(link: https://www.vexrobotics.com/276-2193.html)

7.4 V DC power supply required from the orange pin to the black pin of the VEX Motor Controller 29.

The white pin of the VEX Motor Controller 29 is for a control signal.

Setting the gripper to catch state manually is required initially.

The circuit for the example Arduino Uno sketch in the Servo.ino file is as shown below:

![](circuit%20for%20the%20gripper.PNG)
