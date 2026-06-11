#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(115200);
  if (!mpu.begin()) {
    while (1) { delay(10); }
  }
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Enviando os dados via USB em formato JSON para facilitar a leitura no JS
  Serial.print("{\"x\":");
  Serial.print(a.acceleration.x);
  Serial.print(", \"y\":");
  Serial.print(a.acceleration.y);
  Serial.println("}");

  delay(20); // 50Hz de taxa de atualização
}
