void setup() {
  //fijamos la comunicación en 9600 bits por segundo. Se pueden poner otras velocidades:
  //300, 600, 1200, 2400, 4800, 9600, 14400, 19200, 28800, 38400, 57600, o 115200, pero 
  //es importante que el ordenador y el arduino vayan siempre a la misma velocidad, o no se
  //entenderan (fallo tipico con impresoras)


  Serial.begin(9600);
}


void loop() {
  // leemos el valor analogico en el pin A0, y la guardamos en una variable tipo int:
  int valorSensor = analogRead(A0);
  // Vemos en pantalla el valor del sensor con la funcion serial.println
  Serial.println(valorSensor );
  delay(10);        // esperamos un tiempo hasta la siguiente lectura
}
