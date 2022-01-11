#include "Bibliotheque.h"
#include "Livre.h"
#include "Lecteur.h"
#include <iostream>

// constructeur
Bibliotheque::Bibliotheque(std::string nom) : _nom(nom)
{

}

// méthodes
void Bibliotheque::ajouterUnLivre(Livre livre)
{
    _listeLivres.push_back(livre);
}

void Bibliotheque::ajouterUnLecteur(Lecteur lecteur)
{
    _listeLecteurs.push_back(lecteur);
}

void Bibliotheque::afficherListeLivre()
{
    std::cout << "=================================" << std::endl;
    for(int i = 0; i < _listeLivres.size(); i++)
    {
        _listeLivres[i].afficheLivre();
        std::cout << "=================================" << std::endl;
    }

}

void Bibliotheque::afficherListeLecteur()
{
    std::cout << "=================================" << std::endl;
    for(int i = 0; i < _listeLecteurs.size(); i++)
    {
        _listeLecteurs[i].afficherLecteur();
    }

}

void Bibliotheque::emprunt(Livre livre, Lecteur lecteur)
{
    livre.setEtat(true);
    //livre.ajouterEmprunt(lecteur.getIdLecteur());
    //livre.afficherEmprunt();
}
