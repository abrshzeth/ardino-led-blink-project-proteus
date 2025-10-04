const int ledpin = 13;

void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int numofblinks[] = {1, 2, 3, 4};

  for (int i = 0; i < 4; i++) {
    Serial.print("Blinking ");
    Serial.print(numofblinks[i]);
    Serial.println(" times");

    blinkled(numofblinks[i]);
    delay(10000); 
  }
}

void blinkled(int blinkof) {
  for (int i = 0; i < blinkof; i++) {
    digitalWrite(ledpin, HIGH);
    delay(400);
    digitalWrite(ledpin, LOW);
    delay(400);
  }
}

