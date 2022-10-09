#include <Arduino.h> //Arduino Library
#include <AFMotor.h> //Motor Driver Library

//Joystick Ports
#define xAxis  A0 
#define yAxis  A1

//Joystck Variables
int xVal = 0;
int yVal = 0;

//Defines First DC Motor
AF_DCMotor motor1(1);

//Creates a variable for the speed of the DC Motor
int  speed(int percent)
{
  return map(percent, 0, 100, 0, 255);
}

//Nothing For Setup Code
void setup() {
}

void loop() {

//If The X Axis is over 512 degrees then the motor moves forward at 100% Speed
if (xVal > 512) {

  motor1.setSpeed( speed(100) );
  motor1.run(FORWARD);

}

//If The X Axis is under 512 degrees then the motor moves backwards at 100% Speed
if (xVal < 512) {

  motor1.setSpeed( speed(100) );
  motor1.run(BACKWARD);

}

}

