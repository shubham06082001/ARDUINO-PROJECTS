
#include <SoftwareSerial.h>
void setup() {
  // put your setup code here, to run once:
 serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("hello");
}
