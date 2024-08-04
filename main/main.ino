const byte LED_PIN = 2;

const int DURATION = 1500;

byte ledState = LOW;

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
  
}

void loop() {
  
  delay(DURATION);
  
  toggleLed();
  
}

void toggleLed() {
  
  if(ledState == LOW) {
    
    ledState = HIGH;
    
  }
  
  else {
    
    ledState = LOW;
    
  }
  
  digitalWrite(LED_PIN, ledState);
  
}
