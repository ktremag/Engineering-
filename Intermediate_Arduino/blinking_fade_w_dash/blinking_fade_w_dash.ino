/* 
Kit Tremaglio
Blinking Fade with Dash
Intermediate Arduino
Fall 2019
*/
#include "Arduino.h"
#define led 	10
 int val = 0; //level of led brightness
 int amnt = 15; //amount it changes by



void setup() 
{
  // beginning serial monitor and defining the led as output 
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
 
  // main code to run repeat. 
  int num = val/17; // reducing 255 to increments of 15
  analogWrite(led, val);  // turn the LED on (HIGH is the voltage level)
  delay(100);  
  val+= amnt; // adding amnt each loop
  for(int i = num; i >= 0; i--) //repeat till num and then repeats
  {
  	Serial.print("-"); //dashes
  }
  Serial.println();
  if (val >= 255 || val <= 0) //creates bounds 
  amnt = -amnt;

  
}
