// Poorly written by Jahangir (Janik) Abdullayev
// Visit janik.codes
// Everything on https://github.com/JanikThePanic/macrobox-v2
// PCB on https://easyeda.com/jk4abdl/MarcoBox-v2

#ifndef leds_h
#define leds_h

// Vars for LEDs
const int tl = A0;
const int tr = A1;
const int bl = A2;
const int br = A3;

// LEDs for each mode
void led_mode(int mode) {
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

#endif
