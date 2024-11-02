int yellowpin = 11; // control red LED connected to pin 7
int bluepin = 7; // control blue LED connected to pin 7
int redpin = 2; // control red LED connected to pin 2
int wait1 = 1000; //control first delay time 1sec
int wait2 = 250; //control second delay time 1/4sec
int wait3 = 3000; //control third delay time 3 sec
int j; // initalize random varible for the for loop

//set up code to run once
void setup() {
  pinMode(yellowpin ,OUTPUT); //output information to pin 11
  pinMode(bluepin ,OUTPUT); //output information to pin 7
  pinMode(redpin ,OUTPUT); //output information to pin 2

}

// main code loop
void loop() {
  //turns on red LED
  digitalWrite(redpin, HIGH);
  //delay by first delay time
  delay(wait1);
  //turn off red LED
  digitalWrite(redpin, LOW);
  //delay by first delay time
  delay(wait1);
  //turns on yellow LED
  digitalWrite(yellowpin , HIGH);
  //delay by first delay time
  delay(wait1);
  //turns off yellow LED
  digitalWrite(yellowpin, LOW);
  //delay by first delay time
  delay(wait1);
  //turns on blue LED
  digitalWrite(bluepin, HIGH);
  //delay by first delay time
  delay(wait1);
  //turns off blue LED
  digitalWrite(bluepin, LOW);
  //delay by first delay time
  delay(wait1);
  //turn on all LEDS 
  digitalWrite(yellowpin, HIGH);
  digitalWrite(redpin, HIGH);
  digitalWrite(bluepin, HIGH);
  //delay by first delay time
  delay(wait1);
  //turn off all LEDS
  digitalWrite(yellowpin, LOW);
  digitalWrite(redpin, LOW);
  digitalWrite(bluepin, LOW);
  //delay by second delay time
  delay(wait2);
  // for loop for 10 interations where j starts at 1 and increments by 1 up to 10
  for (j=1;j<=10;j=j+1){
    //turn on all LEDS
    digitalWrite(yellowpin, HIGH);
    digitalWrite(redpin, HIGH);
    digitalWrite(bluepin, HIGH);
    //delay by second delay time
    delay(wait2);
    //turn off all LEDS
    digitalWrite(yellowpin, LOW);
    digitalWrite(redpin, LOW);
    digitalWrite(bluepin, LOW);
    //delay by second delay time
    delay(wait2);
  }
  //delay by third delay time
  delay(wait3);
  

  } 
