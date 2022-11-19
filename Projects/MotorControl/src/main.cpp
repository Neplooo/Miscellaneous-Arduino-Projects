#include <Arduino.h>

const int motor = 7;
char command = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(motor, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {

    command = Serial.read();

    if(command == "start") {

      digitalWrite(motor, HIGH);

    }else{

      digitalWrite(motor, LOW);

    }

  }

}