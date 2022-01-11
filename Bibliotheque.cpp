#include "Bibliotheque.h"
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Date.h"
#include <iostream>

// constructeur
Bibliotheque::Bibliotheque()
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
    std::cout << "Liste des livres :" << std::endl << std::endl;
    for(int i = 0; i < _listeLivres.size(); i++)
    {
        _listeLivres[i].afficheLivre();
        std::cout << std::endl;
    }

}

void Bibliotheque::afficherListeLecteur()
{
    std::cout << "Liste des lecteurs :" << std::endl << std::endl;
    for(int i = 0; i < _listeLecteurs.size(); i++)
    {
        _listeLecteurs[i].afficherLecteur();
        std::cout << std::endl;
    }

}

void Bibliotheque::afficherListeEmprunt()
{
    std::cout << "Liste des emprunts :" << std::endl << std::endl;
    for(int i = 0; i < _listeEmprunts.size(); i++)
    {
        _listeEmprunts[i].afficher();
        std::cout << std::endl;
    }
}

void Bibliotheque::emprunt(Livre& livre, Lecteur& lecteur, Date date)
{
    if(livre.getEtat() == true) // si le ivre est emprunté
    {
        std::cout << "Le livre est deja pris" << std::endl;
    }
    else
    {
        std::cout << lecteur.getPrenomLecteur() << " emrpunte le livre : " << livre.getTitre() << std::endl << std::endl;
        livre.setEtat(true);
        Emprunt emprunt(date, livre, lecteur);
        _listeEmprunts.push_back(emprunt);
    }

    //livre.ajouterEmprunt(lecteur.getIdLecteur());
    //livre.afficherEmprunt();
}

void Bibliotheque::rendre(Livre& livre, Lecteur& lecteur, int numEmprunt)
{
    if(livre.getEtat() == 0)    // si le livre est dispo
    {
        std::cout << "le livre est deja dispo" << std::endl;
    }

    else if(_listeEmprunts[numEmprunt - 1].getIDEmprunt() != lecteur.getIdLecteur())    // si l'ID du lecteur est différent de celui qui veut rendre
    {
        std::cout << "mauvais lecteur" << std::endl;
    }

    else
    {
        std::cout << lecteur.getPrenomLecteur() << " rend le livre " << livre.getTitre() << std::endl << std::endl;
        livre.setEtat(false);
    }
}
