#include <Arduino.h>
const int led = 13;


void setup() {
  // put your setup code here, to run once:

  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  while(1 > 0){

    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    
  }



}