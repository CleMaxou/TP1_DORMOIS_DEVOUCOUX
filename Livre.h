#ifndef LIVRE_H
#define LIVRE_H

#include "Auteur.h"
#include "Date.h"
#include <string>


class Livre
{
public:
    // constructeur
    Livre(std::string titre, std::string langue, std::string genre, std::string isbn, std::string nomAuteur, std::string prenomAuteur, std::string dateNaissanceAuteur);



private:
    //
    std::string _titre;
    std::string _langue;
    std::string _genre;
    std::string _isbn;

    Auteur _auteurDuLivre;

};

#endif
