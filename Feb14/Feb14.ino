int j;
float freq;
double period;
int buzzpin = 3;
int potpin = A0;
int dt;
int potvalue;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potvalue = analogRead(potpin);
  freq = 4.79 * potvalue + 100;
  dt = 1000000/(2 * freq);
  period = 2 * dt;

  Serial.println(dt);
  Serial.println(freq);
  Serial.println(period);

  for (j=0;j<=freq;j=j+1){
    digitalWrite(buzzpin, HIGH);
    delayMicroseconds(dt);
    digitalWrite(buzzpin, LOW);
    delayMicroseconds(dt);
  }
  //delay(3000);
}
