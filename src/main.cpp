#include <Arduino.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.printf("Flash size: %u bytes\n", ESP.getFlashChipSize());
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);

}

