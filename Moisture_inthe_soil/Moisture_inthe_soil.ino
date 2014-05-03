  /*******************************************************************************
   * Project  : Moisture                                                         *
   * Compiler : Arduino 1.5.2                                                    *
   * Board    : Arduino Pro mini 328                                             *
   * Module   : Bluetooth Serial Module (HC-07 Slave mode)                       *
   *          : Soil moisture detector module                                    *
   * Author   : Bavensky :3                                                      *
   * E-Mail   : Aphirak_Sang-ngenchai@hotmail.com                                *
   * Date     : 03/05/2014 [dd/mm/yyyy]                                          *
   *******************************************************************************/
  int moisture = 0;                // Variable moisture 
  
  void setup() 
  {
    Serial.begin(9600);          // Set baud rate 115200
  }
  
  void loop() 
  {
    moisture = analogRead(A0);      // Read analogpin 0
    //Serial.print("Moisture = ");    
    Serial.println(moisture);       // Sent moisture to bluetooth 
    delay(3000);                    // Send data every 3 second
  }
