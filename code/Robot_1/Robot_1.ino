#include<Servo.h>   //Incluimos la libreria servo
Servo myservo;     //Declaramos los objeto servo, en este caso hay 2
Servo myservo2;
int bandera=0;  
void setup()
{
  //conectamos los servos a los pines 9 y 10
  myservo.attach(9);
  myservo2.attach(10);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  if(analogRead(A0)>1000){
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5, LOW);
  }
  if(analogRead(A1)<500){
    delay(1000);
    if(bandera==0){
      bandera=1;
    } 
    else{
      bandera=0;
    }
  }
  if(bandera==1){
      myservo.write(0);
      myservo2.write(0);
  }
  else{
    myservo.write(90);
    myservo2.write(90);
  }
}





