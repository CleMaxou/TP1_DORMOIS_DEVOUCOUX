#include<iostream>
#include"date.h"
#include"livre.h"
#include"lecteur.h"
#ifndef EMPRUNT_H
#define EMPRUNT_H
class Emprunt {
public:
	Emprunt(Date dateemprunt,Livre lecteur  , Lecteur livre );
private:
	Date _dateemprunt;
	Livre _livre;
	Lecteur _lecteur;
	std::string _isbnLivre;
	std::string _idlecteur;

};
#endif // !EMPRUNT_H
