#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <vector>
#include <string>
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"

class Bibliotheque
{
public:
    // constructeur
    Bibliotheque(std::string nom);


    // méthodes
    // ajouts
    void ajouterUnLivre(Livre livre);
    void ajouterUnLecteur(Lecteur lecteur);
    void ajouterEmprunt(Emprunt emprunt);
    // affichage
    void afficherListeLivre();
    void afficherListeLecteur();
    void afficherListeEmprunt();
    // autre
    void emprunt(Livre livre, Lecteur lecteur, Date date);

private:
    std::string _nom;
    std::vector<Livre> _listeLivres;
    std::vector<Lecteur> _listeLecteurs;
    std::vector<Emprunt> _listeEmprunts;

};

#endif // BIBLIOTHEQUE_H
