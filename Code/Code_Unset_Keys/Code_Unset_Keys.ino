// Poorly written by Jahangir (Janik) Abdullayev
// Visit janik.codes
// Everything on https://github.com/JanikThePanic/macrobox-v2
// PCB on https://easyeda.com/jk4abdl/MarcoBox-v2

// Look, this is REALLY bad code, very copypasta, there are way better ways to do this.
// For the love of god, help save yourself and don't use this.
// Or do, I'm not going to tell you how to live your life.

#include <HID-Project.h>
#include <HID-Settings.h>
#include "leds.h"

// Vars used for mode selection
int mode = 1;
const int max_mode = 16;

// Var for key pressed
int key = 0;

// Vars for key pins
const int m1 = 2;
const int m2 = 3;

// No key set text
void nks(){
  Serial.print("No Key Set on Mode ");
  Serial.print(mode);
  Serial.print(" Key ");
  Serial.print(key);
  Serial.println();
}

// Different Modes
void mode_1() {
  switch(key) {
    case 1:
      Keyboard.write('A');
      //This is an example of writing
      break;

     case 2:
      Consumer.write(MEDIA_PLAY_PAUSE);
      //This is an example of pausing your music
      break;

      //More examples at https://github.com/NicoHood/HID/tree/2.6.1/examples
    
    default:
     nks();
     break;
  }
}
void mode_2() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_3() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_4() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_5() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_6() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_7() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_8() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_9() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_10() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_11() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_12() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_13() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_14() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_15() {
  switch(key) {
    default:
     nks();
     break;
  }
}
void mode_16() {
  switch(key) {
    default:
     nks();
     break;
  }
}

// Determine Mode
void whichMode() {
  switch (mode) {
    case 1:
      mode_1();
      break;
    case 2:
      mode_2();
      break;
    case 3:
      mode_3();
      break;
    case 4:
      mode_4();
      break;
    case 5:
      mode_5();
      break;
    case 6:
      mode_6();
      break;
    case 7:
      mode_7();
      break;
    case 8:
      mode_8();
      break;
    case 9:
      mode_9();
      break;
    case 10:
      mode_10();
      break;
    case 11:
      mode_11();
      break;
    case 12:
      mode_12();
      break;
    case 13:
      mode_13();
      break;
    case 14:
      mode_14();
      break;
    case 15:
      mode_15();
      break;
    case 16:
      mode_16();
      break;
  }
    
    //  Delay so one press is not seen as 1000 little presses, y'know
    delay(200);
    
}


// Switch Modes
void switchMode(int val) {
  mode += val;
  if (mode < 1){
    mode = max_mode;
  }
  if (mode > max_mode){
    mode = 1;
  }
  led_mode(mode);
}

// Setup
void setup() {
  // Initialize input pins
  pinMode(m1, INPUT_PULLUP);
  pinMode(m2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  
  // Initialize LED pins
  pinMode(tl, OUTPUT);
  pinMode(tr, OUTPUT);
  pinMode(bl, OUTPUT);
  pinMode(br, OUTPUT);
  
  // Initialize control over the keyboard and mouse
  Mouse.begin();
  Keyboard.begin();
  Consumer.begin();
  Serial. begin(9600);

  // Mode starts 1
  mode = 1;
  led_mode(mode);
}


void loop() {
  //  Check if key is pressed for mode switching
  if (digitalRead(m1) == LOW){
    switchMode(1);
    Serial.print("Mode: ");
    Serial.print(mode);
    Serial.println();
    
    //  Delay so one press is not seen as 1000 little presses, y'know
    delay(200);
  }
  if (digitalRead(m2) == LOW){
    switchMode(-1);
    Serial.print("Mode: ");
    Serial.print(mode);
    Serial.println();
    
    //  Delay so one press is not seen as 1000 little presses, y'know
    delay(200);
  }
  
  //Key time
  for (int i = 4; i < 12; i++) {
    if (digitalRead(i) == LOW) {
      key = i-3;
      whichMode();
    }
  }

}
