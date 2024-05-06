#include <WiFi.h>
 
// https://randomnerdtutorials.com/esp-now-esp32-arduino-ide/

void setup(){
  Serial.begin();
  WiFi.mode(WIFI_MODE_STA);
}
 
void loop(){  
  Serial.println(WiFi.macAddress());
  delay(250);
}

//robot ESP MAC EC:DA:3B:41:B5:74