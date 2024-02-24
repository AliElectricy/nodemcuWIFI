#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <DNSServer.h>

// put function declarations here:

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  
  // for show better in serial monitor
  delay(100);
  // start Wi-Fi and scan for available networks
  Serial.println("scanning WiFi started:");
  int n = WiFi.scanNetworks();
  if (n == 0) {
    Serial.println("no networks found");
  } else {
    Serial.print("Found ");
    Serial.print(n);
    Serial.println(" networks:");
    for (int i = 0; i < n; i++) {
      Serial.println(WiFi.SSID(i));
    }
  }

  // prompt for SSID and password
  Serial.println("scanning WiFi completed");
  Serial.println("Pleas enter a SSID");
  while (Serial.available() == 0) {}
  String ssid = Serial.readStringUntil('\n');
  Serial.println("please Enter Password");
  while (Serial.available() == 0) {}
  String password = Serial.readStringUntil('\n');
  WiFi.begin(ssid, password);

  // attempt to connect to the specified Wi-Fi network
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("WiFi connected");
}

void loop() {
  // put your main code here, to run repeatedly:

}