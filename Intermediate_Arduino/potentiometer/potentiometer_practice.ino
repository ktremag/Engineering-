
/* 
Kit Tremaglio
Potentiometer Practice
Intermediate Arduino
Fall 2019
*/
#include "Arduino.h" //including libraries 
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd (0x3F, 2, 1, 0, 4, 5, 6, 7);  //I2C address of the lcd backpack
int ledPin = 10; //where led plugged in
int potPin = 2; //potentiometer pin
int t = 0;
    
void setup()
{
	//setting up lcd
	lcd.begin(16, 2); //16 * 2 LCD Module
  	lcd.setBacklightPin(3, POSITIVE);
  	lcd.setBacklight(HIGH);
 	lcd.print("led V");
	//setting input/output
	pinMode(ledPin, OUTPUT);
  	pinMode(potPin, INPUT);
  	Serial.begin(9600);
} 
  
void loop()
{
	//reading potentiometer reading 
	t = (analogRead(potPin))/10;
	//controlling led fade with t value
	analogWrite(ledPin, t);  
	
	delay(200);
	//dispaying t value on lcd screen
	lcd.setCursor(0,1);
	lcd.print(t);
	Serial.println(t);
} 

