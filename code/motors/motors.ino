#define left 4
#define right 5

void setup()
{
pinMode(left, OUTPUT);
pinMode(right, OUTPUT);
delay(2000);
}
void loop()
{
digitalWrite(left, HIGH);
digitalWrite(right, LOW);
delay(2000);
digitalWrite(left, LOW);
digitalWrite(right, HIGH);
delay(500);
}
