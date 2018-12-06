#include <SoftwareSerial.h> //Librería que permite establecer comunicación serie en otros pins
 int brightness;  
//Aquí conectamos los pins RXD,TDX del módulo Bluetooth.
SoftwareSerial BT(3,2); //3 RX, 2 TX.
String fadeAmount;    // The data got from the device. It is to be in the String format as explained later
void setup()
{
  BT.begin(9600); //Velocidad del puerto del módulo Bluetooth
  Serial.begin(9600); //Abrimos la comunicación serie con el PC y establecemos velocidad
  pinMode(4,OUTPUT);
}
 
void loop()
{
  if(BT.available())
  {
    fadeAmount=BT.readString();
    brightness= fadeAmount.toInt();
  
 
  Serial.println(brightness);
 
  //brightness=(int)fadeAmount;
  //Serial.write((int)brightness);
  //Serial.write(brightness);

  analogWrite(4,brightness); //to command the 9 pin to glow with the brightness given
  }
 
//  if(Serial.available())
//  {
//     BT.write(Serial.read());
//  }
}
