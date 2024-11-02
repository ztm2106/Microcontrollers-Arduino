int dirpin2 = 2; //direction pin
int dirpin7 = 7; //other direction pin
int speedpin = 5; //controls motor speed 0-255
void setup() {
  // put your setup code here, to run once:
  pinMode(dirpin2, OUTPUT);
  pinMode(dirpin7, OUTPUT);
  pinMode(speedpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // controls direction if pin 2 high then pin 7 low
  digitalWrite(dirpin2, HIGH);
  digitalWrite(dirpin7, LOW);
  analogWrite(speedpin, 200);


}
