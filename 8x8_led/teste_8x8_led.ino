#include "LedControl.h"


LedControl lc=LedControl(12,11,10,1);

/* we always wait a bit between updates of the display */
unsigned long delaytime=100;

void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,8);
  /* and clear the display */
  lc.clearDisplay(0);
}

/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix. 
 (you need at least 5x7 leds to see the whole chars)
 */
void smiley() {
  byte smile[8]={B00000000,B01100110,B01100110,B00000000,B00000000,B01000010,B00111100,B00000000};

  lc.setRow(0,0,smile[0]);
  lc.setRow(0,1,smile[1]);
  lc.setRow(0,2,smile[2]);
  lc.setRow(0,3,smile[3]);
  lc.setRow(0,4,smile[4]);
  lc.setRow(0,5,smile[5]);
  lc.setRow(0,6,smile[6]);
  delay(1000);

}

void fondVide() {
  byte fintab[8]={B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};

  lc.setRow(0,0,fintab[0]);
  lc.setRow(0,1,fintab[1]);
  lc.setRow(0,2,fintab[2]);
  lc.setRow(0,3,fintab[3]);
  lc.setRow(0,4,fintab[4]);
  lc.setRow(0,5,fintab[5]);
  lc.setRow(0,6,fintab[6]);
  lc.setRow(0,7,fintab[7]);
  }



void groupe() {

  byte d[8]={B00000000,B00000000,B00111000,B00100100,B00100100,B00111000,B00000000,B00000000};
  byte c[8]={B00000000,B00000000,B00011100,B00100000,B00100000,B00011100,B00000000,B00000000};  
  byte l[8]={B00000000,B00000000,B00100000,B00100000,B00100000,B00111100,B00000000,B00000000};

  lc.setRow(0,2,d[2]);
  lc.setRow(0,3,d[3]);
  lc.setRow(0,4,d[4]);
  lc.setRow(0,5,d[5]);
  delay(1000);
  lc.setRow(0,2,c[2]);
  lc.setRow(0,3,c[3]);
  lc.setRow(0,4,c[4]);
  lc.setRow(0,5,c[5]);
  delay(1000);
  lc.setRow(0,2,l[2]);
  lc.setRow(0,3,l[3]);
  lc.setRow(0,4,l[4]);
  lc.setRow(0,5,l[5]);
  delay(1000);
}  

void smiley2() {
  byte smile2[8]={B11111111,B11011011,B11011011,B11011011,B11111111,B10111101,B11000011,B11111111};  
  byte fintab[8]={B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
  
  lc.setRow(0,0,smile2[0]);
  lc.setRow(0,1,smile2[1]);
  lc.setRow(0,2,smile2[2]);
  lc.setRow(0,3,smile2[3]);
  lc.setRow(0,4,smile2[4]);
  lc.setRow(0,5,smile2[5]);
  lc.setRow(0,6,smile2[6]);
  lc.setRow(0,7,smile2[7]);
  delay(500);
  lc.setRow(0,0,fintab[0]);
  lc.setRow(0,1,fintab[1]);
  lc.setRow(0,2,fintab[2]);
  lc.setRow(0,3,fintab[3]);
  lc.setRow(0,4,fintab[4]);
  lc.setRow(0,5,fintab[5]);
  lc.setRow(0,6,fintab[6]);
  lc.setRow(0,7,fintab[7]);
  delay(500);
  lc.setRow(0,0,smile2[0]);
  lc.setRow(0,1,smile2[1]);
  lc.setRow(0,2,smile2[2]);
  lc.setRow(0,3,smile2[3]);
  lc.setRow(0,4,smile2[4]);
  lc.setRow(0,5,smile2[5]);
  lc.setRow(0,6,smile2[6]);
  lc.setRow(0,7,smile2[7]);
  delay(500);
  lc.setRow(0,0,fintab[0]);
  lc.setRow(0,1,fintab[1]);
  lc.setRow(0,2,fintab[2]);
  lc.setRow(0,3,fintab[3]);
  lc.setRow(0,4,fintab[4]);
  lc.setRow(0,5,fintab[5]);
  lc.setRow(0,6,fintab[6]);
  lc.setRow(0,7,fintab[7]);
  delay(500);
  lc.setRow(0,0,smile2[0]);
  lc.setRow(0,1,smile2[1]);
  lc.setRow(0,2,smile2[2]);
  lc.setRow(0,3,smile2[3]);
  lc.setRow(0,4,smile2[4]);
  lc.setRow(0,5,smile2[5]);
  lc.setRow(0,6,smile2[6]);
  lc.setRow(0,7,smile2[7]);
  delay(500);
  lc.setRow(0,0,fintab[0]);
  lc.setRow(0,1,fintab[1]);
  lc.setRow(0,2,fintab[2]);
  lc.setRow(0,3,fintab[3]);
  lc.setRow(0,4,fintab[4]);
  lc.setRow(0,5,fintab[5]);
  lc.setRow(0,6,fintab[6]);
  lc.setRow(0,7,fintab[7]);
  delay(500);
  lc.setRow(0,0,smile2[0]);
  lc.setRow(0,1,smile2[1]);
  lc.setRow(0,2,smile2[2]);
  lc.setRow(0,3,smile2[3]);
  lc.setRow(0,4,smile2[4]);
  lc.setRow(0,5,smile2[5]);
  lc.setRow(0,6,smile2[6]);
  lc.setRow(0,7,smile2[7]);
  delay(500);
  lc.setRow(0,0,fintab[0]);
  lc.setRow(0,1,fintab[1]);
  lc.setRow(0,2,fintab[2]);
  lc.setRow(0,3,fintab[3]);
  lc.setRow(0,4,fintab[4]);
  lc.setRow(0,5,fintab[5]);
  lc.setRow(0,6,fintab[6]);
  lc.setRow(0,7,fintab[7]);
}

void loop() { 
  smiley();
  fondVide();
  groupe();
  smiley2();
  
}
