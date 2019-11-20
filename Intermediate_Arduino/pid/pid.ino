#include "Arduino.h"
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x3F, 2, 1, 0, 4, 5, 6, 7);  //I2C address of the lcd backpac

int pintPin1 = 2, pintPin2 = 3; //photointerrupter pins(analog)

int ledPin = 10, potPin = 2, traPin = 9 switchPin = 11; //led, potentiometer, motor, switch

int switchState = 0, mVal = 0; //what switch reads, what motor should be


void setup()
{
	lcd.begin(16, 2); //16 * 2 LCD Module
  	lcd.setBacklightPin(3, POSITIVE);
  	lcd.setBacklight(HIGH); 

  	pinMode(ledPin, OUTPUT); //led = output
  	pinMode(potPin, INPUT); //potentiometer = input
  	pinMode(switchPin, INPUT); //switch = input
  	pinMode(traPin, OUTPUT); // motor = output
  	pinMode(pintPin1, INPUT_PULLUP); //
  	pinMode(pintPin2, INPUT_PULLUP);

  	Serial.begin(9600);
} 
  
void loop()
{
	switchState = digitalRead(switchPin); //if switch is turned on
	mVal = (analogRead(potPin))/4; //what motor should be
	analogWrite(traPin, mVal); //setting the motor (basic)

	
} 