int yellowpin = 9; //pin to control the yellow pin
int wait1 = 10; //to control delay
int wait2 = 600; //to control delay
int j;
int k;
void setup() {
  // put your setup code here, to run once:
  pinMode(yellowpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
for (j=0;j<=255;j=j+1){
  analogWrite(yellowpin, 255); //turns on LED slowly from 0 - 255
  //time in milliseconds
  //delay(wait1);
}
/*for (k=255;k>=0;k=k-1){
  analogWrite(yellowpin, k);
  //time in milliseconds
  delay(wait1);
}*/

}
