const int gasSensorPin = 34;

void setup() {
  Serial.begin(115200);
  pinMode(gasSensorPin, INPUT);
}

void loop() {
  int sensorValue = analogRead(gasSensorPin);
  float voltage = sensorValue * (3.3 / 4095.0);  // Corrected voltage calculation for 12-bit ADC

  Serial.print("Sensor Value:  ");
  Serial.print(sensorValue);
  Serial.print(" | Voltage: ");
  Serial.println(voltage);

  delay(1000);
}
