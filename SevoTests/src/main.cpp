#include <Arduino.h>
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(3);
  myServo.write(0);
}

void loop() {
  myServo.write(10);
  delay(1000);
  myServo.write(20);
  delay(1000);
  myServo.write(30);
  delay(1000);
  myServo.write(40);
  delay(1000);
  myServo.write(50);
  delay(1000);
  myServo.write(60);
  delay(1000);
  myServo.write(70);
  delay(1000);
  myServo.write(80);
  delay(1000);
  myServo.write(90);
  delay(1000);
  myServo.write(100);
  delay(1000);
  myServo.write(110);
  delay(1000);
  myServo.write(120);
  delay(1000);
  myServo.write(130);
  delay(1000);
  myServo.write(140);
  delay(1000);
  myServo.write(150);
  delay(1000);
  myServo.write(160);
  delay(1000);
  myServo.write(170);
  delay(1000);
  myServo.write(180);
  delay(1000);
}