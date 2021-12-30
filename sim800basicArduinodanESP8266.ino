#include <SoftwareSerial.h>
SoftwareSerial mySerial(7,8);
//jika pakai esp8266 hapus baris atas dan ganti dengan dibawah
//SoftwareSerial mySerial(D2,D3);
void setup() {
  Serial.begin(9600);
  Serial.println("Software Serial Sketch");
  mySerial.begin(9600);
}
void loop() { // run over and over
  while(mySerial.available()) {
    Serial.write(mySerial.read());
  }
  while(Serial.available()) {
    mySerial.write(Serial.read());
  }
}
