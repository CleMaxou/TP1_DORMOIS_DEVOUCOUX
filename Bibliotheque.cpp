#include "Bibliotheque.h"
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Date.h"
#include <iostream>
//#include <vector>

// constructeur
Bibliotheque::Bibliotheque()
{

}

// ajout
void Bibliotheque::ajouterUnLivre(Livre &livre)
{
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

void Bibliotheque::ajouterAuteur(Auteur auteur)
{
    _listeAuteurs.push_back(auteur);
}

// affichage
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

void Bibliotheque::afficherListeAuteurs()
{
    std::cout << "Liste des auteurs :" << std::endl << std::endl;
    for(int i = 0; i < _listeAuteurs.size(); i++)
    {
        _listeAuteurs[i].afficherAuteur();
        std::cout << std::endl;
    }
}
// emprunt de livres
void Bibliotheque::emprunt(Livre& livre, Lecteur& lecteur, Date date)
{
    for(int i = 0; i < _listeLivres.size(); i++)    // pour chaque livre dans la bibliotheque
    {
        if(livre.getIsbn() == _listeLivres[i].getIsbn())    // si l'isbn du livre cherché = isbn du livre de la liste
        {
            if(livre.getEtat() == true) // si le livre est emprunté
            {
                std::cout << "Le livre est deja pris" << std::endl;
            }
            else
            {
                std::cout << lecteur.getPrenomLecteur() << " emrpunte le livre : " << livre.getTitre() << std::endl << std::endl;
                livre.setEtat(true);
                Emprunt emprunt(date, livre, lecteur);
                _listeEmprunts.push_back(emprunt);
                for(int i = 0; i < _listeLivres.size(); i++)    // pour chaque livre de la liste de livres
                {
                    if(_listeLivres[i].getIsbn() == livre.getIsbn())    // si l'isbn du livre cherché = isbn dans la liste
                    {
                        _listeLivres[i].setEtat(true);
                    }
                }
                livre.ajouterEmprunt(lecteur.getIdLecteur());
                livre.afficherEmprunt();
                lecteur.ajouterIsbn(livre.getIsbn());
                lecteur.afficherIsbn();
            }
        }
    }
}
// rendre un livre
void Bibliotheque::rendre(Livre& livre, Lecteur& lecteur, int numEmprunt)
{
    if(livre.getEtat() == 0)    // si livre libre
    {
        std::cout << "livre deja libre" << std::endl;
    }
    else if(_listeEmprunts[numEmprunt - 1].getIDEmprunt() != lecteur.getIdLecteur())    // si ID différent
    {
        std::cout << "mauvais lecteur" << std::endl;
    }
    else if(_listeEmprunts[numEmprunt - 1].getISBNEmprunt() != livre.getIsbn()) // si ISBN différent
    {
        std::cout << "mauvais livre" << std::endl;
    }
    else    // tout est bon
    {
        std::cout << lecteur.getPrenomLecteur() << " rend le livre " << livre.getTitre() << std::endl << std::endl;
        livre.setEtat(false);
        for(int i = 0; i < _listeLivres.size(); i++)
        {
            if(_listeLivres[i].getIsbn() == livre.getIsbn())
            {
                _listeLivres[i].setEtat(false);
            }
        }


    }
}
// cherche les livres d'un auteur dans la bibli
void Bibliotheque::chercherLivresAuteur(Auteur &auteur)
{
    int c = 0;
    for (int i = 0; i < _listeLivres.size(); i++)
    {
        if (_listeLivres[i].getAuteur().getIdAuteur() == auteur.getIdAuteur())
        {
            std::cout << i + 1 << " : " << _listeLivres[i].getTitre() << " "<<std::endl;
            c++;
        }
    }
    if (c == 0)
    {
        std::cout << "Il n' y a pas de livre de cet auteur dans la bibliotheque" << std::endl;
    }
}
// calcule la moyenne des livres empruntés
void Bibliotheque::calculLivreemprunter()
{
    float nbrLivre = 0.0;
    float nbrLivreEmprunter = 0.0;
    for (int i = 0; i < _listeLivres.size(); i++)
    {
        nbrLivre++;
        for (int j = 0; j < _listeEmprunts.size(); j++)
        {

            if (_listeLivres[i].getIsbn() == _listeEmprunts[j].getISBNEmprunt())
            {
                nbrLivreEmprunter++;
            }
        }
    }
    std::cout << "Le pourcentage de livre emprunte est : " << (nbrLivreEmprunter / nbrLivre) *100 << " % " << std::endl;
}
// affiche les livres que le lecteur a emprunté
void Bibliotheque::afficheLivresEmprunteLecteur(Lecteur& lecteur)
{
    std::cout << "==================" << std::endl;
    int c = 0;
    std::string ISBN;
    for(int i = 0; i < lecteur.getListeISBN().size(); i++)
    {
        //std::cout << lecteur.getListeISBN()[i] << std::endl;
        ISBN = lecteur.getListeISBN()[i];
        for(int j = 0; j < _listeLivres.size(); j++)
        {
            if(ISBN == _listeLivres[j].getIsbn())
            {
                std::cout << _listeLivres[j].getTitre() << std::endl;
            }
        }
    }
}

