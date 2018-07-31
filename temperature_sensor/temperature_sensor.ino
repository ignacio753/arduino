const int temperaturePin = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float voltage, degreesC;

  voltage = getVoltage(temperaturePin);

  degreesC = (voltage  - 0.5) * 100.0;

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" deg C:");
  Serial.println(degreesC);

  delay(1000);
  
}


float getVoltage(int pin) {
  return (analogRead(pin) * 0.004882814);
}
