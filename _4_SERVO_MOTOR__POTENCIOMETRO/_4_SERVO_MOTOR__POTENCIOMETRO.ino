// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo myservo;  
 
int potpin = 0;  // analog pin   potenciometro
int val;    
void setup() 
{ 
  myservo.attach(9);   //salida del servo
} 
 
void loop() 
{ 
  val = analogRead(potpin);             
  val = map(val, 0, 1023, 0, 179);      
  myservo.write(val);                    
  delay(15);                              
} 
