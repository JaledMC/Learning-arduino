//para poder usar las funciones del servo, debemos llamar a su librería, copiando esta linea //de codigo de abajo, o “Sketch”, “Importar libreria”, “Servo”
#include <Servo.h>


Servo myservo;  // creamos un objeto de tipo servo. Ya explicaremos esto mas adelante


void setup() {
  myservo.attach(9);  //el servo”myservo” le conectamos al pin 9
}


void loop() {
    myservo.write(0);              // le decimos al servo que vaya a la posicion 0
    delay(15);                       //esperamos 15ms a que llegue
    myservo.write(40);              // le decimos al servo que vaya a la posicion 40
    delay(15);                       //esperamos 15ms a que llegue
    myservo.write(90);              // le decimos al servo que vaya a la posicion 90
    delay(15);                       //esperamos 15ms a que llegue
    myservo.write(120);              // le decimos al servo que vaya a la posicion 120
    delay(15);                       //esperamos 15ms a que llegue
  }

