//initalize variables
int wait = 1000;
int vR2;
void setup() {
  // put your setup code here, to run once:
  //sending 5V to the divider
  pinMode(3, OUTPUT);
  //reading the voltage
  pinMode(A5,INPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //write 5v to the board
  digitalWrite(3, HIGH);
  // read the voltage and save in variable
  vR2 = analogRead(A5);
  //print the values in the console
  Serial.println(vR2);
  //delay time 
  delay(wait);


}
