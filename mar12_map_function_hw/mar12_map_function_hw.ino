int vrxpin = A0;
int vrypin = A3;
int vrx;
int vry;

int yellowpin = 11;
int bluepin = 10;
int greenpin = 9;

int yellow;
int blue;
int green;

int blue2;

void setup() {
  // put your setup code here, to run once:
  pinMode(vrxpin, INPUT);
  pinMode(vrypin, INPUT);

  pinMode(yellowpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  vrx = analogRead(vrxpin);
  vry = analogRead(vrypin);

  yellow = map(vry, 512, 1023, 0, 255);
  
  blue = map(vrx, 512, 1023, 0, 255);
  blue2 = map(vrx, 512, 0, 0, 255);

  green = map(vry, 512, 0, 0, 255);
  
  if (vry <= 512){
    analogWrite(yellowpin, 0);
    analogWrite(greenpin, green);
  }
  if (vry > 512){
    analogWrite(yellowpin, yellow);    
  }
  if (vry >= 512){
    analogWrite(greenpin, 0);
  }
  if (vrx == 512){
    analogWrite(bluepin, 255);
  }
  if (vrx < 512){
    analogWrite(bluepin, blue);
  }
  if (vrx > 512){
    analogWrite(bluepin, blue2);
  }
  delay(10);

}