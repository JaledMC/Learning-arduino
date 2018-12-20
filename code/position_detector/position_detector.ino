//incluimos la libreria servo
#include <Servo.h>


Servo myservo;  // creamos un objeto de tipo servo.
int pos;    // variable que guarda el valor del sensor para ser volcado en el servo


void setup() {
  myservo.attach(9);  //el servo”myservo” le conectamos al pin 9
}


void loop() {
  int val = analogRead(0);            //leemos el valor del potenciometro, entre 0 y 1023
  pos = map(val, 0, 1023, 0, 180);     // escalamos pos entre 0 y 180
  myservo.write(pos);                  // damos la orden de movimiento al servo
  delay(15);                           // esperamos a que llegue a la posicion ordenada
}
