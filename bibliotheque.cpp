
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Date.h"
#include <iostream>
#include"bibliotheque.h"
#include<assert.h>

Bibliotheque::Bibliotheque() {

}
void Bibliotheque::ajouterLivre(Livre& livre) {
	_listeLivres.push_back(livre);
}
void Bibliotheque::ajouterUnLecteur(Lecteur& lecteur)
{
    _listeLecteurs.push_back(lecteur);
}

void Bibliotheque::ajouterEmprunt(Emprunt& emprunt)
{
    _listeEmprunts.push_back(emprunt);
}
void Bibliotheque::afficherListeLivre()
{
    std::cout << "=================================" << std::endl;
    for (int i = 0; i < _listeLivres.size(); i++)
    {
        _listeLivres[i].afficheLivre();
        std::cout << "=================================" << std::endl;
    }

}
void Bibliotheque::afficherListeLecteur()
{
    std::cout << "=================================" << std::endl;
    for (int i = 0; i < _listeLecteurs.size(); i++)
    {
        _listeLecteurs[i].afficherLecteur();
    }

}

void Bibliotheque::afficherListeEmprunt()
{
    std::cout << "==================================" << std::endl;
    for (int i = 0; i < _listeEmprunts.size(); i++)
    {
        _listeEmprunts[i].afficher();
    }
}

void Bibliotheque::emprunt(Livre& livre, Lecteur& lecteur, Date date)
{
    if (livre.getEtat() == true) // si le ivre est emprunté
    {
        std::cout << "Le livre est deja pris" << std::endl;
    }
    else
    {
        std::cout << lecteur.getPrenoml() << " emrpunte le livre : " << livre.getTitre() << std::endl;
        livre.setEtat(true);
        std::cout << "valeur de emprunte du livre " << livre.getTitre() << " : " << livre.getEtat() << std::endl;
        Emprunt emprunt(date, livre, lecteur);
        _listeEmprunts.push_back(emprunt);
    }    
}
void Bibliotheque::rendre(Livre& livre, Lecteur& lecteur, int numEmprunt)
{
    if (livre.getEtat() == 0)    // si le livre est dispo
    {
        std::cout << "le livre est deja dispo" << std::endl;
    }

    else if (_listeEmprunts[numEmprunt - 1].getIDEmprunt() != lecteur.getIdu())    // si l'ID du lecteur est différent de celui qui veut rendre
    {
        std::cout << "mauvais lecteur" << std::endl;
    }

    else
    {
        std::cout << lecteur.getNoml() << " rend le livre " << livre.getTitre() << std::endl << std::endl;
        livre.setEtat(false);
    }
}

void Bibliotheque::chercherLivresAuteur(Auteur& auteur) {
    int c = 0;
    for (int i = 0; i < _listeLivres.size(); i++) {
        if (_listeLivres[i].getAuteur().getIdn() == auteur.getIdn()) {
            std::cout << _listeLivres[i].getTitre() << " "<<std::endl;
            c++;
        }
    }
    if (c == 0) {
        std::cout << "Il n' y a pas de livre à cet auteur avec ce nom";
    }

}
void Bibliotheque::calculLivreemprunter() {
    float nbrLivre = 0.0;
    float nbrLivreEmprunter = 0.0;
    for (int i = 0; i < _listeLivres.size(); i++) {
        nbrLivre++;
        for (int j = 0; j < _listeEmprunts.size(); j++) {

            if (_listeLivres[i].getIsbn() == _listeEmprunts[j].getIsbnemprunt()) {
                nbrLivreEmprunter++;
            }
        }
    }
    
    std::cout << "Le pourcentage de livre emprunter est : " << (nbrLivreEmprunter / nbrLivre) *100 << " % " << std::endl;
   
}
std::ostream& operator<<(std::ostream& os, const Bibliotheque& liste) {
    for (auto element : liste._listeLivres) {
        os << element;
    }
  
    return os;
}