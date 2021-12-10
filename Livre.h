#ifndef LIVRE_H
#define LIVRE_H

#include "Auteur.h"
#include "Date.h"
#include <string>


class Livre
{
public:
    // constructeur
    Livre(std::string titre, std::string langue, std::string genre, std::string isbn,  std::string nomAuteur, std::string prenomAuteur, std::string dateNaissanceAuteur, std::string idAuteur, int mois, int jour, int annee);

    // getters



    // méthodes
    void afficheLivre();



private:
    //
    std::string _titre;
    std::string _langue;
    std::string _genre;
    std::string _isbn;
    bool _emprunte;

    Auteur _auteurDuLivre;  // auteur du livre via une classe
    Date _date;     // date de publication via classe

};

#endif
