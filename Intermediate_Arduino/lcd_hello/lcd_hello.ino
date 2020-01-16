/* 
Kit Tremaglio
LCD Hello
Intermediate Arduino
Fall 2019
*/
#include "Arduino.h"
#include <LiquidCrystal.h> //implementing LiquidCrystal package 
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //pins of RS, EN, DB4, DB5, DB6, DB7
int t = 0;

void setup() 
{
  // setting up LCD screen 
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("hello world");
  
}

void loop() 
{
  // time since start 
  lcd.setCursor(0,1);
  lcd.print(t); //print time
  t++; //add on to count
  delay(1000); // wait
}
