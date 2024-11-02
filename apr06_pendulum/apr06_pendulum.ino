int r= A5; // read reciever value
unsigned long light; //value read from reciever
unsigned long time;
int oldstate = 1; // this is the state of the button
int newstate = 1;// this is the new state of the button
int threshold = 800;

void setup() {
  // put your setup code here, to run once:
  pinMode(r, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  light = analogRead(r);
  
  if (light < threshold){
    newstate = 0;
  
  }
  else{
    newstate = 1;
  }
  if (oldstate == 1 && newstate == 0){
    time = micros();
    Serial.println(time);
    
  }
  oldstate = newstate;
}  
