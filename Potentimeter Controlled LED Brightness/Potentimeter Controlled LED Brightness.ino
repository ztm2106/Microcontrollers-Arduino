//initalize variables
//delay time for a tenth of a seconf
int wait = 100;
//variable to store info
int vR2;
void setup() {
  // put your setup code here, to run once:
  //sending 5V to the divider
  pinMode(3, OUTPUT);
  //reading the voltage
  pinMode(A5,INPUT);
  //Begins the serial print monitor
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  // read the voltage and save in variable
  vR2 = analogRead(A5);
  //computation for read bits to write bits
  double ReadToWrite = vR2 * 0.249;
  //computation for write bits to volts
  double WriteToVolts = ReadToWrite / 51;
  //print the values of analogRead bits and analogWrite bits and voltage on one line in serial monitor
  Serial.print(vR2);
  Serial.print("  ");
  Serial.print(ReadToWrite);
  Serial.print("  ");
  Serial.println(WriteToVolts);
  analogWrite(3, ReadToWrite);
  //delay time 
  delay(wait);


}
