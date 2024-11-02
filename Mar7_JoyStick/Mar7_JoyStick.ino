int vrxpin = A0;
int vrypin = A1;
int vrx;
int vry;
void setup() {
  // put your setup code here, to run once:
  pinMode(vrxpin, INPUT);
  pinMode(vrypin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  vrx = analogRead(vrxpin);
  vry = analogRead(vrypin);

  Serial.print("Vrx= ");
  Serial.println(vrx);
  
  Serial.print("Vry= ");
  Serial.println(vry);

  delay(1000);

}
