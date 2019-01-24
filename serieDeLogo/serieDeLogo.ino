#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2) ;
int i = 0 ;
byte coeur[8] = {
 0b00000,
 0b01010,
 0b11111,
 0b11111,
 0b11111,
 0b01110,
 0b00100,
 0b00000
};
byte smiley[8] = {
 0b00000,
 0b00000,
 0b01010,
 0b00000,
 0b00000,
 0b10001,
 0b01110,
 0b00000
};
void setup() {
 lcd.begin(16, 2);
 lcd.createChar(1, coeur); // logo coeur
 lcd.createChar(2, smiley); // logo smiley
 lcd.clear() ;
}
void loop() {
  
  
  
 for(i=0 ; i<15 ; i=i+2) {
 lcd.setCursor(i, 0);
 lcd.write(1);
 delay(500);
 lcd.setCursor(i+1, 1);
 lcd.write(2);
 delay(500);
  
 }
 
 lcd.clear() ;
 delay(1000) ;
 
 
 
}




