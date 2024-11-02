int R = A5; // read reciever value
int T = 9;
int Light; //value read from reciever
int j = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(R, INPUT);
  pinMode(T, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(T, HIGH);
  Light = analogRead(R);
  Serial.println(Light);
  delay(1000);
}
