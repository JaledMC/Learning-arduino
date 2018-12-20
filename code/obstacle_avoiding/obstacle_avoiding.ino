#include<Servo.h>   //import servo library
 Servo myservo;     //instance two servo objects
Servo myservo2;
int distance=0;     

long TP_init(int trigger_pin, int echo_pin);
long Distance(int trigger_pin, int echo_pin);


void setup()
{
  myservo.attach(9);          //conectamos los servos a los pines 9 y 10
  myservo2.attach(10);
  pinMode( 6 , INPUT );        //pines ECHO y TRIGGER
  pinMode( 7 , OUTPUT );

}


void loop()
{
    distance=Distance(7,6);
    if (distance > 30) {
           myservo.write(0);
         myservo2.write(180);
     }
else{
         myservo.write(0);
         myservo2.write(0);

         tone(0, 349, 100);
         delay(100);
         tone(0, 392, 100);
         delay(100);
         tone(0, 329, 100);
         delay(100);

     }
}


/***   Funcion   ***/
long TP_init(int trigger_pin, int echo_pin)
{
  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger_pin, LOW);
  long microseconds = pulseIn(echo_pin ,HIGH);
  return microseconds;
}
long Distance(int trigger_pin, int echo_pin)
{
  long microseconds = TP_init(trigger_pin, echo_pin);
  long distance;
  distance = microseconds/29/2;
  if (distance == 0){
    distance = 999;
  }
  return distance;
}
