  int moisture = 0;                // Variable moisture 
  
  void setup() 
  {
    Serial.begin(115200);          // Set baud rate 115200
  }
  
  void loop() 
  {
    moisture = analogRead(A0);      // Read analogpin 0
    Serial.print("Moisture = ");    
    Serial.println(moisture);       // Sent moisture to bluetooth 
    delay(3000);                    // Send data every 3 second
  }
