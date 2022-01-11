#include "Emprunt.h"
#include <string>
#include "Date.h"
#include <iostream>


Emprunt::Emprunt(std::string isbn, std::string id, Date date) : _isbnLivre(isbn), _idLecteur(id), _date(date)
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
