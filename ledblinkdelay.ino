const int ledpin = 13;

void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  static int delayperiod = 100;
  static int direction = 1;

  digitalWrite(ledpin, HIGH);
  delay(delayperiod);
  digitalWrite(ledpin, LOW);
  delay(delayperiod);

  direction = countdir(delayperiod, direction);


  delayperiod = delayperiod + 100 * direction;

}

int countdir(int delayperiod, int direction) {
  if ((delayperiod >= 1000) || (delayperiod <= 0)) {
    direction *= -1; 
  }
  return direction;
}
