#include <ESP8266WiFi.h>
void setup() {
    Serial.begin(9600);
}
void loop() {
    Serial.println("Scanning WiFi.....");
    int n = WiFi.scanNetworks();
    if(n==0){
      Serial.println("No Networks Found");
    }
    else{
      Serial.print(n);
      Serial.println("Networks Found");
      for (int i=0; i<n; i++){
          Serial.print(WiFi.SSID(i));
          Serial.print("(");
          Serial.print(WiFi.RSSI(i));
          Serial.println(")");
        }
    }
    delay(5000);
}
