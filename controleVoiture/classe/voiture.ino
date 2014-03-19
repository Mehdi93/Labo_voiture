#include <Vtr.h>

void setup() {
  
  Vtr a;
  //Configuration des broches en sortie
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  
  a.startVoiture();
  
  a.pivotGauche();
}

void loop() {
  
}
