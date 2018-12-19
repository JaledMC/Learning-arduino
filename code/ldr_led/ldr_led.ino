int light=0; //this variable stores the ldr value
void setup()
{
  pinMode(5,OUTPUT);         //led pins configuration
  pinMode(6,OUTPUT);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  Serial.begin(9600);
}
void loop()
{
  
  light=analogRead(A0);         
  Serial.println(luz);
  delay(1);                        // delay between reads for stability
  if (light > 500) {               //if light is greater than 500, turn off the leds
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
   }
  if (light < 400) {               //if light is greater than 500, turn off the leds
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
   }
}
