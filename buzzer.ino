#define BUZZER_PIN 9

//====================================================================//|
// Buzzer - Melodi Sistemi
//====================================================================//|
long bpMillis = 0;      // Buzzer Timer
long bint = 100;        // Interval
unsigned long bcMillis; // Buzzer Millis
const int maxi = 10;    // Buzzer Step Maksimum

//====================================================================//|
// Buzzer - Melodiler
//====================================================================//|
int melody1[] = {
  10 , 0, 20, 0, 30, 0, 40, 0, 50, 0
  };
int melody2[] = {
  255, 0, 255, 0, 255, 0, 255, 0, 255, 0
  };
int melody3[] = {
  255, 255, 255, 255, 255, 0, 0, 0, 0, 0
  };

//====================================================================//|
// Buzzer - Main Function
//====================================================================//|
void Buzzer(int GelenMelodi) {
  int i = 0;
    while (i < maxi) {
      bcMillis = millis();
      if (bcMillis - bpMillis > bint) {
        bpMillis = bcMillis;
        if (GelenMelodi == 1) {
          analogWrite(BUZZER_PIN, melody1[i] );
        }
        if (GelenMelodi == 2) {
          analogWrite(BUZZER_PIN, melody2[i] );
        }
        if (GelenMelodi == 3) {
          analogWrite(BUZZER_PIN, melody3[i] );
        }
        i++;
      }
    }

  analogWrite(BUZZER_PIN, 0);
}


Buzzer(1)
