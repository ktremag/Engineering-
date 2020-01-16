/* 
Kit Tremaglio
Motor Control 
Intermediate Arduino
Fall 2019
*/
int potPin = 3; //potentiometer pin
int traPin = 9; //motor pin
int t = 0;
    
void setup()
{
	//set up input & output
  	pinMode(potPin, INPUT);
  	pinMode(traPin, OUTPUT);
  	Serial.begin(9600);} 
  
void loop()
{
	//read amount of potentiometer and adjust to be able to be read by motor
	t = (analogRead(potPin))/4;
	//make the motor go at the rate set by the potentiometer
	analogWrite(traPin, t);  
	delay(200); //wait
	Serial.println(t);
} 

