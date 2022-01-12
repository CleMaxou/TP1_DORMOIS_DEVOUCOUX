#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <vector>
#include <string>
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Auteur.h"

class Bibliotheque
{
public:
    // constructeur
    Bibliotheque();
    // ajouts
    void ajouterUnLivre(Livre& livre);
    void ajouterUnLecteur(Lecteur& lecteur);
    void ajouterEmprunt(Emprunt& emprunt);
    void ajouterAuteur(Auteur auteur);
    // affichage
    void afficherListeLivre();
    void afficherListeLecteur();
    void afficherListeEmprunt();
    void afficherListeAuteurs();
    // autre
    void emprunt(Livre &livre, Lecteur &lecteur, Date date);
    void rendre(Livre&livre, Lecteur&lecteur, int numEmprunt);
    void chercherLivresAuteur(Auteur& auteur);
    void calculLivreemprunter();

private:
    std::vector<Livre> _listeLivres;
    std::vector<Lecteur> _listeLecteurs;
    std::vector<Emprunt> _listeEmprunts;
    std::vector<Auteur> _listeAuteurs;
};

#endif // BIBLIOTHEQUE_H
