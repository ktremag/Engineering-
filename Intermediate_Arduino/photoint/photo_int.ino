/* 
Kit Tremaglio
Photointerruptur Practice
Intermediate Arduino
Fall 2019
*/
#include "Arduino.h"
int ledPin = 10; // led pin
int pintPin1 = 2;  //photo interrupter pin 1
int pintPin2 = 3;
int t =0; // number of times passed

void setup()
{

    pinMode(ledPin, OUTPUT);
    pinMode(pintPin1, INPUT_PULLUP); //setting up the photointerruptor
    pinMode(pintPin2, INPUT_PULLUP);
    Serial.begin(9600);
    attachInterrupt(digitalPinToInterrupt(pintPin2), ledOn, RISING); // turining on LED when pass through
    attachInterrupt(digitalPinToInterrupt(pintPin1), ledOff, FALLING); //turning off led when out 

  }

void ledOn (){
	digitalWrite(ledPin, HIGH); //led on 
	t++; //adding to the count
}
void ledOff(){
	digitalWrite(ledPin, LOW); //led off
}
void loop (){
	Serial.println(t); //printing count
	delay(100);
}
