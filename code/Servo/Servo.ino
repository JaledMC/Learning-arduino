//import servo library
#include <Servo.h>


Servo myservo;  // Instance a servo object called "myservo". If you don't understand this line, read about object oriented
                // programming


void setup() {
  myservo.attach(9);  // connect myservo to pin9
}


void loop() {
    myservo.write(0);              // move the servo to position 0 degree
    delay(15);                       //let some time to servo to archieve his position
    myservo.write(40);              
    delay(15);                       
    myservo.write(90);              
    delay(15);                       
    myservo.write(120);              
    delay(15);                       
}
