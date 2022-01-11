#include<iostream>
#include"date.h"
#include"livre.h"
#include"lecteur.h"
#ifndef EMPRUNT_H
#define EMPRUNT_H
class Emprunt {
public:
	Emprunt();
private:
	Date _dateemprunt;
	Livre _isbn;
	Lecteur _idlecteur;

};
#endif // !EMPRUNT_H
