# Engineering II Notebook
Includes Arduino code showcasing lcd screens, potentiometers, photointerupters, dc motors, and leds as well as the various ways to utilize them. Mostly helpful as a reference for setup and general code using each piece. 

Additionally, Intermediate CAD files are likewise included in this repository 

# Intermediate Arduino

## [LED Blink Revisited](Intermediate_Arduino/blinking_fade_w_dash/blinking_fade_w_dash.ino)
My goal in this assignment was to wire an led with a breadboard and learn to utilize Sublime in order to make the LED blink and fade out. In order to add a secondary layer to the assignment, dashes were printed in the serial monitor corresponding to the fade in or out (see below for example). 
``` 
-
--
---
----
--
-
```
### Wiring Diagram 


### Lessons Learned/Important points
It had been a while since I had utilized an arduino. The coding was not a problem for me but it took a minute or two to remember how to wire things and check that my ground and 5V were in the correct places. Additionally, I had not utilized ```analogWrite()``` very heavily in the past so special attention had to be given to putting the pins in the digital pins marked with dashes to indicate compatibility. 


## [Hello LCD](Intermediate_Arduino/lcd_hello/lcd_hello.ino)
Learned how to use an LCD screen and utilize packages in sublime in order to display ``` Hello World ``` and the number of seconds since the program began. 
### Lessons Learned/Important points
When not using a backpack as in the next assignment, the wiring proved challenging and required a lot of attention to detail. I utilized [this guide](https://programmingelectronics.com/how-to-set-up-an-lcd-with-arduino/) to generally check my wiring and understanding. The code provided no new challenges. 
### Wiring Diagram 
//insert diagram here

## [LCD Backpack](Intermediate_Arduino/lcd_backpack/lcd_backpack.ino)
Learned how to reduce the number of pins taken by the LCD screen by using a "LCD backpack" and four female-male jumper cables to wire an LCD screen and button that would display the number of button presses and change the direction (positive/negative) of the count due to a breadboard SPDT switch. 
### Lessons Learned/Important points
Learned how to utilize buttons and switches efficiently. It was mildly challenging to only add one count per depress of the button but that could be solved with a few additional lines of code. Additionally, the LCD backpack made using an LCD screen significantly easier than previously. 
### Wiring Diagram 

## [Photointerrupters](Intermediate_Arduino/photoint/photo_int.ino)
 Counted the number of times that something blocked the photointerrupters and had an led correspond to its status. Learned the wiring for photointerrupters and were able to maximize efficiency while minimizing number of lines used. 
### Lessons Learned/Important points
Learned how to use a photointerrupter as well as ```attachInterrupt()``` to improve efficiency of the code and increase clarity. Made sure to not let the two pins of the photointerrupter to touch when wiring. Implemented functions to stramline interrupts and clarify actions when object was leaving/coming into the detector. 
### Wiring Diagram 

## [Potentiometers](Intermediate_Arduino/potentiometer/potentiometer_practice.ino)
Used a breadboarded mounted potentiometer to control an LEDs brightness and learn how potentiometers interact with arduino and need to be implemented. 
### Lessons Learned/Important points

### Wiring Diagram 

## [Motor Control](Intermediate_Arduino/motor_potent/motor_potent.ino) 
Broght all of the previous lessons together in order to control a motor's speed with a potentiometer and a lcd screen all at once. The code was fairly simple but ensuring that the battery pack and power supply for the motor was separate from the arduino took checking over. 
### Lessons Learned/Important points
The code was fairly simple but ensuring that the battery pack and power supply for the motor was separate from the arduino took checking over. Taking pictures of my configuration and planning out how to organize the wiring helped a lot in making the assignment go smoother. 
### Wiring Diagram 

# Intermediate Cad

## Advanced & Mechanical Mates
Brushed off on Solidworks general skills. Used design tables to create multiple versions of a part and fit them together with more complex mates than I had previously used. Ran into some difficulty with the smallest of the nesting parts due to my implementation of the design table with numbers rather than variables and the suppression of features being linked to the core structure of my assembly but fixed easily once problem was identified through taking different parts out of the assembly and replacing them to find the root of the problem. Also brushed up on how to change appeances of objects in solidwords. 
