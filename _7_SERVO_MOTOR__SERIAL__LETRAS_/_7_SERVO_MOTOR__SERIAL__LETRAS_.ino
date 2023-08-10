#include <Servo.h> 

Servo servo1;
Servo servo2;



int val;

void setup()
{
servo1.attach(9);
servo2.attach(10);
servo1.write(90);  //ready
servo2.write(90);  //ready
       delay(950); 
       
Serial.begin(9600);

}
void loop()
{
if (Serial.available()) {
val = Serial.read();


if (val == 'A') {

servo1.write(10);  //1
       delay(950);; 
}
if (val == 'S') {

servo1.write(170);  //1S
       delay(950);; 
 }     

if (val == 'L') {

servo2.write(175);  //2
       delay(950);; 
}
if (val == 'K') {

servo2.write(12);  //2
       delay(950);;        
       
}
}
}






