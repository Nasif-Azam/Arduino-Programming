int LedBlue = 2;
int LedRed = 6;
int LedGreen = 10;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  LedOperation(LedBlue);
  LedOperation(LedRed);
  LedOperation(LedGreen);
}

void LedOperation(int pinNumber){
  digitalWrite(pinNumber, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for 1/2 second
  digitalWrite(pinNumber, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                       // wait for 1/2 second
}