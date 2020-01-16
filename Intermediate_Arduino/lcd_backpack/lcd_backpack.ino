#include "Arduino.h"
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x3F, 2, 1, 0, 4, 5, 6, 7);	//I2C address of the lcd backpack
int t = 0;
int buttonPin = 10;// what the button is plugged into
int buttonState = 0;//if button is being pressed
int switchPin = 11; //pin of the switch
int switchState = 0;
int previous;

void setup()
{

  //LCD set up and printing hello world	
  lcd.begin(16, 2); //16 * 2 LCD Module
  lcd.setBacklightPin(3, POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.setCursor(0, 0);
  lcd.print("hello world"); 
  //setup for inputs + pins	
  pinMode(buttonPin, INPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
  
}

void loop() 
{
	//reading if switch is turned or button pressed
	buttonState = digitalRead(buttonPin);
	switchState = digitalRead(switchPin);
	//serial monitor printing the switchstate
	Serial.println(switchState);
	// if the button is being pressed (but not continuous) and the switch is flipped add to the count displayed
	if (buttonState == HIGH && buttonState != previous && switchState == HIGH) {// if the buttton is pressed, add one to t and print
	t++;
	}
	//if not, subtract from the count
	else if (buttonState == HIGH && buttonState != previous && switchState == LOW){
	t--;
	}
	delay(100); //wait
	//print count
  	lcd.setCursor(0,1);
  	lcd.print(t);
	//reset previous
  	previous = buttonState;
}
