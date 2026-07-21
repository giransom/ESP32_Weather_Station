/*
 ESP32 Connect to Wi-Fi
 http:://www.electronicwings.com
*/ 


#include <WiFi.h>

// Replace with your network credentials
const char* ssid = "Namee of Wifi"; 
const char* password = "Password";

void initWiFi() {
 WiFi.mode(WIFI_STA);    //Set Wi-Fi Mode as station
 WiFi.begin(ssid, password);   
 
 Serial.println("Connecting to WiFi ..");
 while (WiFi.status() != WL_CONNECTED) {
   Serial.print('.');
   delay(1000);
 }
 
 Serial.println(WiFi.localIP());
 Serial.print("RSSI: ");
 Serial.println(WiFi.RSSI());
}

void setup() {
 Serial.begin(115200);
 initWiFi();
}

void loop() {
 // put your main code here, to run repeatedly:
WiFi.status();
}
