#include <ESP8266WiFi.h>
#include <PubSubClient.h>

// Wifi connection
const char* ssid="";
const char* password="";
 //Mqtt connection
 const char* mqttServer="";
 const int mqttPort=3000;
 const char mqttUser="";
 const char * mqttPassword="";
void setup()
 {
 Serial.begin(9600)
 //connect  wifi 
 Serial.println("Connecting to: ",ssid);
 WiFi.begin(ssid, password);
 while(Wifi.status != WL_CONNECTED() )
 {
 delay(5000)
 {
 serial.println(".")
 }
 }

 Serial.println("Connected");

 
 }

void loop()
{
while(!client.connected())
{
	Serial.println("Connecting to MQTT";
}
if(client.connect("ESpCLient",mqttUser,mqttPassword)) //can also pass the mqttPort an 
//and boker depending on the requirement ad ocumented by the specific broker

{
Serial.println("Connected to mqtt Broker..");
}
else
{
Serial.println("Failed to connect ");
Serial.println(client.state())
delay(5000);
}
	
}
