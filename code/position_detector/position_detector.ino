//import servo library
#include <Servo.h>


Servo myservo;  // object servo type instance. Read object oriented programming for more info
int pos;    // this variable stores the potentiometer position


void setup() {
  myservo.attach(9);  //connect myservo to pin 9
}

void loop() {
  int val = analogRead(0);             // read potentiometer on pin 0. Value goes from 0 to 1023
  pos = map(val, 0, 1023, 0, 120);     // Use map to scale the pot val from 0 to 120 (servo range)
  myservo.write(pos);                  // move the servo to the desired position
  delay(15);                           // give to the servo some time to move 
}



