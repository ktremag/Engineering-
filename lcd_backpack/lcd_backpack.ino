#include "Arduino.h"
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x3F, 2, 1, 0, 4, 5, 6, 7);	//I2C address of the lcd backpack
int t = 0;
int buttonPin = 10;// what the button is plugged into
int buttonState = 0;//if button is being pressed
int switchPin = 11;
int switchState = 0;
int previous;

void setup()
{
  lcd.begin(16, 2); //16 * 2 LCD Module
  lcd.setBacklightPin(3, POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.setCursor(0, 0);
  lcd.print("hello world");
  pinMode(buttonPin, INPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
  
}

void loop() 
{
	buttonState = digitalRead(buttonPin);
	switchState = digitalRead(switchPin);
	Serial.println(switchState);
	if (buttonState == HIGH && buttonState != previous && switchState == HIGH) {// if the buttton is pressed, add one to t and print
	t++;
	}
	else if (buttonState == HIGH && buttonState != previous && switchState == LOW){
	t--;
	}
	
	delay(100);
  	lcd.setCursor(0,1);
  	lcd.print(t);
  	previous = buttonState;
  	
}