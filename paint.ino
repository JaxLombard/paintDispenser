void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pump1();
  pump2();
  pump3();
  pump4();
}

void pump1() {
  int pump1delay = 1000;
  digitalWrite(12, HIGH);
  delay(pump1delay);
  digitalWrite(12, LOW);
  delay(pump1delay);
  
}

void pump2() {
  int pump2delay = 1000;
  digitalWrite(9, HIGH);
  delay(pump2delay);
  digitalWrite(9, LOW);
  delay(pump2delay);
}

void pump3() {
  int pump3delay = 1000;
  digitalWrite(11, HIGH);
  delay(pump3delay);
  digitalWrite(11, LOW);
  delay(pump3delay);
}

void pump4() {
  int pump4delay = 1000;
  digitalWrite(10, HIGH);
  delay(pump4delay);
  digitalWrite(10, LOW);
  delay(pump4delay);
}
