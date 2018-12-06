//variables necesarias para la medida
long TP_init(int trigger_pin, int echo_pin);
long Distance(int trigger_pin, int echo_pin);
 int distancia=0; //Variable para guardar la distancia
void setup()
{
  pinMode( 11 , INPUT );        //Pines del ECHO y TRIGGER
  pinMode( 12 , OUTPUT );
  Serial.begin(9600);
}


void loop()
{
distancia=Distance(12,11);     //medimos la distancia
Serial.println(distancia);    //la imprimimos en pantalla
delay(100);
}






/***   Funcion de distancia   ***/
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
