void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //turns on LED
  digitalWrite(2, HIGH);
  //time in milliseconds where this is 1 second
  delay(1000);
  //turn off LED
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
  //sequeance of digitalWrite to turn all pins on 
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(1000);
  //sequeance of digitalWrite to turn all pins of
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  //delay by a quarter of a second
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  delay(250);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, LOW);
  //turn them all off for 3.o seconds
  delay(3000);

  } 
