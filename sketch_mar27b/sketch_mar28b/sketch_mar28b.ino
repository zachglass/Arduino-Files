void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9,  OUTPUT);
  pinMode(8,  OUTPUT);
  pinMode(7,  OUTPUT);
  pinMode(6,  OUTPUT);
  pinMode(5,  OUTPUT);
  pinMode(4,  OUTPUT);
  pinMode(3,  OUTPUT);
  pinMode(2,  OUTPUT);
}

void loop() {
  int pins[] = { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2 };
  int len = 12;
  
  for (int i = 0; i < len; i++) {
     digitalWrite(pins[i], HIGH);
        delay(100);
  }
  delay(1000);
  for (int i = len; i >= 0; i--) {
      digitalWrite(pins[i], LOW);
          delay(100);
  }
  delay(1000);
  
  /*
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  delay(750);
  digitalWrite(9, LOW);
  delay(750);
  digitalWrite(10, LOW);
  delay(750);
  digitalWrite(11, LOW);
  delay(750);
  digitalWrite(12, LOW);
  delay(1750);
  digitalWrite(13, LOW);
  */
}
