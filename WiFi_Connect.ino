#include<ESP8266WiFi.h>

char* ssid = "SYED";   // WiFi name
char* pass = "COOLguyz";  // WiFi password

WiFiClient client;

void setup() {
  Serial.begin(9600);
  
  Serial.println("Connecting to Wifi");
  WiFi.begin(ssid,pass);
  
  while(WiFi.status()!= WL_CONNECTED){
    
    Serial.print(".");
    delay(500);
    }
    
  Serial.println("WiFi Connected");
}
