#ifndef AUTEUR_H
#define AUTEUR_H

#include <string>

class Auteur
{
public:
    // constructeur
    Auteur(std::string nomAuteur, std::string prenomAuteur, std::string dateNaissanceAuteur);

private:
    std::string _nomAuteur;
    std::string _prenomAuteur;
    std::string _dateNaissanceAuteur;

};

#endif // AUTEUR_H
