#include<Servo.h>   //Incluimos la libreria servo
 Servo myservo;     //Declaramos los objeto servo, en este caso hay 2
 Servo myservo2;
 
void setup()
{
  //conectamos los servos a los pines 9 y 10
  myservo.attach(9);
  myservo2.attach(10);
  pinMode( 2 , INPUT);
  pinMode( 3 , INPUT);
}
 
void loop()
{
 int derecha=digitalRead(2);
 int izquierda=digitalRead(3);
 
 if(izquierda == HIGH){
   myservo.write(180);
 }
 else{
   myservo.write(90);
 }
 
 if(derecha == HIGH){
   myservo2.write(180);
 }
 else{
   myservo2.write(90);
 }
}




