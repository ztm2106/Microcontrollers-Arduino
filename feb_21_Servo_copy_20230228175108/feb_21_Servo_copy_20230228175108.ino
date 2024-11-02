#include <Servo.h> // This includes the library for the servo
Servo spinner; //Name your motor
int servopin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(servopin, OUTPUT);
  spinner.attach(servopin); //This turns on the servo control

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 180; i = i + 20){
    spinner.write(i);
    delay(200);
    spinner.write(0);
  }
  delay(1000);
}
