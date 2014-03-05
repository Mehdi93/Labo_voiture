//-- MOTEUR A --
#define ENA 5 //Connecté à Arduino pin 5 (sortie pwm)
#define IN1 2 //Connecté à Arduino pin 2
#define IN2 3 //Connecté à Arduino pin 3

//-- MOTEUR B --
#define ENB 6 //Connecté à Arduino pin 6 (Sortie pwm)
#define IN3 4 //Connecté à Arduino pin 4
#define IN4 7 //Connecté à Arduino pin 7

void setup() {
  
  //Configuration des broches en sortie
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  
  startVoiture();
  
  pivotGauche();
}

void loop() {

}

void startVoiture() //active les ponts moteurs
{
  //desactivation des ponts
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
}

void stopVoiture() //desactive les ponts moteurs
{
  //desactivation des ponts
  digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);
}

void goAvant(int vitesse=0) //rouler vers l'avant
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

void goArriere(int vitesse) //rouler vers l'avant
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

void pivotDroite() //rotation sur la droite
{
  goAvant();
  
 analogWrite(ENA,255);
 analogWrite(ENB,64);
 delay(1000);
 
 goAvant(); //met la vitesse à 0
}

void pivotGauche() //rotation sur la gauche
{
  goAvant();
  
 analogWrite(ENA,64);
 analogWrite(ENB,255);
 delay(1000);
 
 goAvant(); //met la vitesse à 0
}
