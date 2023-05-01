#include "vexServo.hpp"
#include "Servo.h"

int vexServoPin = 9;
int controlPin = 3;
vexServo motor;
long time;
bool state, temp, target = true;

void setup() {
  // put your setup code here, to run once:

  motor.initial(vexServoPin);
  pinMode(controlPin,INPUT);
  motor.setPosition(6);
  motor.setPosition(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  time = millis();

  temp = digitalRead(controlPin);
  if(state != temp)
  {
    if(state == false)
    {
      
      if(target == true)
      {
        motor.setPosition(6);
      }
      else
      {
        motor.setPosition(0);
      }
      target = !target;
    }
    state = temp;
  }
  
  while(millis() - time < 100)
  {
  }
}
