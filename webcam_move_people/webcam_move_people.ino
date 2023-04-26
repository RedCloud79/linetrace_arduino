int in1 = 5;
int in2 = 6;
int in3 = 9;
int in4 = 10;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    char input = Serial.read();

    if (input == 'F') {
      forward();
    } else if (input == 'B') {
      backward();
    } else if (input == 'ML'){
      left();
      delay(500);
      forward();
      delay(500);
      right();
      delay(500);
    } else if (input == 'L') {
      left();
    } else if (input == 'MR'){
      right();
      delay(500);
      forward();
      delay(500);
      left();
      delay(500);
    }else if (input == 'R') {
      right();
    } else {
      stop();
    }
  }
}

void forward() {
  delay(15);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void backward() {
  delay(15);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void left() {
  delay(15);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void right() {
  delay(15);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void stop() {
  delay(15);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}