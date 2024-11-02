int yellowpin = 8; //pin to control the yellow pin
int wait = 500; //to control delay
void setup() {
  // put your setup code here, to run once:
  pinMode(yellowpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //turns on LED
  digitalWrite(yellowpin, HIGH);
  //time in milliseconds
  delay(wait);
  //turn off LED
  digitalWrite(yellowpin, LOW);
  delay(wait);

}
