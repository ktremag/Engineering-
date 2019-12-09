# Engineering II Notebook
Includes Arduino code showcasing lcd screens, potentiometers, photointerupters, dc motors, and leds as well as the various ways to utilize them. Mostly helpful as a reference for setup and general code using each piece. 

Additionally, Intermediate CAD files are likewise included in this repository 

# Intermediate Arduino

## [LED Blink Revisited](Intermediate_Arduino/blinking_fade_w_dash/blinking_fade_w_dash.ino)
My goal in this assignment was to wire an led with a breadboard and learn to utilize Sublime in order to make the LED blink and fade out. In order to add a secondary layer to the assignment 
### Lessons Learned/Important points
It had been a while since I had utilized an arduino. The coding was not a problem for me but it took a minute or two to remember how to wire things. Additionally, I had not utilized ```analogWrite()``` very heavily in the past so special attention had to be given to putting the pins in the right ports as not all of the pins are analog compatible. 
### Wiring Diagram 
//insert here when fritzing complete

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
Learned how to use a photointerrupter as well as ```attachInterrupt()``` to improve efficiency of the code and increase clarity. Made sure to not let the two pins touch when wiring. Implemented functions. 
### Wiring Diagram 

## [Potentiometers](Intermediate_Arduino/potentiometer/potentiometer_practice.ino)

### Lessons Learned/Important points

### Wiring Diagram 

## [Motor Control](Intermediate_Arduino/motor_potent/motor_potent.ino) 

### Lessons Learned/Important points

### Wiring Diagram 

# Intermediate Cad

## Advanced & Mechanical Mates
