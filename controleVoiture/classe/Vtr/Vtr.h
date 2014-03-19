#ifndef Vtr_h
#define Vtr_h

#include "Arduino.h"

 //-- MOTEUR A --
#define ENA 5 //Connecté à Arduino pin 5 (sortie pwm)
#define IN1 2 //Connecté à Arduino pin 2
#define IN2 3 //Connecté à Arduino pin 3

//-- MOTEUR B --
#define ENB 6 //Connecté à Arduino pin 6 (Sortie pwm)
#define IN3 4 //Connecté à Arduino pin 4
#define IN4 7 //Connecté à Arduino pin 7

class Vtr
{
  public:
	Vtr();
	void startVoiture();
	void stopVoiture();
	void goAvant(int vitesse);
	void goArriere(int vitesse);
	void pivotDroite();
	void pivotGauche();
  private:
	int pin;
};
#endif