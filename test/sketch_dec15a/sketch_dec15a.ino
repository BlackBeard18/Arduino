/*

*/

void setup() {
  for (int n = 2; n <= 12; n++)  // declaration de mes 12 PIN a utiliser, elle parte de la PIN 2 a la PIN 12
  {
    pinMode(n, OUTPUT);
  }
}
  

void loop() {
  for (int n = 2; n <= 12; n++){
    digitalWrite(n, HIGH);  // dire a la LED de s'allumer
    delay(150);  // temps d'eclairage pour chaque LED
    digitalWrite(n, LOW);  // dire a la LED de s'eteindre 
  }
}

