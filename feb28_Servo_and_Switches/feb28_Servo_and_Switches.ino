#include <Servo.h> // This includes the library for the servo
Servo spinner; //Name your motor
int servopin = 2; //pin for servo

int button1 = 6;
int oldbutton1state = 0; // this is the state of the button
int newbutton1state = 0;// this is the new state of the button
int button2 = 9;
int oldbutton2state = 0; // this is the state of the button
int newbutton2state = 0; // this is the new state of the button
int redpin = 11;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(servopin, OUTPUT);
  spinner.attach(servopin);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(redpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //bounds of 180 and 0 where the red light comes on is below
  if (i == 180){
        digitalWrite(redpin, HIGH);
        i = 180;
      }
      else{
        digitalWrite(redpin, LOW);
      }
  if (i == 0){
        digitalWrite(redpin, HIGH);
        i = 0;
      }
      else{
        digitalWrite(redpin, LOW);
      }
  
  //reading the buttons now
  newbutton1state = digitalRead(button1); // read the button1
  newbutton2state = digitalRead(button2); // read the button1
  //Serial.print(newbutton1state + "  ");
  //Serial.println(newbutton2state);
  //delay(20);

  //first button adds in increments of 10 up to 180 and writes it to the spinner
  if (newbutton1state == 1 && oldbutton1state == 0){
    if (i != 180){
      i = i + 10;
    }
    delay(100);
    spinner.write(i);
      
  }

   //first button subtracts in increments of 10 up to 0 and writes it to the spinner
  if (newbutton2state == 1 && oldbutton2state == 0){
    if (i != 0){
      i = i - 10;
    }
    delay(100);
    spinner.write(i);
  }

  //change oldbuttonstate back to 0
  oldbutton1state = newbutton1state;
  oldbutton2state = newbutton2state;
}
