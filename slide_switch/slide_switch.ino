const byte LED_PIN = 2;

const byte SWITCH_PIN = 3;

byte ledState = LOW;

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
  
  pinMode(SWITCH_PIN, INPUT);
  
}

void loop() {
  
  toggleLed();
  
}

void toggleLed(){
  
  int switchState = digitalRead(SWITCH_PIN);
  
  if(switchState == HIGH) {
    
    ledState = HIGH;
    
  }
  
  else {
    
    ledState = LOW;
    
  }
  
  digitalWrite(LED_PIN, ledState);
  
}
