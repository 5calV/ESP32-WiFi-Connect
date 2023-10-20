/*
*  ESP32 WiFi Connect To an Existing Network
*/
 
#include <WiFi.h>
 
// Replace with your own network credentials
const char* ssid = "SSID";
const char* password = "PASS";
 
void setup(){
 
    Serial.begin(115200);
 
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    Serial.println("\nConnecting to WiFi Network ..");
 
    while(WiFi.status() != WL_CONNECTED){
        Serial.print(".");
        delay(100);
    }
 
    Serial.println("\nConnected to the WiFi network");
    Serial.print("Local IP: ");
    Serial.println(WiFi.localIP());
}
 
void loop(){
    // Do Nothing
}
