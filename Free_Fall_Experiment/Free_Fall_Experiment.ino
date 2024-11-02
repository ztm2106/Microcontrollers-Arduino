int trigpin = 11; //trigger pin
int echopin = 10; // echo pin 
int dt = 10; // delay time in microseconds
unsigned long pingtime;
float dist; // variable to calc distance
int i;
unsigned long falltime;


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

  for (i = 1; i < 200; i++){
    //this part sends out the 10 us trigger
    digitalWrite(trigpin, LOW);
    digitalWrite(trigpin, HIGH);
    delayMicroseconds(dt);
    digitalWrite(trigpin, LOW);
    pingtime = pulseIn(echopin, HIGH); // read the time the echo pin is high
    falltime = micros();
    
    //Serial.print(i + ". ");
    Serial.print(falltime);
    Serial.print("\t");
    //Serial.print("pingtime= ");
    Serial.println(pingtime); // print the time read

//    //calculation for distance with vel and time
//    dist =  343. * pingtime/2./10000.;
    }
    Serial.read(); //clears serial port
}
