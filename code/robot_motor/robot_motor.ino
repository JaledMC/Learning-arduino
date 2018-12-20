void setup()
{
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
delay(2000);
}

void loop()
{
adelante();
delay(2000);
derecha();
delay(500);
}

void derecha() {
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
}
void izquierda() {
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
}
void adelante() {
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
}
void atras() {
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
}
