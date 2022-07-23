#include "DHT.h"

#define DHTPIN 2

#define DHTTYPE DHT22


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("hello world");

  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);

float t=dht.readTemperature();
float h=dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.println (" *F");
  Serial.println("-----------------");  

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" % ");
  Serial.println("===========================");
}
