#include <MultiMap.h>

#include "MIDIUSB.h" 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void noteOn(byte channel, byte pitch, byte velocity) {                                                                   
  midiEventPacket_t noteOn = {0x09, 0x90 | channel, pitch, velocity};                                                    
  MidiUSB.sendMIDI(noteOn);                                                                                              
}                                                                                                                        
                                                                                                                        
void noteOff(byte channel, byte pitch, byte velocity) {                                                                   
  midiEventPacket_t noteOff = {0x08, 0x80 | channel, pitch, velocity};                                                   
  MidiUSB.sendMIDI(noteOff);                                                                                             
}                                                                                                                        
                                                                                                                         
void controlChange(byte channel, byte control, byte value) {                                                             
  midiEventPacket_t event = {0x0B, 0xB0 | channel, control, value};                                                      
  MidiUSB.sendMIDI(event);                                                                                               
};     

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  int outA6[] = {127, 64, 32, 16, 0};
  int inA6[]  = {0, 485, 866, 997, 1023};
///////////////////////////////////////
  int outA7[] = {127, 64, 32, 0};
  int inA7[]  = {0, 35, 162, 999, 1023};
///////////////////////////////////////
  int outA8[] = {127, 64, 32, 0};
  int inA8[]  = {0, 100, 530, 900, 1023};
///////////////////////////////////////
  int outA9[] = {127, 64, 32, 0};
  int inA9[]  = {0, 100, 530, 900, 1023};

void setup() {

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);
  pinMode(A8, INPUT);
  pinMode(A9, INPUT);

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void loop() {

  PA0();
  PA1();
  PA2();
  PA3();
  PA4();
  PA5();
  PA6();
  PA7();
  PA8();
  PA9();

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA0() {
  
  int PcSA0 = analogRead(A0);
  int McSA0 = map(PcSA0, 0, 1023, 0, 127);
  int MiSA0 = 0;

  if (MiSA0 != McSA0) {

    controlChange(0, 3, McSA0);
    delay(10);
    MiSA0 = McSA0;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA1() {
  
  int PcSA1 = analogRead(A1);
  int McSA1 = map(PcSA1, 0, 1023, 0, 127);
  int MiSA1 = 0;

  if (MiSA1 != McSA1) {

    controlChange(0, 9, McSA1);
    delay(10);
    MiSA1 = McSA1;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA2() {
  
  int PcSA2 = analogRead(A2);
  int McSA2 = map(PcSA2, 0, 1023, 0, 127);
  int MiSA2 = 0;

  if (MiSA2 != McSA2) {

    controlChange(0, 14, McSA2);
    delay(10);
    MiSA2 = McSA2;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA3() {
  
  int PcSA3 = analogRead(A3);
  int McSA3 = map(PcSA3, 0, 1023, 0, 127);
  int MiSA3 = 0;

  if (MiSA3 != McSA3) {

    controlChange(0, 15, McSA3);
    delay(10);
    MiSA3 = McSA3;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA4() {
  
  int PcSA4 = analogRead(A4);
  int McSA4 = map(PcSA4, 0, 1023, 0, 127);
  int MiSA4 = 0;

  if (MiSA4 != McSA4) {

    controlChange(0, 20, McSA4);
    delay(10);
    MiSA4 = McSA4;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA5() {
  
  int PcSA5 = analogRead(A5);
  int McSA5 = map(PcSA5, 0, 1023, 0, 127);
  int MiSA5 = 0;

  if (MiSA5 != McSA5) {

    controlChange(0, 21, McSA5);
    delay(10);
    MiSA5 = McSA5;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA6() {

  int PcSA6 = analogRead(A6);   
  int McSA6 = multiMap(PcSA6, inA6, outA6, 14);
  int MiSA6 = 0;
  
  
  if (MiSA6 != McSA6) {

    controlChange(0, 22, McSA6);
    delay(10);
    MiSA6 = McSA6;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA7() {
  
  int PcSA7 = analogRead(A7);
  int McSA7 = multiMap(PcSA7, inA7, outA7, 14);
  int MiSA7 = 0;
  
  if (MiSA7 != McSA7) {

    controlChange(0, 23, McSA7);
    delay(10);
    MiSA7 = McSA7;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA8() {
  
  int PcSA8 = analogRead(A8);
  int McSA8 = multiMap(PcSA8, inA8, outA8, 14);
  int MiSA8 = 0;
  
  if (MiSA8 != McSA8) {

    controlChange(0, 24, McSA8);
    delay(10);
    MiSA8 = McSA8;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PA9() {
  
  int PcSA9 = analogRead(A9);
  int McSA9 = multiMap(PcSA9, inA9, outA9, 13);
  int MiSA9 = 0;
  
  if (MiSA9 != McSA9) {

    controlChange(0, 25, McSA9);
    delay(10);
    MiSA9 = McSA9;

  }

  else {

    MidiUSB.flush();

  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
