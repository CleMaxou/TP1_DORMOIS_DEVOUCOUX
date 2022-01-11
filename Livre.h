#ifndef LIVRE_H
#define LIVRE_H

#include "Auteur.h"
#include "Date.h"
#include "Lecteur.h"
#include <string>
#include <vector>


class Livre
{
public:
    // constructeur
    Livre(std::string titre, std::string langue, std::string genre, std::string isbn,  Auteur auteurDuLivre, Date dateparution);

    // getters
    std::string getIsbn();

    // setter
    void setEtat(bool etat);


    // méthodes
    void afficheLivre();
    void ajouterEmprunt(std::string emprunt);
    void afficherEmprunt();
    void emprunter(Lecteur lecteur);
    void rendre(Lecteur lecteur);



private:
    //
    std::string _titre;
    std::string _langue;
    std::string _genre;
    std::string _isbn;
    bool _emprunte;

    std::vector<std::string> _listeEmprunt;

    Auteur _auteurDuLivre;  // auteur du livre via une classe
    Date _date;     // date de publication via classe

};

#endif
