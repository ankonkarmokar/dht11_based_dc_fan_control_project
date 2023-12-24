#include <dht.h>
#define dht_apin A1
dht DHT;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  DHT.read11(dht_apin);
  Serial.print("Humidity = ");
  Serial.print(DHT.humidity);
  Serial.println("%  ");
  Serial.print("Temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("C  ");
  Serial.println("");
  if (DHT.temperature > 25)  //If Temperature is Greater Than 25'C
  {
    digitalWrite(13, HIGH); 
  } else {
    digitalWrite(13, LOW);
  }
  delay(1000);
}