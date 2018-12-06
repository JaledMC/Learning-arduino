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
  distancia=Distance(12,11);            //medimos la distancia
  //la mapeamos para las 2 primeras octavas de la escala musical
  distancia=map(distancia,0,3000,200,1000);        
  tone(9,distancia,100);                //emitimos el tono obtenido
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
