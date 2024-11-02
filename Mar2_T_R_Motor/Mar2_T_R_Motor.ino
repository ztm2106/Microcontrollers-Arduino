int R = A0; // read reciever value
int Light; //value read from reciever
unsigned long time;

int dirpin2 = 8; //direction pin
int dirpin7 = 12; //other direction pin
int speedpin = 3; //controls motor speed 0-255
void setup() {
  // put your setup code here, to run once:
  pinMode(R, INPUT);
  pinMode(dirpin2, OUTPUT);
  pinMode(dirpin7, OUTPUT);
  pinMode(speedpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // put your main code here, to run repeatedly:
  
  digitalWrite(dirpin2, HIGH);
  digitalWrite(dirpin7, LOW);
  analogWrite(speedpin, 200);
  for (int i = 0; i <= 1000; i++){
    Light = analogRead(R);
    time = micros();
    
    Serial.print(time);
    Serial.print("\t");
    Serial.println(Light);
  }
  Serial.println(" ");
  delay(30000);
}
