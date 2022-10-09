#include <Arduino.h>

const int lazer = 10;
const int pResistor = A0;
const int buzzer = 9;
int tripped;

void setup() {
  // put your setup code here, to run once:

  pinMode(lazer, OUTPUT);
  pinMode(pResistor, INPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(lazer, HIGH);
  noTone(buzzer);

  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

  tripped = analogRead(pResistor);

  if (tripped < 200){

    Serial.println("The Lazer Is Primed");
    noTone(buzzer);

  }

  else{

    Serial.println("The Lazer Is Tripped");

    tone(buzzer, 1000);

  }

  delay(25);

}