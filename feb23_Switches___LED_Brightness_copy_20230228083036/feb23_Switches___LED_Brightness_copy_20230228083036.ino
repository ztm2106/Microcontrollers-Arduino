int button1 = 6;
int oldbutton1state = 0;
int newbutton1state = 0;
int button2 = 11;
int oldbutton2state = 0; // this is the state of the button
int newbutton2state = 0; // this is the new state of the button
int redlight = 3;
int redlightstate = 0;
int redlightbright = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(redlight, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  newbutton1state = digitalRead(button1); // read the button1
  newbutton2state = digitalRead(button2); // read the button1
  if (newbutton1state == 1 && oldbutton1state == 0){
    redlightbright = redlightbright + 10;
    delay(20);
    analogWrite(redlight, redlightbright);
  }
  if (redlightbright >= 255){
    redlightbright = 255;
    analogWrite(redlight, redlightbright);
  }
  if (newbutton2state == 1 && oldbutton2state == 0){
    redlightbright = redlightbright - 10;
    delay(20);
    analogWrite(redlight, redlightbright);
  }
  if (redlightbright <= 0){
    redlightbright = 0;
    analogWrite(redlight, redlightbright);
  }
  oldbutton1state = newbutton1state;
  oldbutton2state = newbutton2state;


  

  




}
