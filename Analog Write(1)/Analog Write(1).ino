const int ledPin = 10;
void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int fadeValue = 0; fadeValue <= 255; fadeValue +=5){
    analogWrite(ledPin, fadeValue);
    Serial.println(fadeValue);    
    delay(500);
  }

  for(int fadeValue = 255; fadeValue >= 0; fadeValue -=5){
    analogWrite(ledPin, fadeValue);
    Serial.println(fadeValue); 
    delay(500);
  }
}
