/*
ESP32 Connect to Wi-Fi
http:://www.electronicwings.com
*/

#include <ArduinoJson.h>
#include <WiFi.h>
#include <HTTPClient.h>


// Replace with your network credentials
const char* ssid = "Nome of Wifi";
const char* password = "Password";

double temp;
double humidity;

void setup() {
 Serial.begin(115200);
 delay(4000);

  //attempt to connect
 WiFi.begin(ssid, password);

  //checking connection to wifi
 while (WiFi.status() != WL_CONNECTED){
   delay(1000);
   Serial.println("Connecting to WiFi...");
 }

  //Indicate connection to wifi
 Serial.println("Connected to the Wifi network");

}


void loop() {
// put your main code here, to run repeatedly:
 if((WiFi.status() == WL_CONNECTED)){


   HTTPClient http;


   http.begin("https://api.openweathermap.org/data/2.5/weather?zip=94941,US&appid=e32891331afe9945fefdfa0b17cda1dd");
   int httpCode = http.GET();


   if(httpCode > 0){

    DynamicJsonDocument doc (2048);

    DeserializationError err = deserializeJson(doc, http.getStream()); //desterialize original data stream

    if (err) {
        Serial.print("ERROR: ");
        Serial.println(err.c_str());
        return;
    }

    String mainString = doc["main"].as<String>();

    DynamicJsonDocument main (2048);

    DeserializationError err2 = deserializeJson(main, mainString);  //converts the smaller strings data to string

    if (err2) {
      Serial.print("ERROR: ");
      Serial.println(err2.c_str());
      return;
    }

      //retrieves the temperature
      temp = main["temp"].as<double>(); //takes out the temperature values and makes it a double
      temp = round((temp - 273.15) * 9 / 5 + 32); //calculates temperature from kelvin to celsius to fahrenheit

      //retrieves the humidity
      humidity = main["humidity"].as<double>(); //takes out humidity values

      //serial prints out data
      Serial.println(temp);
      Serial.println(humidity);
   }
   else{
     Serial.println("Error on HTTP request");
   }

  http.end();

 }

  delay(10000);
 }