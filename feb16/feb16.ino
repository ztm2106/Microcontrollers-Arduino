int prpin = A1;
int PRval;
float volts;
float resistance;
void setup() {
  // put your setup code here, to run once:
  pinMode(prpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  PRval = analogRead(prpin);
  Serial.print("PRval = ");
  Serial.println(PRval);
  Serial.println();
  volts = (PRval * (5./1023.));
  resistance = 5000. * ((5./volts)-1);
  Serial.print("Volts = ");
  Serial.println(volts);
  Serial.println();
  Serial.println(resistance);
  delay(500);
  
    //delay(3000);
}
