#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <vector>
#include <string>
#include "Livre.h"
#include "Lecteur.h"

class Bibliotheque
{
public:
    // constructeur
    Bibliotheque(std::string nom);


    // méthodes
    void ajouterUnLivre(Livre livre);
    void ajouterUnLecteur(Lecteur lecteur);
    void afficherListeLivre();
    void afficherListeLecteur();
    void emprunt(Livre livre, Lecteur lecteur);

private:
    std::string _nom;
    std::vector<Livre> _listeLivres;
    std::vector<Lecteur> _listeLecteurs;

};

#endif // BIBLIOTHEQUE_H
