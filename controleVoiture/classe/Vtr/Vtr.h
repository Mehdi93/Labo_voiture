#ifndef Vtr_h
#define Vtr_h

#include "Arduino.h"

 //-- MOTEUR A --
#define ENA 5 //Connect� � Arduino pin 5 (sortie pwm)
#define IN1 2 //Connect� � Arduino pin 2
#define IN2 3 //Connect� � Arduino pin 3

//-- MOTEUR B --
#define ENB 6 //Connect� � Arduino pin 6 (Sortie pwm)
#define IN3 4 //Connect� � Arduino pin 4
#define IN4 7 //Connect� � Arduino pin 7

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