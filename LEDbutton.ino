
int buttonPin = 7; // Button connected to pin 7
int LEDPin = 8; // LED connected to pin 8

void setup() {
  // set digital pins as inputs or outputs
  pinMode(buttonPin, INPUT);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  // read a digital input = digitalRead(pin, VALUE)
  // write to a digital output = digitalWrite(pin, VALUE)

  //if button is pressed, turn LEDs on, otherwise off
  
  if (digitalRead(buttonPin) == 1)
  {
    digitalWrite(LEDPin, HIGH);
  }
  
  else{
    digitalWrite(LEDPin, LOW);
  }
}
