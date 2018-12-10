void setup()
{
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(6,HIGH);
    delay(500);
    digitalWrite(6,LOW);
    delay(500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(4,LOW);
    delay(500);
    digitalWrite(3,LOW);
    delay(500);
}
