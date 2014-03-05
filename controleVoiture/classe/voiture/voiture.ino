#include <Gova.h>

void setup() {
  
  Gova v; //création d'un objet Gova pour controller la voiture
  
  v.startVoiture(); //on démarre la voiture
  
  v.pivotGauche(); //on pivote sur la gauche
  
  v.stopVoiture(); //on arrete la voiture
}

void loop() {

}
