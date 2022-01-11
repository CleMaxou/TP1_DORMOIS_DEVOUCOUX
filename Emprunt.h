#ifndef EMPRUNT_H
#define EMPRUNT_H

#include <string>
#include "Date.h"
#include "Livre.h"
#include "Lecteur.h"

class Emprunt
{
public:
    // constructeur
    Emprunt(Date dateEmprunt, Livre livreEmprunte, Lecteur lecteurEmprunt);

    // getters
    std::string getIDEmprunt() const;

    // setters
    void setIsbn(std::string isbn);
    void setId(std::string id);

    // méthodes
    void afficher() const;


private:
    std::string _isbnLivre;
    std::string _idLecteur;
    Date _date;
    Livre _livre;
    Lecteur _lecteur;

};

#endif // EMPRUNT_H
