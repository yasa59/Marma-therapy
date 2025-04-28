#include <Arduino.h>

#define RELAY_PIN  5   // You can change to the pin you connected the relay to

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  Serial.println("Relay Test Starting...");

  // Set relay pin as output
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  Serial.println("Relay ON");
  digitalWrite(RELAY_PIN, HIGH);   // Turn relay ON
  delay(1000);                     // Wait 1 second

  Serial.println("Relay OFF");
  digitalWrite(RELAY_PIN, LOW);    // Turn relay OFF
  delay(1000);                     // Wait 1 second
}
