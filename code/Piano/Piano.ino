#define D 261
#define A 3
#define B 494
#define piezo 9
#define button1 2
#define button2 3
#define timeMusic 100
  
void setup()
{
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
}

void loop()
{
    if (digitalRead(button1) == HIGH) {
      tone(piezo,D,timeMusic);
      delay(timeMusic);
      
     } else if (digitalRead(button2) == HIGH) {
      tone(piezo,A,timeMusic);
      delay(timeMusic);
      
     } else if ((digitalRead(button1) == HIGH) && (digitalRead(button2) == HIGH)) {
      tone(piezo,B,timeMusic);
      delay(timeMusic);
     }
}
