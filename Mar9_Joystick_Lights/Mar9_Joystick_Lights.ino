int vrxpin = A0;
int vrypin = A3;
int vrx;
int vry;

int redpin = 10;
int bluepin = 11;
int red;
int blue;
int red2;
int blue2;

void setup() {
  // put your setup code here, to run once:
  pinMode(vrxpin, INPUT);
  pinMode(vrypin, INPUT);
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  vrx = analogRead(vrxpin);
  vry = analogRead(vrypin);
  // red = map(vrx, 0, 1023, 0, 255);
  // blue = map(vry, 0, 1023, 0, 255);
  red = map(vrx, 0, 1023, 0, 255);
  red2 = map(vrx, 0, 512, 255, 0);
  blue = map(vry, 0, 1023, 0, 255);
  blue2 = map(vry, 0, 512, 255, 0);
  
  if (red >= 127 && red <= 128){
    analogWrite(redpin, 0);
  }
  if (red < 127) {
    analogWrite(redpin, red2);

  }
  else {
    analogWrite(redpin, red);
  }


  // if (blue >= 127 && blue <= 138){
  //   analogWrite(bluepin, 0);
  // }
  // else {
  //   digitalWrite(bluepin, HIGH);
  // }
  
  // if (red <= 127) {
  //   red = map(vrx, 1023, 0, 0, 255);
  //   analogWrite(redpin, red);
  // }
  // else {
  //   analogWrite(redpin,red);
  // }

  // //for blue light
  // if (blue >= 127 && blue >= 138){
  //   analogWrite(redpin, 0);
  // }
  // if (blue <= 127) {
  //   blue = map(vry, 1023, 0, 0, 255);
  //   analogWrite(bluepin,red + 255);
  // }
  // else {
  //   analogWrite(bluepin, blue);
  // }
  Serial.println(red);
  delay(10);

}