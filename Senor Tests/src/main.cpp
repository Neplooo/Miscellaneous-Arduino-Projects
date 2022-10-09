#include <Arduino.h>

//Defines The Joystick Pins
const int switchPin = 8;
const int xPin = A0;
const int yPin = A1;

void setup()
{

pinMode (switchPin, INPUT);
digitalWrite(switchPin, HIGH);
Serial.begin(9600);

}

void loop()
{

Serial.print("Switch:  ");
  Serial.print(digitalRead(switchPin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(xPin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(yPin));
  Serial.print("\n\n");
  delay(500);
}