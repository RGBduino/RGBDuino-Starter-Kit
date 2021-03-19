int BuzzerPin = 5;
int Potentiometer = A0;

void setup() {
  pinMode(BuzzerPin, OUTPUT);
  pinMode(Potentiometer, INPUT);
}

void loop() {
  int potentioValue, Value;
  potentioValue = analogRead(Potentiometer);
  Value = map(potentioValue, 0, 1023, 0, 255); //Mapping potentiometer value to PWM signal value
  analogWrite(BuzzerPin, Value);
}
