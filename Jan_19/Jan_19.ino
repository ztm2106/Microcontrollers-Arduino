void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); /*initialize pin as an output*/
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); /*command to turn on pin 13*/
  delay(1000); /*time delay in milliseconds*/
  digitalWrite(13, LOW); /*command to turn off pin 13*/
  delay(1000);
}
