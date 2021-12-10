#ifndef AUTEUR_H
#define AUTEUR_H

#include <string>

class Auteur
{
public:
    // constructeur
    Auteur(std::string nomAuteur, std::string prenomAuteur, std::string dateNaissanceAuteur, std::string idAuteur);

    // getters
    std::string getNomAuteur();
    std::string getPrenomAuteur();
    std::string getDateNaissanceAuteur();
    std::string getIdAuteur();

private:
    std::string _nomAuteur;
    std::string _prenomAuteur;
    std::string _dateNaissanceAuteur;
    std::string _idAuteur;

};

#endif // AUTEUR_H
