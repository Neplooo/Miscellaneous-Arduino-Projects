#include <Arduino.h>

const int led = 13;
const int pot = A0;

void setup() {
  // put your setup code here, to run once:

  pinMode(led, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int potVal = analogRead(pot);

  analogWrite(led, potVal);

  Serial.print(potVal);

  delay(3);
}