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
    Livre();

    // getters
    std::string getIsbn();
    Auteur getAuteur() const;
    bool getEtat() const;
    std::string getTitre() const;

    // setter
    void setEtat(bool etat);


    // méthodes
    void afficheLivre();
    void ajouterEmprunt(std::string emprunt);
    void afficherEmprunt();



private:
    //
    Auteur _auteurDuLivre;  // auteur du livre via une classe
    std::string _langue;
    std::string _genre;
    std::string _titre;
    Date _date;     // date de publication via classe
    std::string _isbn;
    std::vector<std::string> _listeEmprunt;
    bool _emprunte;




};

#endif
