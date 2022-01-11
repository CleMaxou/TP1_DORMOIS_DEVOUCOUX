#include "Bibliotheque.h"
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Date.h"
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

void Bibliotheque::ajouterEmprunt(Emprunt emprunt)
{
    _listeEmprunts.push_back(emprunt);
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

void Bibliotheque::afficherListeEmprunt()
{
    std::cout << "==================================" << std::endl;
    for(int i = 0; i < _listeEmprunts.size(); i++)
    {
        _listeEmprunts[i].afficher();
    }
}

void Bibliotheque::emprunt(Livre livre, Lecteur lecteur, Date date)
{
    livre.setEtat(true);
    Emprunt a(livre.getIsbn(), lecteur.getIdLecteur(), date);
    _listeEmprunts.push_back(a);
    //livre.ajouterEmprunt(lecteur.getIdLecteur());
    //livre.afficherEmprunt();
}
