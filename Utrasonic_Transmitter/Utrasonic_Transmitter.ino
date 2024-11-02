int trigpin = 2; //trigger pin
int echopin = 3; // echo pin 
int dt = 10; // delay time in microseconds
int pingtime;
float dist; // variable to calc distance
int i;

float avg;
int j;
float count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Enter a distance: ");
  while (Serial.available()<=1){


  }

  j = Serial.parseInt();
  Serial.println(j);
  for (i = 1; i < 11; i++){
    //this part sends out the 10 us trigger
    digitalWrite(trigpin, LOW);
    digitalWrite(trigpin, HIGH);
    delayMicroseconds(dt);
    digitalWrite(trigpin, LOW);
    pingtime = pulseIn(echopin, HIGH); // read the time the echo pin is high
    count += pingtime;
    //Serial.println(pingtime); // print the time read
    //dist =  340. * pingtime/2./10000.;
    //Serial.print("distance=");
    //Serial.print("pingtime=");
    //Serial.print("\t");
    //Serial.println(dist);
    //Serial.println(pingtime);
    Serial.read(); //clears serial port
    delay(1000);
    }
  //dist =  340. * pingtime/2./10000.;
    avg = count / 10 ;
    Serial.println(avg);
    count = 0;


}
