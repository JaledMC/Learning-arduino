//el setup funciona una única vez al principio del programa o reiniciarse el arduino. Sirve //para configurar la funcion de los pines generalmente. 
void setup() {                
  // configuramos el pin 13 como salida (OUTPUT), con la 
  pinMode(13, OUTPUT);     
}
//la funcion loop se ejecuta una y otra vez mientras este encendido el arduino
void loop() {
  digitalWrite(13, HIGH);   // digitalWrite con HIGH activa el pin 2, encendiendo el led.
  delay(1000);               // esperamos 1 segundo con el led encendido. El arduino se bloquea
  digitalWrite(13, LOW);    // digitalWrite con LOW desactiva el pin 2, apagando el led.
  delay(1000);               // esperamos 1 segundo con el led encendido. El arduino se bloquea
}
