#include <SoftwareSerial.h>   // import SoftwareSerial to use at the same time the bluetooth module and the pc communication  
SoftwareSerial BT(10,11);  // Ddefine RX and TX arduino pins for the BT module
 
void setup()
{
  BT.begin(9600);     // speed communication between arduino and the BT
  Serial.begin(9600);   //speed communication between arduino and the PC
}
 
void loop()
{
  if(BT.available())  // If some data arrives to BT line, show it on the screen
  {
  Serial.write(BT.read());
  }
 
  if(Serial.available())  // Read any keyboard input on the pc and send it via BT
  {
  BT.write(Serial.read());
  }
}
