const int D = 261
const int A = 3
const int B = 494
const int piezo = 9
const int button1 = 2
const int button2 = 3
const int timeMusic = 100
  
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
