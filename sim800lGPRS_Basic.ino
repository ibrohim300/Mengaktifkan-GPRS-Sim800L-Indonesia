
//#include <SoftwareSerial.h>
//SoftwareSerial Serial2(7,8);
void setup() {
  Serial.begin(9600);
  Serial.println("Software Serial Sketch");
  Serial2.begin(9600);
}
void loop() { // run over and over
  while(Serial2.available()) {
    Serial.write(Serial2.read());
  }
  while(Serial.available()) {
    Serial2.write(Serial.read());
  }
}
