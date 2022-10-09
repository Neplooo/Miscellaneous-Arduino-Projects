#include <Arduino.h>
#include <Servo.h>

//Defines Servo Ports
Servo myServo;
const int servo = 3;

//Defines The Joystick Pins
const int switchPin = 8;
const int xPin = A0;
const int yPin = A1;

void setup() {
  myServo.attach(servo);
  myServo.write(0);
}

void loop() {

int valX = analogRead(xPin);
valX = map(valX, 0, 1023, HIGH, LOW);

int valY = analogRead(yPin); 
valY = map(valY, 0, 1023, 10, 170);

int switchVal = analogRead(switchPin);


myServo.write(valY);

}