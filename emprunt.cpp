#include<iostream>
#include"emprunt.h"
#include"livre.h"
Emprunt::Emprunt(Date demprunt, Livre livre, Lecteur lecteur) : _demprunt(demprunt), _isbnLivre(livre.getIsbn()), _idlecteur(lecteur.getIdu()) {

}
std::string Emprunt::getIDEmprunt() const
{
    return _idlecteur;
}
std::string Emprunt::getIsbnemprunt() const {
    return _isbnLivre;
}
void Emprunt::afficher() const
{
    std::cout << "ISBN : " << _isbnLivre << std::endl;
    std::cout << "ID : " << _idlecteur << std::endl;
    std::cout << "Date : " << _demprunt.day() << " / " << _demprunt.month() << " / " << _demprunt.year() << std::endl;
}

