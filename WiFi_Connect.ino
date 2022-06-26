#include<ESP8266WiFi.h>

char* ssid = "SIEMENS";   // WiFi name
char* pass = "$i#m#n$@CAM";  // WiFi pass

WiFiClient client;

char* api = "KIJ6VDE092IY3TTK";   // write api key
char ip[] = "184.106.153.149";

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
