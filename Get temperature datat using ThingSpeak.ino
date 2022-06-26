#include<ESP8266WiFi.h>

char* ssid = "SYED";   // WiFi name
char* pass = "coolguys";  // WiFi pass

WiFiClient client;

char* api = "KIJ6VDE092IY3TTK";   // from your channel in thingspeak
char ip[] = "184.106.153.149";    // ThingSpeak IP Address (fixed for everyone)

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
