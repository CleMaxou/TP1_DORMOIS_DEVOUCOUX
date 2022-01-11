#ifndef EMPRUNT_H
#define EMPRUNT_H

#include <string>
#include "Date.h"

class Emprunt
{
public:
    // constructeur
    Emprunt(std::string isbn, std::string id, Date date);

    // setters
    void setIsbn(std::string isbn);
    void setId(std::string id);

    // méthodes
    void afficher() const;


private:
    std::string _isbnLivre;
    std::string _idLecteur;
    Date _date;

};

#endif // EMPRUNT_H
