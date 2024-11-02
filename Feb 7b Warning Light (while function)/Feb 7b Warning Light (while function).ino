double volts;
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
    while (sigread < 900) {
      sigread = analogRead(A5);
      digitalWrite(3, LOW);
      sigwrite = sigread * 0.2491;
      volts = sigwrite * 0.0196;
      analogWrite(10, sigwrite);
      Serial.print("Voltage = ");
      Serial.println(volts);
      delay(200);

  }
  
    digitalWrite(3, HIGH);
    analogWrite(10,0);
    Serial.println("Warning");
    delay(200); 

}
