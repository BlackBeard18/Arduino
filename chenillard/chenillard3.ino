const int L1 = 2; //broche 2 du micro-contrôleur se nomme maintenant : L1
const int L2 = 3; //broche 3 du micro-contrôleur se nomme maintenant : L2
const int L3 = 4; // ...
const int L4 = 5;
const int L5 = 6;
const int L6 = 7;
const int L7 = 8;
const int L8 = 9;
const int L9 = 10;
const int L10 = 11;
const int L11 = 12;

 
void setup()
{
   pinMode(L1, OUTPUT); //L1 est une broche de sortie
   pinMode(L2, OUTPUT); //L2 est une broche de sortie
   pinMode(L3, OUTPUT); // ...
   pinMode(L4, OUTPUT);
   pinMode(L5, OUTPUT);
   pinMode(L6, OUTPUT);
   pinMode(L7, OUTPUT);
   pinMode(L8, OUTPUT);
   pinMode(L9, OUTPUT);
   pinMode(L10, OUTPUT);
   pinMode(L11, OUTPUT);
}
 
// on change simplement l’intérieur de la boucle pour atteindre notre objectif
 
void loop() //la fonction loop() exécute le code qui suit en le répétant en boucle
{
  //chenillard n°1 allez-retour
  for(int compteur = 0 ; compteur < 2 ; compteur++){//declaration de la boucle en lui precisent le nombre de fois quel doit répéter
   digitalWrite(L1, HIGH);   //allumer L1
   delay(100);             //attendre 100 miliseconde
   digitalWrite(L1, LOW);  //eteindre L1
   digitalWrite(L2, HIGH);  //allumer L2
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L5, LOW);
   digitalWrite(L6, HIGH);   
   delay(100);
   digitalWrite(L6, LOW);
   digitalWrite(L7, HIGH);
   delay(100);          
   digitalWrite(L7, LOW);   
   digitalWrite(L8, HIGH);   
   delay(100);
   digitalWrite(L8, LOW);
   digitalWrite(L9, HIGH);
   delay(100);
   digitalWrite(L9, LOW);
   digitalWrite(L10, HIGH);   
   delay(100);     
   digitalWrite(L10, LOW);   
   digitalWrite(L11, HIGH);
   delay(500);
   digitalWrite(L11, LOW);
   delay(100);
   digitalWrite(L10, HIGH);   
   delay(100);     
   digitalWrite(L10, LOW);
   digitalWrite(L9, HIGH);
   delay(100);
   digitalWrite(L9, LOW);
   digitalWrite(L8, HIGH);   
   delay(100);
   digitalWrite(L8, LOW);
   digitalWrite(L7, HIGH);
   delay(100);          
   digitalWrite(L7, LOW);
   digitalWrite(L6, HIGH);   
   delay(100);
   digitalWrite(L6, LOW);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L5, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L1, HIGH);   
   delay(500);             
   digitalWrite(L1, LOW);
   delay(500);
  }
  
  //chenillard n°2 allez-retour
  for(int compteur = 0 ; compteur < 2 ; compteur++){
   digitalWrite(L1, HIGH);   
   delay(100);             
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L6, HIGH);   
   delay(100);
   digitalWrite(L7, HIGH);
   delay(100);             
   digitalWrite(L8, HIGH);   
   delay(100);
   digitalWrite(L9, HIGH);
   delay(100);
   digitalWrite(L10, HIGH);   
   delay(100);             
   digitalWrite(L11, HIGH);
   delay(500);
   digitalWrite(L11, LOW);
   delay(100);
   digitalWrite(L10, LOW);
   delay(100);
   digitalWrite(L9, LOW);
   delay(100);
   digitalWrite(L8, LOW);
   delay(100);
   digitalWrite(L7, LOW);
   delay(100); 
   digitalWrite(L6, LOW);
   delay(100);
   digitalWrite(L5, LOW);
   delay(100);
   digitalWrite(L4, LOW);
   delay(100);
   digitalWrite(L3, LOW);
   delay(100);
   digitalWrite(L2,LOW);
   delay(100);
   digitalWrite(L1, LOW);
   delay(1000);
  }
  
   //chenillard n°3 allez-retour
   for(int compteur = 0 ; compteur < 2 ; compteur++){
   digitalWrite(L6, HIGH);
   delay(0);
   digitalWrite(L7, HIGH);
   delay(100);
   digitalWrite(L5, HIGH);
   delay(0);
   digitalWrite(L8, HIGH);
   delay(100);
   digitalWrite(L4, HIGH);
   delay(0);
   digitalWrite(L9, HIGH);
   delay(100);
   digitalWrite(L3, HIGH);
   delay(0);
   digitalWrite(L10, HIGH);
   delay(100);
   digitalWrite(L2, HIGH);
   delay(0);
   digitalWrite(L11, HIGH);
   delay(100);
   digitalWrite(L1, HIGH);
   delay(1000);
   digitalWrite(L1, LOW);
   delay(100);
   digitalWrite(L11, LOW);
   delay(0);
   digitalWrite(L2, LOW);
   delay(100);
   digitalWrite(L10, LOW);
   delay(0);
   digitalWrite(L3, LOW);
   delay(100);
   digitalWrite(L9, LOW);
   delay(0);
   digitalWrite(L4, LOW);
   delay(100);
   digitalWrite(L8, LOW);
   delay(0);
   digitalWrite(L5, LOW);
   delay(100);
   digitalWrite(L7, LOW);
   delay(0);
   digitalWrite(L6, LOW);
   delay(500);
   }
   
   //chenillard n°4 allez-retour
   for(int compteur = 0 ; compteur < 4 ; compteur++){
   digitalWrite(L1, HIGH);   
   delay(100);             
   digitalWrite(L2, HIGH);
   delay(100);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L1, LOW);
   delay(0);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L2, LOW);
   delay(0);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   delay(0);
   digitalWrite(L6, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   delay(0);
   digitalWrite(L7, HIGH);
   delay(100);
   digitalWrite(L5, LOW);
   delay(0);
   digitalWrite(L8, HIGH);
   delay(100);
   digitalWrite(L6, LOW);
   delay(0);
   digitalWrite(L9, HIGH);
   delay(100);
   digitalWrite(L7, LOW);
   delay(0);
   digitalWrite(L10, HIGH);
   delay(100);
   digitalWrite(L8, LOW);
   delay(0);
   digitalWrite(L11, HIGH);
   delay(100);
   digitalWrite(L9, LOW);
   delay(100);
   digitalWrite(L10, LOW);
   delay(100);
   digitalWrite(L11, LOW);
  }
  
  //chenillard n°5 allez-retour
  for(int compteur = 0 ; compteur < 2 ; compteur++){//declaration de la boucle en lui precisent le nombre de fois quel doit répéter
   digitalWrite(L1, HIGH);   
   delay(100);             
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L5, LOW);
   digitalWrite(L6, HIGH);   
   delay(100);
   digitalWrite(L6, LOW);
   digitalWrite(L7, HIGH);
   delay(100);          
   digitalWrite(L7, LOW);   
   digitalWrite(L8, HIGH);   
   delay(100);
   digitalWrite(L8, LOW);
   digitalWrite(L9, HIGH);
   delay(100);
   digitalWrite(L9, LOW);
   digitalWrite(L10, HIGH);   
   delay(100);     
   digitalWrite(L10, LOW);   
   digitalWrite(L11, HIGH);
   delay(100);
   //tour 2
    digitalWrite(L1, HIGH);   
   delay(100);            
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L5, LOW);
   digitalWrite(L6, HIGH);   
   delay(100);
   digitalWrite(L6, LOW);
   digitalWrite(L7, HIGH);
   delay(100);          
   digitalWrite(L7, LOW);   
   digitalWrite(L8, HIGH);   
   delay(100);
   digitalWrite(L8, LOW);
   digitalWrite(L9, HIGH);
   delay(100);
   digitalWrite(L9, LOW);
   digitalWrite(L10, HIGH);
   delay(100);
   //tour 3
  digitalWrite(L1, HIGH);   
   delay(100);             
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L5, LOW);
   digitalWrite(L6, HIGH);   
   delay(100);
   digitalWrite(L6, LOW);
   digitalWrite(L7, HIGH);
   delay(100);          
   digitalWrite(L7, LOW);   
   digitalWrite(L8, HIGH);   
   delay(100);
   digitalWrite(L8, LOW);
   digitalWrite(L9, HIGH);
   delay(100);
   //tour 4
   digitalWrite(L1, HIGH);   
   delay(100);             
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L5, LOW);
   digitalWrite(L6, HIGH);   
   delay(100);
   digitalWrite(L6, LOW);
   digitalWrite(L7, HIGH);
   delay(100);          
   digitalWrite(L7, LOW);   
   digitalWrite(L8, HIGH);
   delay(100);
   //tour5
   digitalWrite(L1, HIGH);   
   delay(100);            
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L5, LOW);
   digitalWrite(L6, HIGH);   
   delay(100);
   digitalWrite(L6, LOW);
   digitalWrite(L7, HIGH);
   delay(100);
   //tour 6
   digitalWrite(L1, HIGH);  
   delay(100);            
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   digitalWrite(L5, HIGH);
   delay(100);
   digitalWrite(L5, LOW);
   digitalWrite(L6, HIGH);   
   delay(100);
   //tour 7
   digitalWrite(L1, HIGH);   
   delay(100);             
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   digitalWrite(L4, LOW);
   digitalWrite(L5, HIGH);
   delay(100);
   //tour 8
   digitalWrite(L1, HIGH);   
   delay(100);             
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH);  
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   digitalWrite(L3, LOW);
   digitalWrite(L4, HIGH);
   delay(100);
   //tour 9
   digitalWrite(L1, HIGH);   
   delay(100);             
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH); 
   delay(100);
   digitalWrite(L2, LOW);
   digitalWrite(L3, HIGH);
   delay(100);
   //tour 9
   digitalWrite(L1, HIGH);   //allumer L2
   delay(100);             
   digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH); 
   delay(100);
   //tour 10
   digitalWrite(L1, HIGH);   
   delay(500);   
 }
 
  //chenillard n°6 allez-retour
  for(int compteur = 0 ; compteur < 4 ; compteur++){//declaration de la boucle en lui precisent le nombre de fois quel doit répéter
   digitalWrite(L1, HIGH);   //allumer L1
   delay(0);
   digitalWrite(L11, HIGH);
   delay(100);
   digitalWrite(L2, HIGH);
   delay(0);
   digitalWrite(L10, HIGH);
   delay(100);
   
   digitalWrite(L1, LOW);   //allumer L1
   delay(0);
   digitalWrite(L11, LOW);
   delay(100);
   digitalWrite(L3, HIGH);
   delay(0);
   digitalWrite(L9, HIGH);
   delay(100);
   
   digitalWrite(L2, LOW);   //allumer L2
   delay(0);
   digitalWrite(L10, LOW);
   delay(100);
   digitalWrite(L4, HIGH);
   delay(80);
   digitalWrite(L8, HIGH);
   delay(100);
   
   digitalWrite(L3, LOW);   //allumer L3
   delay(0);
   digitalWrite(L9, LOW);
   delay(100);
   digitalWrite(L5, HIGH);
   delay(0);
   digitalWrite(L7, HIGH);
   delay(100);
   digitalWrite(L8, HIGH);
   delay(100);
   
   digitalWrite(L4, LOW);   //allumer L4
   delay(0);
   digitalWrite(L8, LOW);
   delay(100);
   digitalWrite(L5, LOW);
   delay(100);
   digitalWrite(L7, LOW);
   delay(100);
   
   
   digitalWrite(L6, HIGH);
   delay(100);   
   digitalWrite(L6, LOW);
   delay(100);
   digitalWrite(L6, HIGH);
   delay(100);   
   digitalWrite(L6, LOW);
   delay(100);
   digitalWrite(L6, HIGH);
   delay(100);   
   digitalWrite(L6, LOW);
   delay(100);
   digitalWrite(L6, HIGH);
   delay(100);   
   digitalWrite(L6, LOW);
   delay(100);
   digitalWrite(L6, HIGH);
   delay(100);   
   digitalWrite(L6, LOW);
   delay(100);
  }
}
