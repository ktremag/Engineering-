//_0.ino
#include "Arduino.h"
#define led 	10
 int val = 0; //level of led brightness
 int amnt = 15; //amount it changes by



void setup() 
{
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
 
  // put your main code here, to run repeatedly:
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
