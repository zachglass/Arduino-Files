void setup() {
  // put your setup code here, to run once:
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
  // put your main code here, to run repeatedly:
 digitalWrite(10, HIGH);
 delay(100);
 digitalWrite(11, HIGH);
 delay(100); 
 digitalWrite(12, HIGH);
 delay(100); 
 digitalWrite(13, HIGH);
 delay(100); 
 digitalWrite(6, HIGH);
 delay(100); 
 digitalWrite(5, HIGH); 
 delay(100); 
 digitalWrite(4, HIGH);
 delay(100); 
 digitalWrite(3, HIGH);
 delay(100); 
 digitalWrite(2, HIGH);
 delay(1000);
 digitalWrite(2, LOW);
 delay(100); 
 digitalWrite(3, LOW);
 delay(100); 
 digitalWrite(4, LOW);
 delay(100); 
 digitalWrite(5, LOW);
 delay(100); 
 digitalWrite(6, LOW);
 delay(100); 
 digitalWrite(13, LOW); 
 delay(100); 
 digitalWrite(12, LOW);
 delay(100); 
 digitalWrite(11, LOW);
 delay(100); 
 digitalWrite(10, LOW);
 delay(1000);
}
