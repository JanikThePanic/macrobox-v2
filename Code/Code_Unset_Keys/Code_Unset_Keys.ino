// Poorly written by Jahangir (Janik) Abdullayev
// Visit janik.codes
// Everything on https://github.com/JanikThePanic/macrobox-v2
// PCB on https://easyeda.com/jk4abdl/MarcoBox-v2

// Look, this is REALLY bad code, very copypasta, there are way better ways to do this.
// For the love of god, help save yourself and don't use this.
// Or do, I'm not going to tell you how to live your life.

#include <Keyboard.h>
#include <Mouse.h>

// Vars used for mode selection
int mode = 1;
const int max_mode = 16;

// Var for key pressed
int key = 0;

// Vars for key pins
const int m1 = 2;
const int m2 = 3;

// Vars for LEDs
const int tl = A0;
const int tr = A1;
const int bl = A2;
const int br = A3;


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
}


// LEDs for each mode
void led_mode() {
  switch (mode) {
    case 1:
      digitalWrite(tl, HIGH);
      digitalWrite(tr, LOW);
      digitalWrite(bl, LOW);
      digitalWrite(br, LOW);
      break;
    case 2:
      digitalWrite(tl, LOW);
      digitalWrite(tr, HIGH);
      digitalWrite(bl, LOW);
      digitalWrite(br, LOW);
      break;
    case 3:
      digitalWrite(tl, HIGH);
      digitalWrite(tr, HIGH);
      digitalWrite(bl, LOW);
      digitalWrite(br, LOW);
      break;
    case 4:
      digitalWrite(tl, LOW);
      digitalWrite(tr, LOW);
      digitalWrite(bl, HIGH);
      digitalWrite(br, LOW);
      break;
    case 5:
      digitalWrite(tl, HIGH);
      digitalWrite(tr, LOW);
      digitalWrite(bl, HIGH);
      digitalWrite(br, LOW);
      break;
    case 6:
      digitalWrite(tl, LOW);
      digitalWrite(tr, HIGH);
      digitalWrite(bl, HIGH);
      digitalWrite(br, LOW);
      break;
    case 7:
      digitalWrite(tl, HIGH);
      digitalWrite(tr, HIGH);
      digitalWrite(bl, HIGH);
      digitalWrite(br, LOW);
      break;
    case 8:
      digitalWrite(tl, LOW);
      digitalWrite(tr, LOW);
      digitalWrite(bl, LOW);
      digitalWrite(br, HIGH);
      break;
    case 9:
      digitalWrite(tl, HIGH);
      digitalWrite(tr, LOW);
      digitalWrite(bl, LOW);
      digitalWrite(br, HIGH);
      break;
    case 10:
      digitalWrite(tl, LOW);
      digitalWrite(tr, HIGH);
      digitalWrite(bl, LOW);
      digitalWrite(br, HIGH);
      break;
    case 11:
      digitalWrite(tl, HIGH);
      digitalWrite(tr, HIGH);
      digitalWrite(bl, LOW);
      digitalWrite(br, HIGH);
      break;
    case 12:
      digitalWrite(tl, LOW);
      digitalWrite(tr, LOW);
      digitalWrite(bl, HIGH);
      digitalWrite(br, HIGH);
      break;
    case 13:
      digitalWrite(tl, HIGH);
      digitalWrite(tr, LOW);
      digitalWrite(bl, HIGH);
      digitalWrite(br, HIGH);
      break;
    case 14:
      digitalWrite(tl, LOW);
      digitalWrite(tr, HIGH);
      digitalWrite(bl, HIGH);
      digitalWrite(br, HIGH);
      break;
    case 15:
      digitalWrite(tl, HIGH);
      digitalWrite(tr, HIGH);
      digitalWrite(bl, HIGH);
      digitalWrite(br, HIGH);
      break;
    case 16:
      digitalWrite(tl, LOW);
      digitalWrite(tr, LOW);
      digitalWrite(bl, LOW);
      digitalWrite(br, LOW);
      break;
  }
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
  led_mode();
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
  Serial. begin(9600);

  // Mode starts 1
  mode = 1;
  led_mode();
}


void loop() {
  //  Check if key is pressed for mode switching
  if (digitalRead(m1) == LOW){
    switchMode(1);
    Serial.print("Mode: ");
    Serial.print(mode);
    Serial.println();
  }
  if (digitalRead(m2) == LOW){
    switchMode(-1);
    Serial.print("Mode: ");
    Serial.print(mode);
    Serial.println();
  }
  
  //Key time
  if (digitalRead(4) == LOW){
    key = 1;
    whichMode();
  }
  if (digitalRead(5) == LOW){
    key = 2;
    whichMode();
  }
  if (digitalRead(6) == LOW){
    key = 3;
    whichMode();
  }
  if (digitalRead(7) == LOW){
    key = 4;
    whichMode();
  }
  if (digitalRead(8) == LOW){
    key = 5;
    whichMode();
  }
  if (digitalRead(9) == LOW){
    key = 6;
    whichMode();
  }
  if (digitalRead(10) == LOW){
    key = 7;
    whichMode();
  }
  if (digitalRead(11) == LOW){
    key = 8;
    whichMode();
  }

  //  Delay so one press is not seen as 1000 little presses, y'know
  delay(200);
}
