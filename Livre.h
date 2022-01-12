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
    std::string getIsbn() const;
    Auteur getAuteur() const;
    bool getEtat() const;
    std::string getTitre() const;
    std::string getLangue() const;
    std::string getGenre() const;
    Date getDatePubli() const;

    // setter
    void setEtat(bool etat);

    // méthodes
    void afficheLivre();    // affiche toutes les infos du livre
    void ajouterEmprunt(std::string emprunt);   // ajoute un emprunt à la lise d'emprunts
    void afficherEmprunt(); // affiche la liste des id des gens ayant emprunté

private:
    Auteur _auteurDuLivre;  // auteur du livre via une classe
    Date _date;     // date de publication via classe
    std::string _langue;
    std::string _genre;
    std::string _titre;
    std::string _isbn;
    std::vector<std::string> _listeEmprunt;
    bool _emprunte;
};
std::string toString(Auteur a);
// operateur
std::ostream& operator<<(std::ostream& os, Livre livre);

#endif
