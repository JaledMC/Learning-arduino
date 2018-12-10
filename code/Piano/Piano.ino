const D = 261
const A = 3
const B = 494
const piezo = 9
const button1 = 2
const button2 = 3
const timeMusic = 100
  
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
