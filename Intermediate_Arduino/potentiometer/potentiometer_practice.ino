#include "Arduino.h"
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd (0x3F, 2, 1, 0, 4, 5, 6, 7);  //I2C address of the lcd backpack
int ledPin = 10;
int potPin = 2;
int t = 0;
    
void setup()
{
	lcd.begin(16, 2); //16 * 2 LCD Module
  	lcd.setBacklightPin(3, POSITIVE);
  	lcd.setBacklight(HIGH);
 	lcd.print("led V");
  	pinMode(ledPin, OUTPUT);
  	pinMode(potPin, INPUT);
  	Serial.begin(9600);
} 
  
void loop()
{
	t = (analogRead(potPin))/10;
	analogWrite(ledPin, t);  
	delay(200);
	lcd.setCursor(0,1);
	lcd.print(t);
	Serial.println(t);
} 

