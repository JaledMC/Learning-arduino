int incomingByte = 0; // almacenar el dato serie
void setup() {
Serial.begin(9600); // abre el puerto serie,y le asigna la velocidad de 9600 bps
}
void loop() {
// envía datos sólo si los recibe:
if (Serial.available() > 0) {
// lee el byte de entrada:
incomingByte = Serial.read();
//lo vuelca a pantalla
Serial.print("He recibido: "); Serial.println(incomingByte, DEC);
}
}

