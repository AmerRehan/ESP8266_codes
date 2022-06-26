#include<ESP8266WiFi.h>
#include<ThingSpeak.h> // download corresponding libraries
#include<DHT.h>

DHT dht(D1, DHT11); // data connected to D1 of nodeMCU

float hum, temp; // humidity , temperature

char* ssid = "SYED";   // WiFi name
char* pass = "coolGuyz";  // WiFi pass

WiFiClient client;

char* api = "KIJ6VDE092IY3TTK";   // write api key from your channel in ThingSpeak 
char ip[] = "184.106.153.149";    // IP address of thingspeak (Fixed)


void setup() {
  
  Serial.begin(9600);
  
  Serial.println("Connecting to Wifi");
  WiFi.begin(ssid,pass);
  
  while(WiFi.status()!= WL_CONNECTED){
    
    Serial.print(".");
    delay(500);
    }
    
  Serial.println("WiFi Connected");

  ThingSpeak.begin(client);
}

void loop(){

  if(client.connect(ip, 80)){

    hum = dht.readHumidity();
    temp = dht.readTemperature();

    Serial.print("Humidity = ");
    Serial.print(hum);

    Serial.print(" Temperature = ");
    Serial.print(temp);


    ThingSpeak.setField(1, Temp);
    ThingSpeak.setField(2, hum);

    ThingSpeak.writeFields(id, api);
  }

  delay(15000); // 15 seconds refresh time

}
