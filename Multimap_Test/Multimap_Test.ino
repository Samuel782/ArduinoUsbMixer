#include <MultiMap.h>

int out[] = {127, 64, 32, 16, 8, 4, 2, 0};
int in[]  = {0, 35, 162, 529, 1023};



void setup() {
pinMode(A6, INPUT);
  
Serial.begin(9600);

}

void loop() {
int val = analogRead(A6);
int cm = multiMap(val, in, out, 14);
Serial.println("----");

Serial.println(cm);

}
