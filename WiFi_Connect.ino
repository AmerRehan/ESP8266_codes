#include<ESP8266WiFi.h>

char* ssid = "SIEMENS";   // WiFi name
char* pass = "$i#m#n$@CAM";  // WiFi password

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
