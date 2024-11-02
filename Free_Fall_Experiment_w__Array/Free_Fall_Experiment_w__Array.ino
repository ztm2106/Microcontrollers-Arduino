int trigpin = 12;
int echopin = 11;
int pingTime[50];
unsigned long falltime[50];
int dt = 10;
int j;
int k;
float dist[50]; // var for distance

void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(250000);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter a number to start: ");
  while (Serial.available()<=1){
  }

  for (j = 0; j<50; j++) {
    digitalWrite(trigpin, LOW);
    digitalWrite(trigpin, HIGH);
    delayMicroseconds(dt);
    digitalWrite(trigpin, LOW);
    delayMicroseconds(dt);
    pingTime[j] = pulseIn(echopin, HIGH); // read the time the echo pin is high add to the array
    falltime[j] = micros();
  }
  for (k=0;k<50;k++){
    dist[k] = 343.* (pingTime[k]/2.)/1000000.;
    Serial.println(falltime[k]);
    Serial.println("\t");
    Serial.println(dist[k]);
  }
}
