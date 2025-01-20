#include <ESP8266WiFi.h>

const char* ssid = "ATEFEH";
const char* pass = "12345678910";

void setup() {
  WiFi.begin(ssid, pass);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  //serial baud rate
  Serial.begin(9600);  
}

void loop() {
  if (WiFi.status() != WL_CONNECTED){
    digitalWrite(D2, LOW);
    digitalWrite(D1, LOW);
    delay(1000);
    digitalWrite(D1, HIGH);
  } else {
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  }
}
