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
std::string Livre::getIsbn() const
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

std::string Livre::getGenre() const
{
    return _genre;
}

std::string Livre::getLangue() const
{
    return _langue;
}

Date Livre::getDatePubli() const
{
    return _date;
}
// ================================= Setters ========================================
void Livre::setEtat(bool etat)
{
    _emprunte = etat;
}

// =================================== Méthodes =================================
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

void Livre::afficherEmprunt()
{
    std::cout << "liste d'emprunts du livre " << _titre << " : "  << std::endl;
    for(int i = 0; i < _listeEmprunt.size(); i++)
    {
        std::cout << _listeEmprunt[i] << std::endl;
    }
}

void Livre::ajouterEmprunt(std::string emprunt)
{
    _listeEmprunt.push_back(emprunt);
}

std::string toString(Auteur a)
{
    return a.getNomAuteur() + " / " + a.getPrenomAuteur() + " / " + toString(a.getDateAuteur()) + " / " + a.getIdAuteur();
}

std::ostream& operator<<(std::ostream& os, Livre livre)
{
    os << "Infos du livre : " << std::endl << "Titre : " << livre.getTitre() << std::endl << "Auteur : " << toString(livre.getAuteur()) << std::endl << "Langue : " << livre.getLangue() << std::endl << "Genre : " << livre.getGenre() << std::endl << "Date : " << toString(livre.getDatePubli()) << std::endl << "1 emprunte, 0 libre : "<< std::to_string(livre.getEtat()) << std::endl;
    return os;
}
