#include <MultiMap.h>

#include "MIDIUSB.h"           
//////////////////////

/////////////////////
int potCstateA0 = 0;
int midiIstateA0 = 0;
int midiCstateA0 = 0;
/////////////////////
int potCstateA1 = 0;
int midiIstateA1 = 0;
int midiCstateA1 = 0;
////////////////////
int potCstateA2 = 0;
int midiIstateA2 = 0;
int midiCstateA2 = 0;
/////////////////////
int potCstateA3 = 0;
int midiIstateA3 = 0;
int midiCstateA3 = 0;
/////////////////////
int potCstateA4 = 0;
int midiIstateA4 = 0;
int midiCstateA4 = 0;
/////////////////////
int potCstateA5 = 0;
int midiIstateA5 = 0;
int midiCstateA5 = 0;
/////////////////////
int potCstateA6 = 0;
int midiIstateA6 = 0;
int midiCstateA6 = 0;
/////////////////////
int potCstateA7 = 0;
int midiIstateA7 = 0;
int midiCstateA7 = 0;
/////////////////////
int potCstateA8 = 0;
int midiIstateA8 = 0;
int midiCstateA8 = 0;
/////////////////////
int potCstateA9 = 0;
int midiIstateA9 = 0;
int midiCstateA9 = 0;
/////////////////////
int potCstateA10 = 0;
int midiIstateA10 = 0;
int midiCstateA10 = 0;
/////////////////////
int potCstateA11 = 0;
int midiIstateA11 = 0;
int midiCstateA11 = 0;
/////////////////////





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
  pinMode(A10, INPUT);
  pinMode(A11, INPUT);
  Serial.begin(9600);
}


void loop()  
{
  //  potenziometroA0();
  //  potenziometroA1();
  //  potenziometroA2();
  //  potenziometroA3();
  //  potenziometroA4();
  //  potenziometroA5();
  potenziometroA6();
  //  potenziometroA7();
  //  potenziometroA8();
  //  potenziometroA9();

    
}

void potenziometroA0() {  

     
    
    potCstateA0 = analogRead(A0);

    midiCstateA0 = map(potCstateA0, 0, 1023, 0, 127);

    if (midiIstateA0 != midiCstateA0) {

      controlChange(0, 3, midiCstateA0);

      delay(10);

      midiIstateA0 = midiCstateA0;
      
    }
    else {
      
     MidiUSB.flush();
      
      }
      
    }


/////////////////////////////////////////////////////////////////       


void potenziometroA1() {
    
    potCstateA1 = analogRead(A1);

    midiCstateA1 = map(potCstateA1, 1023, 0, 0, 127);

    if (midiIstateA1 != midiCstateA1) {

      controlChange(0, 9, midiCstateA1);

      delay(10);

      midiIstateA1 = midiCstateA1;
      
    }
    else {
      
     MidiUSB.flush();
      
      }
    }
    
/////////////////////////////////////////////////////////////////       
    
void potenziometroA2() {
    
    potCstateA2 = analogRead(A2);

    midiCstateA2 = map(potCstateA2, 0, 1023, 0, 127);

    if (midiIstateA2 != midiCstateA2) {

      controlChange(0, 14, midiCstateA2);

      delay(10);

      midiIstateA2 = midiCstateA2;
      
    }
    else {
      
     MidiUSB.flush();
      
      }
    }
    
/////////////////////////////////////////////////////////////////    
      
void potenziometroA3() {
    
    potCstateA3 = analogRead(A3);

    midiCstateA3 = map(potCstateA3, 0, 1023, 0, 127);

    if (midiIstateA3 != midiCstateA3) {

      controlChange(0, 15, midiCstateA3);

      delay(10);

      midiIstateA3 = midiCstateA3;
      
    }
    else {
      
     MidiUSB.flush();
      
      }
    }
    
/////////////////////////////////////////////////////////////////   
       
void potenziometroA4() {
    
    potCstateA4 = analogRead(A4);

    midiCstateA4 = map(potCstateA4, 0, 1023, 0, 127);

    if (midiIstateA4 != midiCstateA4) {

      controlChange(0, 20, midiCstateA4);

      delay(10);

      midiIstateA4 = midiCstateA4;
      
    }
    else {
      
     MidiUSB.flush();
      
      }
    }
    
/////////////////////////////////////////////////////////////////  
     
void potenziometroA5() {
    
    potCstateA5 = analogRead(A5);

    midiCstateA5 = map(potCstateA5, 0, 1023, 0, 127);

    if (midiIstateA5 != midiCstateA5) {

      controlChange(0, 21, midiCstateA5);

      delay(10);

      midiIstateA5 = midiCstateA5;
      
    }
    else {
      
     MidiUSB.flush();
      
      }
    }
    
///////////////////////////////////////////////////////////////// 
 */  
void potenziometroA6() {

    Serial.println(midiCstateA6);

    Serial.println(potCstateA6);
    
int out[] = {127, 64, 32, 16, 8, 4, 2, 0};
int in[]  = {0, 35, 162, 529, 1023};
    
    potCstateA6 = analogRead(A6);

   midiCstateA6 = multiMap(potCstateA6, in, out, 14);

    if (midiIstateA1 != midiCstateA6) {

      controlChange(0, 22, midiCstateA6);

      delay(10);

      //midiIstateA6 = midiCstateA6;
      
    }
    else {
      
     MidiUSB.flush();
      
      }
    }          
///////////////////////////////////////////////////////////////// 
/*   
void potenziometroA7() {
    
    potCstateA7 = analogRead(A7);

    midiCstateA7 = map(potCstateA7, 0, 1023, 0, 127);

    if (midiIstateA7 != midiCstateA7) {

      controlChange(0, 23, midiCstateA7);

      delay(10);

      midiIstateA7 = midiCstateA7;
      
    }
    else {
      
     MidiUSB.flush();
      
      }
}
///////////////////////////////////////////////////////////////// 
   
void potenziometroA8() {
    
    potCstateA8 = analogRead(A8);

    midiCstateA8 = map(potCstateA8, 0, 1023, 0, 127);

    if (midiIstateA8 != midiCstateA8) {

      controlChange(0, 24, midiCstateA8);

      delay(10);

      midiIstateA8 = midiCstateA8;
      
    }
    else {
      
     MidiUSB.flush();
      
      }
    }
///////////////////////////////////////////////////////////////// 
   
void potenziometroA9() {
    
    potCstateA9 = analogRead(A9);

    midiCstateA9 = map(potCstateA9, 0, 1023, 0, 127);

    if (midiIstateA9 != midiCstateA9) {

      controlChange(0, 25, midiCstateA9);

      delay(10);

      midiIstateA9 = midiCstateA9;
      
    }
    else {
      
     MidiUSB.flush();
      
      }        
}
///////////////////////////////////////////////////////////////// 
*/ 
