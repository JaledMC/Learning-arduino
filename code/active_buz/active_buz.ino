
void setup() {
  pinMode(5,OUTPUT);         //configuramos las salidas de los leds
  pinMode(4,INPUT);         //configuramos las salidas de los leds
}

// the loop routine runs over and over again forever:
void loop() {
  sonido=digitalRead(4);
  if(sonido){
    digitalWrite(5,HIGH);
    delay(200);
  }
  else{
    digitalWrite(5,LOW);
    delay(200);
  }
  

}
