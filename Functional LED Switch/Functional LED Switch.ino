const int pinSwitch = 7;
const int pinLED = 13;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pinLED, OUTPUT);
  // pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pinSwitch, INPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println(digitalRead(pinSwitch));
  
  if(digitalRead(pinSwitch) == HIGH){
    digitalWrite(pinLED, HIGH);
  }
  else{
    digitalWrite(pinLED, LOW);    
  }
}

