//Variables necesarias para emdir distancia
long TP_init(int trigger_pin, int echo_pin);
long Distance(int trigger_pin, int echo_pin);
 int distancia=0;        //declaramos la variable donde se guardara la distancia


void setup()
{
  pinMode( 11 , INPUT );        //pines ECHO y TRIGGER
  pinMode( 12 , OUTPUT );
 }


void loop()
{
    distancia=Distance(12,11);
    if (distancia > 30) {
      tone(9,261,50);
      delay(50);
     }else if ((distancia <= 30) && (distancia > 15)) {
      tone(9,440,50);
      delay(50);
     }else if (distancia <= 15) {
      tone(9,494,50);
      delay(50);
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
