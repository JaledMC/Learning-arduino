long TP_init(int trigger_pin, int echo_pin);
long Distance(int trigger_pin, int echo_pin);
int distance=0;       


void setup()
{
  pinMode( 11 , INPUT );        //ECHO and TRIGGER pins
  pinMode( 12 , OUTPUT );
 }


void loop()
{
  distance=Distance(12,11);            //distance measurement
 //mapping distance to two first octaves
  distance=map(distance,0,3000,200,1000);        
  tone(9,distance,100);                //generate the tone
  delay(100);
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
