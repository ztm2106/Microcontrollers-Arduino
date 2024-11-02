int volt;
void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(5, 200);
  delay(1000);
  volt = analogRead(A2);
  Serial.println(volt);
}
