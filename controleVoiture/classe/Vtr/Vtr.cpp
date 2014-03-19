#include "Vtr.h"
 
Vtr::Vtr()
{
	//Configuration des broches en sortie
	pinMode(ENA,OUTPUT);
	pinMode(ENB,OUTPUT);
	pinMode(IN1,OUTPUT);
	pinMode(IN2,OUTPUT);
	pinMode(IN3,OUTPUT);
	pinMode(IN4,OUTPUT);
}

void Vtr::startVoiture() //active les ponts moteurs
{
	digitalWrite(ENA,HIGH);
	digitalWrite(ENB,HIGH);
}

void Vtr::stopVoiture() //desactive les ponts moteurs
{
	digitalWrite(ENA,LOW);
	digitalWrite(ENB,LOW);
}

void Vtr::goAvant(int vitesse=0) //rouler vers l'avant
{
	//pont moteur A
	digitalWrite(IN1,LOW);
	digitalWrite(IN2,HIGH);

	//pont moteur B
	digitalWrite(IN3,HIGH);
	digitalWrite(IN4,LOW);

	//vitesse des moteurs
	analogWrite(ENA,vitesse);
	analogWrite(ENB,vitesse);
}

void Vtr::goArriere(int vitesse=0) //rouler vers l'avant
{
	//pont moteur A
	digitalWrite(IN1,HIGH);
	digitalWrite(IN2,LOW);

	//pont moteur B
	digitalWrite(IN3,LOW);
	digitalWrite(IN4,HIGH);

	//vitesse des moteurs
	analogWrite(ENA,vitesse);
	analogWrite(ENB,vitesse);
}

void Vtr::pivotDroite() //rotation sur la droite
{
	goAvant();

	analogWrite(ENA,255);
	analogWrite(ENB,64);
}

void Vtr::pivotGauche() //rotation sur la gauche
{
	goAvant();

	analogWrite(ENA,64);
	analogWrite(ENB,255);
}