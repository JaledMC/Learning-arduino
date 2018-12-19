
const int red = 9;
const int blue = 10;
const int green = 11;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT);     
  pinMode(green, OUTPUT); 
  pinMode(blue, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  //random color
  analogWrite(red, random(255));  
  analogWrite(green, random(255));   
  analogWrite(blue, random(255));   
  delay(1000);               // wait for a second
}
