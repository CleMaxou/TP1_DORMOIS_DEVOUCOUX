#include "Emprunt.h"
#include <string>
#include "Date.h"
#include <iostream>
#include "Livre.h"
#include "Lecteur.h"


Emprunt::Emprunt(Date dateEmprunt, Livre livre, Lecteur lecteur) : _date(dateEmprunt), _isbnLivre(livre.getIsbn()), _idLecteur(lecteur.getIdLecteur())
{

}

// ===================================== Setters ===============================================
void Emprunt::setIsbn(std::string isbn)
{
    _isbnLivre = isbn;
}

void Emprunt::setId(std::string id)
{
    _idLecteur = id;
}

void Emprunt::afficher() const
{
    std::cout << "ISBN : " << _isbnLivre << std::endl;
    std::cout << "ID : " << _idLecteur << std::endl;
    std::cout << "Date : " << _date.getDay() << " / " << _date.getMonth() << " / " << _date.getYear() << std::endl;
}
