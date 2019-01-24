#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2);   // precise le type d'éécran utilisé
}

void loop () {
 lcd.setCursor(0,0);
 lcd.print("Salut les D codeurs du lac");
 lcd.setCursor(0,1);
 lcd.print("Ceci est mon teste n1 su écran LCD");
 lcd.autoscroll();
 delay(1000);
 
}
