#include <Arduino.h>
#include "NeuralNetwork.h"
#include <WiFi.h>
#include <HTTPClient.h>

NeuralNetwork *nn;

const char* ssid = "AK";
const char* password = "aaaaaaaaaa";


const char* serverName = "http://a48d-207-244-91-172.ngrok.io/ecg/report/";

void setup()
{
  Serial.begin(115200);
    WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
  nn = new NeuralNetwork();
}

void loop()
{

  int index = 0;
  for(index = 0; index < 140; index++){
    float sample = (analogRead(36)*6/4096)-4;
    nn->getInputBuffer()[index] = sample;
    delay(7);
  }
  float result = nn->predict();
  Serial.println(result);


  if (result>0.5)
  {
        if(WiFi.status()== WL_CONNECTED){
      WiFiClient client;
      HTTPClient http;
    
      // Your Domain name with URL path or IP address with path
      http.begin(client, serverName);
      http.addHeader("Content-Type", "application/json");
      int httpResponseCode = http.POST("{\"patient_number\":\"1\",\"alarm\":\"0\"}");
            Serial.print("HTTP Response code: ");
      Serial.println(httpResponseCode);
        
      // Free resources
      http.end();
    }
    else {
      Serial.println("WiFi Disconnected");
    }
  }
  delay(1000);
}