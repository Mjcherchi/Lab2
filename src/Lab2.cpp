/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/michaeljosephcherchi/Desktop/labs/Lab2/src/Lab2.ino"
void setup();
void loop();
#line 1 "/Users/michaeljosephcherchi/Desktop/labs/Lab2/src/Lab2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t value1 = analogRead(A5);

void setup() {
  pinMode(A5, INPUT);
  pinMode(D5, OUTPUT);
}

void loop() {
  value1 = analogRead(A5);
  digitalWrite(D5, value1);
}

//uint16_t value = analogRead(A5);
//int value = analogRead(A5);
//hi

//Serial.begin(9600);
//Serial.printIn("Hello World!");
