int blink;
int color;
int i = 0;
int wait = 250;
void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Which color do you want (11 for Red, 6 for Yellow, 5 for Green): ");
  while (Serial.available() == 0) {}
  color = Serial.parseInt();
  Serial.println(color);
  


  Serial.print("How many times do you want the LED to blink (whole +#): ");
  while (Serial.available() == 1) {}
  blink = Serial.parseInt();
  Serial.println(blink);
  

  if (color == 6){
    while (i <= blink){
      analogWrite(6, 255);
      delay(wait);
      analogWrite(6, 0);
      delay(wait);
      i = i+1;
    }
    
  }
  if (color == 11){
    while (i <= blink){
      analogWrite(11, 255);
      delay(wait);
      analogWrite(11, 0);
      delay(wait);
      i = i+1;
    }
    
  }
  if (color == 5){
    while (i <= blink){
      analogWrite(5, 255);
      delay(wait);
      analogWrite(5, 0);
      delay(wait);
      i = i+1;
    }
    
  }
  
}

