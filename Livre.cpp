#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Auteur.h"

#include <iostream>



// constructeur par paramètres
Livre::Livre(std::string titre, std::string langue, std::string genre, std::string isbn, Auteur auteurDuLivre, Date dateparution) : _titre(titre), _langue(langue), _genre(genre), _isbn(isbn),  _auteurDuLivre(auteurDuLivre), _date(dateparution)
{
    _emprunte = false;
}

// contructeur par défaut
Livre::Livre()
{

}

// =================================== Getters ======================================
std::string Livre::getIsbn()
{
    return _isbn;
}

Auteur Livre::getAuteur() const
{
    return _auteurDuLivre;
}

bool Livre::getEtat() const
{
    return _emprunte;
}

std::string Livre::getTitre() const
{
    return _titre;
}
// ================================= Setters ========================================
void Livre::setEtat(bool etat)
{
    _emprunte = etat;
}


// ================================ Méthodes ==============================
void Livre::afficheLivre()
{
    std::cout << "Titre : " << _titre << std::endl;
    std::cout << "Langue : " << _langue << std::endl;
    std::cout << "Genre : " << _genre << std::endl;
    std::cout << "ISBN : " << _isbn << std::endl;

    if(_emprunte == true)   // true = emprunté
    {
        std::cout << "Le livre est emprunte" << std::endl;
    }
    else
    {
        std::cout << "Le livre est libre" << std::endl;
    }
    std::cout << "* A propos de l'auteur : " << std:: endl;
    _auteurDuLivre.afficherAuteur();
    std::cout << "Date de publication : " << std:: endl;
    std::cout << toString(_date) << std::endl;
}


// afficher la liste des id des gens ayant empruntés des livres
void Livre::afficherEmprunt()
{
    int n = _listeEmprunt.size();
    //std::cout << &_listeEmprunt << std::endl;

    std::cout << "liste d'emprunts :" << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cout << _listeEmprunt[i] << std::endl;
    }

}

// méthode pour emprunter un livre
void Livre::emprunter(Lecteur lecteur)
{
    if(_emprunte == true)
    {
        std::cout << "Le livre est deja emprunte" << std::endl;
    }
    else
    {
        _emprunte = true;
        _listeEmprunt.push_back(lecteur.getIdLecteur());

        //std::cout << "isbn qui va etre enregistre : " << _isbn << std::endl;

        Lecteur *pointLecteur = &lecteur;


        pointLecteur->ajouterIsbn(_isbn);
    }
}

// méthode pour rendre un livre
void Livre::rendre(Lecteur lecteur)
{
    if(_emprunte == true)
    {
        _emprunte = false;
    }
    else
    {
        std::cout << "Le livre est déjà libre" << std::endl;
    }
}
