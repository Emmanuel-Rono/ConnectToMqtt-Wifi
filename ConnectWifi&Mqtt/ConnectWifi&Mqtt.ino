#include <ESP8266WiFi.h>
#include <PubSubClient.h>

WiFiClient wifiClient;
PubSubClient mqttClient(wifiClient);

// Wifi connection
const char* ssid = "Accesspoint";
const char* password = ".CT1.CT2";
//Mqtt connection
const char* mqttServer = "broker.hivemq.com";
 int mqttPort = 8000;
//const char* mqttUser = "";
//const char* mqttPassword = "";
void setup() 
{
  Serial.begin(9600);
  //connect  wifi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to:"); Serial.print(ssid);
  while (WiFi.status() != WL_CONNECTED) {
    delay(5000);
    Serial.print(".");
  }
  Serial.println("Connected");
}
void loop() {
  mqttClient.setServer(mqttServer, mqttPort);
  while (!mqttClient.connected()) {
    Serial.println("Connecting to MQTT");
  }
  if (mqttClient.connect("ESpCLient"))
  //and boker depending on the requirement ad ocumented by the specific broker
  {
    Serial.println("Connected to mqtt Broker..");
  } else {
    Serial.println("Failed to connect ");
    Serial.println(mqttClient.state());
    delay(5000);
  }
}