#include<ESP8266.h>
#include<IRremote.h> // download correspoing libraries.

#define RECEIVER_PIN 5 // connect data of IR receiver to pin 5

IRrecv receiver(RECEIVER_PIN);
decode_results results;

void setup(){
    
    receiver.enableIRIn();
}

void loop(){
  
  if(receiver.decode(&results)){
    
    Serial.println(results.value, HEX); // signal will be in hexadecimal form
    receiver.resume();
  }
}
