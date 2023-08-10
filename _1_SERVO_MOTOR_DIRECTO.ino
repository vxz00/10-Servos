//VLAD .D ELECTROICS
#include <Servo.h> 

Servo myservo;


void setup()
{
 myservo.attach(9);    

}
   void loop() 
{ 
   
myservo.write(0);  //ready
       delay(950);; 
   
myservo.write(45);  //ready
       delay(950);; 
           
myservo.write(91);  //ready
       delay(950);; 
       
myservo.write(120);  //ready
       delay(950);; 
          
myservo.write(180);  //ready
       delay(950);; 
       
myservo.write(120);  //ready
       delay(950);;    
       
myservo.write(91);  //ready
      delay(950);;   
       
myservo.write(45);  //ready
       delay(950);;      
       
       }
    
       

