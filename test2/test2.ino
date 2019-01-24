// ce programme allulme les leds une par une
int pin[11]={2,3,4,5,6,7,8,9,10,11,12};
int temp0=150; //tempo pour allumer les leds 
int temp1=150; // tempo pour eteindre

void setup(){
for (int i = 0 ; i<=11 ; i++){ 
pinMode(pin[i], OUTPUT);
}
}

void loop(){
for (int i = 0 ; i<=11 ; i++){ // boucle for pour allumer les leds une par une
digitalWrite(pin[i], HIGH);
delay(temp0);
}
for (int i = 11 ; i>=0 ; i--){ // dire a la LED de s'eteindre
digitalWrite(pin[i], LOW);
delay(temp1);
}
for (int n = 2; n <= 12; n++){
    digitalWrite(n, HIGH);  // dire a la LED de s'allumer
    delay(150);  // temps d'eclairage pour chaque LED
    digitalWrite(n, LOW);  // dire a la LED de s'eteindre 
  }
}
/* pour créé une nouvel boucle faire exemple: 
for (int i = 6 ; i<=11 ; i++){ // boucle for pour allumer les leds une par une
digitalWrite(pin[i], HIGH);
delay(temp0);
}
for (int i = 6 ; i<=0 ; i++){ // boucle for pour allumer les leds une par une
digitalWrite(pin[i], HIGH);
delay(temp0);
}
*/


