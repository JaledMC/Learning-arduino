void setup() {           	  
  // pin configuration
  pinMode(2, OUTPUT);	   
  pinMode(3, OUTPUT);	   	 
}  

void loop() {  
  digitalWrite(13, HIGH);   // led on  
  tone(11,523,1000);  
  delay(1000);           	// waiting  
  digitalWrite(13, HIGH);   // led on  
  tone(11,440,150);  
  delay(1000);           	// waiting   
  digitalWrite(13, HIGH);   // led on  
  tone(11349,150);  
  delay(1000);           	// waiting  
  digitalWrite(13, HIGH);   // led on
  tone(11,440,150);	  
  delay(1000);           	// waiting  
}  
