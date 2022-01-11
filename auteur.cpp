#include"auteur.h"
#include"date.h"

Auteur::Auteur(std::string idn, std::string nom, std::string prenom, Date born) : _idn(idn), _nom(nom), _prenom(prenom), _born(born) {
	
}
Auteur::Auteur() {

}

std::string Auteur::getIdn() const {
    return _idn;
}
std::string Auteur::getNom() const {
    return _nom;
}
std::string Auteur::getPrenom() const {
    return _prenom;
}
Date Auteur::getBorn() const {
    return _born;
}

void display(Auteur& auteur) {
    std::cout << auteur.getIdn() << "/" << auteur.getNom() << "/" << auteur.getPrenom() << "/" << toString(auteur.getBorn()) << '\n';

}