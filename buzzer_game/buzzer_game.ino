//Imported Libraries
#include <TM1637.h>
#include <pitches.h> // include pitches

//tells the Arduino that pins 12 and 13 are attached to a seven segment display, and to configure it appropriately.
// TM1637 *_display = new TM1637(12, 13);

// music
int songState = 0;

int melody[] = {
NOTE_F4, NOTE_E4, NOTE_D4, NOTE_CS4,
NOTE_C4, NOTE_B3, NOTE_AS3, NOTE_A3,
NOTE_G3, NOTE_A3, NOTE_AS3, NOTE_A3, 
NOTE_G3, NOTE_C4, 0, 

NOTE_C4, NOTE_A3, NOTE_A3, NOTE_A3,
NOTE_GS3, NOTE_A3, NOTE_F4, NOTE_C4, 
NOTE_C4, NOTE_A3, NOTE_AS3, NOTE_AS3, 
NOTE_AS3, NOTE_C4, NOTE_D4, 0, 

NOTE_AS3, NOTE_G3, NOTE_G3, NOTE_G3,
NOTE_FS3, NOTE_G3, NOTE_E4, NOTE_D4, 
NOTE_D4, NOTE_AS3, NOTE_A3, NOTE_A3, 
NOTE_A3, NOTE_AS3, NOTE_C4, 0,

NOTE_C4, NOTE_A3, NOTE_A3, NOTE_A3,
NOTE_GS3, NOTE_A3, NOTE_A4, NOTE_F4, 
NOTE_F4, NOTE_C4, NOTE_B3, NOTE_G4, 
NOTE_G4, NOTE_G4, NOTE_G4, 0,

NOTE_G4, NOTE_E4, NOTE_G4, NOTE_G4,
NOTE_FS4, NOTE_G4, NOTE_D4, NOTE_G4, 
NOTE_G4, NOTE_FS4, NOTE_G4, NOTE_C4, 
NOTE_B3, NOTE_C4, NOTE_B3, NOTE_C4, 0
};

int tempo[] = {
8, 16, 8, 16,
8, 16, 8, 16,
16, 16, 16, 8,
16, 8, 3,

12, 16, 16, 16,
8, 16, 8, 16,
8, 16, 8, 16,
8, 16, 4, 12,

12, 16, 16, 16,
8, 16, 8, 16,
8, 16, 8, 16,
8, 16, 4, 12,

12, 16, 16, 16,
8, 16, 8, 16,
8, 16, 8, 16,
8, 16, 4, 16,

12, 17, 17, 17,
8, 12, 17, 17, 
17, 8, 16, 8,
16, 8, 16, 8, 1 
};


int piezopin1 //digital pin ~
int piezopin2 //digital pin ~
int signleadpin = 9;//digital pin ~
int buttonpin = 2;//digital pin
// int D10 //digital pin
// int CLK //digital pin


// free play
unsigned long previousMillis1 = 0; // updated at a later stage to store the current time 
const long interval1 = 1500; //how long to wait between code execution -- in this case, 1.5 seconds. 
                            //constant and will never change -- this allows the Arduino to further optimize the code.

// music
unsigned long previousMillis2 = 0; // time last changed
const long interval2 = 100; // interval between notes

// int displayStatus = 0; // keep track of what's displayed
// int mode = 0; // keep track of game mode -- change to 0 or 1 for different modes

bool countdown = false; //keep track when the countdown is finish and when to reset

// timer Play
unsigned long previousMillis3 = 0; // time last changed
const long interval3 = 1000; // interval between countdown
int count = 20; // challenge mode timer



void() {
// put your setup code here, to run once:
pinMode(signleadpin, INPUT); // setup circuit
pinMode(piezopin1, OUTPUT); // setup buzzer 1
pinMode(piezopin2, OUTPUT); // setup buzzer 2
pinMode(buttonpin, INPUT); // setup button

}

void loop() {
  // put your main code here, to run repeatedly:
// challenge mode
        if(mode == 0) {
                  if(digitalRead(2) == HIGH) {
                  delay(25);
                  }
                  if(digitalRead(2) == HIGH) {
                  countdown = true; // stop the countdown becauase this is free play and timer is not needed
                  }
        }
        else {
                  countdown = false; // stop the countdown
        }

        //Display words on display
        if(countdown) {
                  showCountdown(); // advance countdown on display
        }
        // free play for display
        else {
                  toggleFreePlay(); 
        }

        if(digitalRead(10) == HIGH) {
              delay(25);
        }
        
        if(digitalRead(10) == HIGH) {
            while(digitalRead(10) == HIGH) {
                    buzz(11, NOTE_B0, 1000/24); //plays the note given 
            }
        }
        else{
              sing(); // goes through every note and plays it          
        }

}



void toggleFreePlay() {
 // scroll between words without blocking
unsigned long currentMillis = millis(); // current time in milliseconds
    if (currentMillis - previousMillis1 >= interval1) {
            previousMillis1 = currentMillis;
    }
    if(displayStatus == 1){
      showPlay(); // write Play to display
    }
    else{
      showFree(); // write Free to display
    }
}


void buzz(int targetPin, long frequency, long length) {
long delayValue = 1000000/frequency/2; // calculate the delay value between transitions w respect to milliseconds
 //// 1 second's worth of microseconds, divided by the frequency, then half since there are two phases to each cycle. We use long to hold a 64-bit
long numCycles = frequency * length/ 1000; // calculate the number of cycles for proper timing
 //// multiply frequency, which is really cycles per second, by the number of seconds to get the total number of cycles
        for (long i=0; i < numCycles; i++){ // for the calculated length of time...
                digitalWrite(targetPin,HIGH); // write the buzzer pin high to push out the diaphragm of the buzzer
                delayMicroseconds(delayValue); // wait for the calculated delay value
                digitalWrite(targetPin,LOW); // write the buzzer pin low to pull back the diaphragm of the buzzer
                delayMicroseconds(delayValue); // wait again for the calculated delay value
        }
}

void sing() {
 // play the song in a non blocking way
unsigned long currentMillis = millis();

      if (currentMillis - previousMillis2 >= interval2) {
                  previousMillis2 = currentMillis;
                  int noteDuration = 1000 / tempo[songState]; // fix the tempo
                  buzz(10, melody[songState], noteDuration); ////plays the note given by melody with the same index of song state
                  int pauseBetweenNotes = noteDuration; // get specific note durations declared above
                  delay(pauseBetweenNotes);

                  buzz(10, 0, noteDuration); // stop the tone playing:

                  ++songState; //increments the value of songState and then returns songState
                  // start song again if finished
                  if(songState > 79) {
                  songState = 14; // skip intro and play the verse 
                  } 
      }
}











// void showNumber(int number) {
//  // show numbers (maximum 99) on display
//  _display->display(0, 25); // write - to segment 1
//  _display->display(3, 25); // write - to segment 4
//  
//  // write number to middle of display
//  if(number == 10)
//  {
//  _display->display(1,1);
//  _display->display(2,0);
//  }
//  else if(number > 9)
//  {
//  _display->display(1,1);
//  int newVal = number - 10;
//  _display->display(2, newVal);
//  }
//  else
//  {
//  _display->display(1,0);
//  _display->display(2,number);
//  }
// }



// void showCountdown() {
//  // countdown the time remaining
//  unsigned long currentMillis = millis(); // current time
//  if (currentMillis - previousMillis3 >= interval3) {
//  previousMillis3 = currentMillis;
//  --count;
//  showNumber(count);
//  if(count == 0) {
//  // game over
//  countdown = false;
//  count = 20;
//  // reset countdown
//  // buzz 3 times
//  buzz(11, NOTE_B0, 1000/24); 
//  delay(100);
//  buzz(11, NOTE_B0, 1000/24);
//  delay(100);
//  buzz(11, NOTE_B0, 1000/24);
//  }
//  }
// }


// void showPlay() {
//  // write "PLAY" to the display
//  _display->display(0, 21); // write P to segment 1
//  _display->display(1, 18); // write L to segment 2
//  _display->display(2, 10); // write A to segment 3
//  _display->display(3, 4); // write Y to segment 4
//  displayStatus = 2;
// }

// void showFree() {
//  // write "Free" to the display
//  _display->display(0, 15); // write F to segment 1
//  _display->display(1, 23); // write r to segment 2
//  _display->display(2, 14); // write E to segment 3
//  _display->display(3, 14); // write E to segment 4
//  displayStatus = 1;
// }
