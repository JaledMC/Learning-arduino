int luz=0; //variable donde guardamos el nivel de luz
void setup()
{
  pinMode(5,OUTPUT);         //configuramos las salidas de los leds
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  
  luz=analogRead(A0);         //medimos el sensor y lo guardamos en la variable
  Serial.println(luz);
  delay(1);        // delay in between reads for stability
  if (luz < 500) {               //si el sensor mide mas de 500, apagamos luces
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
   }
   else if((luz > 500) & (luz < 800)){
     digitalWrite(5,LOW);
     digitalWrite(6,HIGH);
   }
else {                    //en caso de no llegar a 500, apagamos luces
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
   }
}
