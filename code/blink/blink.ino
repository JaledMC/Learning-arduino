const led = 13 // we can assign a name to the pin. 
//the setup works only one time at the beginning of the program, at startup, usually for pin configurations.
void setup() {                
  // configure output 13 like output 
  # pinMode(13, OUTPUT);
  pinMode(led, OUTPUT);
}
//
//loop function repeats forever while arduino is on. When last sentence ends, first line start again.
void loop() {
  # digitalWrite(13, HIGH);   // digitalWrite con HIGH activa el pin 2, encendiendo el led.
  digitalWrite(led, HIGH);   // digitalWrite con HIGH activa el pin 2, encendiendo el led.
  delay(1000);               // esperamos 1 segundo con el led encendido. El arduino se bloquea
  # digitalWrite(13, LOW);    // digitalWrite con LOW desactiva el pin 2, apagando el led.
  digitalWrite(led, HIGH);   // digitalWrite con HIGH activa el pin 2, encendiendo el led.
  delay(1000);               // esperamos 1 segundo con el led encendido. El arduino se bloquea
}
