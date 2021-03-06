#ifndef AUTEUR_H
#define AUTEUR_H

#include <string>
#include "Date.h"

class Auteur
{
public:
    // constructeur
    Auteur(std::string nomAuteur, std::string prenomAuteur, Date dateAuteur, std::string idAuteur);
    Auteur();

    // getters
    std::string getNomAuteur() const;
    std::string getPrenomAuteur() const;
    std::string getDateNaissanceAuteur() const;
    std::string getIdAuteur() const;
    Date getDateAuteur() const;

    void afficherAuteur() const;

private:
    std::string _nomAuteur;
    std::string _prenomAuteur;
    std::string _idAuteur;
    Date _dateAuteur;
};
// surcharge opérateur
std::ostream& operator<<(std::ostream& os, Auteur auteur);

#endif // AUTEUR_H
