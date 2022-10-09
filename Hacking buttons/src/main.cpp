#include <Arduino.h>

const int optopin = 2;


void setup() {
  pinMode(optopin, OUTPUT);
}

void loop() {
  digitalWrite(optopin, HIGH);
  delay(15);
  digitalWrite(optopin, LOW);

  delay(5000);
}