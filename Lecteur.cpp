#include <iostream>
#include "Lecteur.h"
#include "Livre.h"



// constructeur par paramètres
Lecteur::Lecteur(std::string idLecteur, std::string nomLecteur, std::string prenomLecteur ) : _idLecteur(idLecteur), _nomLecteur(nomLecteur), _prenomLecteur(prenomLecteur)
{

}

// destructeur
Lecteur::~Lecteur()
{
}

// ============================= Setters =================================
void Lecteur::setIsbn(std::string isbn)
{
    _listeIsbn.push_back(isbn);
}

// ========================= Getters ========================================

std::string Lecteur::getPrenomLecteur() const
{
    return _prenomLecteur;
}

std::string Lecteur::getNomLecteur() const
{
    return _nomLecteur;
}

std::string Lecteur::getIdLecteur() const
{
    return _idLecteur;
}

// ========================= Méthodes ====================================
void Lecteur::ajouterIsbn(std::string isbn)
{
    _listeIsbn.push_back(isbn);
    std::cout << "fait" << std::endl;
}

// affiche la liste des isbn des livres
void Lecteur::afficherIsbn()
{
    std::cout << "salut" << std::endl;
    int n = _listeIsbn.size();
    for(int i = 0; i < n; i++)
    {
        std::cout << _listeIsbn[i] << std::endl;
    }
}

void Lecteur::afficherLecteur()
{
    std::cout << _prenomLecteur << std::endl;
    std::cout << _nomLecteur << std::endl;
    std::cout << _idLecteur << std::endl;
}
