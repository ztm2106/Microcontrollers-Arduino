int volts;
int sigread;
int sigwrite;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
  //reading the voltage
  pinMode(A5,INPUT);
  //Begins the serial print monitor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sigread = analogRead(A5);
  if (sigread < 900) {
    digitalWrite(3, LOW);
    sigwrite = sigread * 255/1023;
    analogWrite(10, sigwrite);
    Serial.print("Potentiometer value read = ");
    Serial.println(sigread);
    delay(200);

  }
  if (sigread >= 900){
    digitalWrite(3, HIGH);
    analogWrite(10,0);
    Serial.println("Warning");
    delay(200);
  }  

}
