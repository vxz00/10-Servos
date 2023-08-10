#include "Tlc5940.h"
#include "tlc_servos.h"

#define SERVO_CHANNEL0   0
#define SERVO_CHANNEL1   1
#define DELAY_TIME      500



int incomingByte;   

void setup()

{
 Serial.begin(9600);  
  tlc_initServos();
  
tlc_setServo(SERVO_CHANNEL0, 90);
tlc_setServo(SERVO_CHANNEL1, 90);

Tlc.update(); 

}

void loop()

{
  {
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
} 

//servo 1
if (incomingByte == 'a') {
tlc_setServo(SERVO_CHANNEL0, 0);
Tlc.update();
delay(DELAY_TIME);
} 
if (incomingByte == 's') {
tlc_setServo(SERVO_CHANNEL0, 90);
Tlc.update();
delay(DELAY_TIME);
} 
if (incomingByte == 'd') {
tlc_setServo(SERVO_CHANNEL0, 180);
Tlc.update();
delay(DELAY_TIME);
}

//servo 2
} 
if (incomingByte == 'q') {
tlc_setServo(SERVO_CHANNEL1, 0);
Tlc.update();
delay(DELAY_TIME);
} 
if (incomingByte == 'w') {
tlc_setServo(SERVO_CHANNEL1, 90);
Tlc.update();
delay(DELAY_TIME);
} 
if (incomingByte == 'e') {
tlc_setServo(SERVO_CHANNEL1, 180);
Tlc.update();
delay(DELAY_TIME);
}
}

