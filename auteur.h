#include<iostream>
#include<string>
#include"date.h"
#ifndef AUTEUR_H
#define AUTEUR_H
class Auteur {
public:
	Auteur(std::string idn, std::string nom, std::string prenom, Date born );
	Auteur();
	std::string getIdn() const;

	std::string getNom() const;
	std::string getPrenom() const;
	Date getBorn()const;
	
	

private:
	std::string _idn;
	std::string _nom;
	std::string _prenom;
	Date _born; 
	
	

};
void display(Auteur& auteur);
#endif // !AUTEUR_H
