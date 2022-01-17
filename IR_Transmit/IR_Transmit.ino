//Include IR Remote Library by Ken Shirriff
 
#include <IRremote.h>
 
// Define switch pin
//const int switchPin = 7;
 
// Define a variable for the button state
//int buttonState = 0;
 
// Create IR Send Object
IRsend irsend;
 
void setup()
{
  // Set Switch pin as Input
  //pinMode(switchPin, INPUT);
}
 
void loop() {
  
  // Set button state depending upon switch position
  //buttonState = digitalRead(switchPin);
  
  // If button is pressed send power code command
   //if (buttonState == HIGH) {
   delay(2000);
    for (int i = 0; i < 3; i++) {
    irsend.sendNEC(BA0E1F31, 32); // TV power code
    delay(40);
  }
  //}
      
    // Add a small delay before repeating
    delay(200);
 
} 
