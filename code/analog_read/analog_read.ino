void setup() {
  //Serial communication speed configured to 9600. Other values can be used: 
  //300, 600, 1200, 2400, 4800, 9600, 14400, 19200, 28800, 38400, 57600, o 115200, but both devices (arduino and pc),
  //should have the same speed.
  Serial.begin(9600);
}


void loop() {
  // Read analog value on pin A0, and save the value in an int variable
  int valorSensor = analogRead(A0);
  // Show the variable value on the screen with serial.println
  Serial.println(valorSensor );
  delay(100);        // wait some time
}
