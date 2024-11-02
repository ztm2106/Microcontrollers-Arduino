int button1 = 6;
int oldbutton1state = 0;
int newbutton1state = 0;
int button2 = 12;
int oldbutton2state = 0; // this is the state of the button
int newbutton2state = 0; // this is the new state of the button
int redlight = 3;
int redlightstate = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(redlight, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  newbutton1state = digitalRead(button1); // read the button
  if (newbutton1state == 1 && oldbutton1state == 0){
    if (redlightstate == 0){
      digitalWrite(redlight, HIGH);
      delay(10);
      redlightstate = 1;
    }
    else {
      digitalWrite(redlight, LOW);
      delay(10);
      redlightstate = 0;
    }
  }

  oldbutton1state = newbutton1state;

  




}
