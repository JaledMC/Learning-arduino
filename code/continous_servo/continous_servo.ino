#include <Servo.h>

Servo servos[13];

/***   Global variables   ***/

/***   Function declaration   ***/

void setup()
{


  servos[8].attach(8);

  servos[9].attach(9);

}


void loop()
{
    servos[8].write(0);
    delay(1);
    servos[9].write(0);
    delay(1);
    delay(2000);
    servos[8].write(90);
    delay(1);
    servos[9].write(90);
    delay(1);
    delay(2000);
    servos[8].write(90);
    delay(1);
    servos[9].write(90);
    delay(1);
    delay(2000);

}

/***   Function definition   ***/
