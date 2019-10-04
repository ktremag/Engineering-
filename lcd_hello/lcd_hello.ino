#include "Arduino.h"
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //pins of RS, EN, DB4, DB5, DB6, DB7
int t = 0;

void setup() 
{
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("hello world");
  
}

void loop() 
{
  
  
  lcd.setCursor(0,1);
  lcd.print(t);
  t++;
  delay(1000);
}