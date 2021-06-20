int pinpotensio = 0;
void setup() {
  Serial.begin(9600);
}

 

// the loop function runs over and over again forever

void loop() {
  int potensio = analogRead(pinpotensio);
  float voltage = potensio * (5.0/1023.0);
  int outputValue = map(potensio,0,1023,0,255);


  Serial.print("Tegangan = ");
  Serial.print(voltage);
  Serial.print("\t Potensio = ");
  Serial.print(potensio);
  Serial.print("\t output = ");
  Serial.print(outputValue);
  Serial.print("\n");
  delay(500);
}
