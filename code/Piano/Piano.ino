/***   Global variables   ***/

/***   Function declaration   ***/

void setup()
{


  pinMode(2,INPUT);

  pinMode(3,INPUT);

}


void loop()
{
    if (digitalRead(2) == HIGH) {
      tone(9,261,100);
      delay(100);
     }else if (digitalRead(3) == HIGH) {
      tone(9,440,100);
      delay(100);
     }else if ((digitalRead(3) == HIGH) && (digitalRead(2) == HIGH)) {
      tone(9,494,100);
      delay(100);
     }

}

/***   Function definition   ***/
