float bright;
int LEDpin = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("On a scale of 0 - 100, How bright do you want the LED to be: ");
  while (Serial.available() == 0) { 
     
  }
  bright = Serial.parseInt() * 255. / 100.;
  Serial.println(bright);
  analogWrite(LEDpin, bright);

}
