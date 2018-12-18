/*
Adafruit Arduino - Lesson 16. Stepper
*/
#include <Stepper.h>
int in1Pin = 2;
int in2Pin = 3;
int in3Pin = 4;
int in4Pin = 5;
int mod = 8; 




Stepper stepmotor(512,in1Pin, in2Pin, in3Pin, in4Pin,mod);
void setup()
{
pinMode(in1Pin, OUTPUT);
pinMode(in2Pin, OUTPUT);
pinMode(in3Pin, OUTPUT);
pinMode(in4Pin, OUTPUT);
// this line is for Leonardo's, it delays the serial interface
// until the terminal window is opened
while (!Serial);
Serial.begin(9600);
stepmotor.setSpeed(10);
}
void loop()
{
  
if (Serial.available()>0)
{
 
int veri =  Serial.read();
if (veri=='1')
{
 
   stepmotor.step(15);


}
else if (veri=='2')
{
  
  stepmotor.step(-15);
  
  
 }
 else if (veri=='3')
 {
  stepmotor.step(0);
 }


}
}
