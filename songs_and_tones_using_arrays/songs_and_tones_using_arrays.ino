/*Play Happy Birthday*/
#include "pitchs.h" // access our pitchs.h header
int j; // counter to access array
int noteDuration; // calculate note length
int melody[] = {NOTE_D3, NOTE_D3, NOTE_E3, NOTE_D3, NOTE_G3, NOTE_FS3,
NOTE_D3, NOTE_D3, NOTE_E3, NOTE_D3, NOTE_A3, NOTE_G3,
NOTE_D3, NOTE_D3, NOTE_D4, NOTE_B3, NOTE_G3, NOTE_FS3, NOTE_E3,
NOTE_C4, NOTE_C4, NOTE_B3, NOTE_G3, NOTE_A3, NOTE_G3}; // notes corresponding to the header

int melodyRiptide[] = {NOTE_A3, NOTE_B3, NOTE_C3, NOTE_D3, NOTE_E3, 
NOTE_E3,NOTE_A4, NOTE_G3, NOTE_F3, NOTE_E3, 
NOTE_C3, NOTE_C3,NOTE_C3, NOTE_C3, NOTE_C4}; // notes corresponding to the header

int melody2[] = {NOTE_D3, NOTE_F3, NOTE_D3, NOTE_FS3};

int noteDurations [] = {8,8,4,4,4,2,
8, 8,4,4,4,2,
8, 8,4, 4,4,4,4,
8, 8,4,4,4,2}; // note length, time, or duration

int noteDurations2 [] = {4,4,4,1}; // note length, time, or duration

int noteTime = 1000; // base time
int pause;


void setup() {
  // put your setup code here, to run once:
  // increment has to match the number of notes
  for (j = 0; j<4; j++){
    //calculate note durations
    noteDuration = noteTime/noteDurations2[j]; // calculate the length of time each note will play based on the noteDurations array
    // *2 on melody moves up an octave and /2 to move down an octave
    tone(11, melody2[j], noteDuration);
    pause = noteDuration * 1.3; 
    delay(pause);
    noTone(11);
  }
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
