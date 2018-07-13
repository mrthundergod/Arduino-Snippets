const int pRes=A0;
const int buzz = 9;
int value;

void setup() {
  pinMode(pRes, INPUT);
  pinMode(buzz, OUTPUT);

}

void loop() {
  value = analogRead(pRes);

  if (value>25){
    digitalWrite(buzz, LOW);
  }
  else {
    digitalWrite(buzz, HIGH);
  }

}
