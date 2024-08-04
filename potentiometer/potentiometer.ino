const byte LED_PIN = 9;

const byte POTENTIOMETER_PIN = A0;

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
  
}

void loop() {
  
  changeBrightness();
  
}

void changeBrightness() {
  
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  
  byte brightness = map(potentiometerValue, 0, 1023, 0, 255);
  
  analogWrite(LED_PIN, brightness);
  
}
