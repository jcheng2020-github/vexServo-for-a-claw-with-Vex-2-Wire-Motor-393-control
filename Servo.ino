#include "vexServo.hpp"
#include "Servo.h"

int vexServoPin = 9;
vexServo motor;

void setup() {
  // put your setup code here, to run once:
  motor.initial(vexServoPin);
  
  motor.setPosition(0);
  delay(1000);
  motor.setPosition(2);
  delay(1000);
  motor.setPosition(3);
  delay(1000);
  motor.setPosition(5);
  delay(1000);
  motor.setPosition(6);
  delay(1000);
  motor.setPosition(6);
  delay(1000);
  motor.setPosition(5);
  delay(1000);
  motor.setPosition(3);
  delay(1000);
  motor.setPosition(2);
  delay(1000);
  motor.setPosition(0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
