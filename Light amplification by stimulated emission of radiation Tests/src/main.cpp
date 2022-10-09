#include <Arduino.h>

const int buttonPin = 2;

void setup ()
{
pinMode (1, OUTPUT); // define the digital output interface 13 feet
}
void loop () {
digitalWrite (1, HIGH); // open the laser head 
delay (1000); // delay one second
digitalWrite (1, LOW); // turn off the laser head 
delay (1000); // delay one second
 
}




