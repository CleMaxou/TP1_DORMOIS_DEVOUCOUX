#include <iostream>
#include "Lecteur.h"
#include "Livre.h"



// constructeur par paramètres
Lecteur::Lecteur(std::string idLecteur, std::string nomLecteur, std::string prenomLecteur ) : _idLecteur(idLecteur), _nomLecteur(nomLecteur), _prenomLecteur(prenomLecteur)
{

}
// constructeur par défaut
Lecteur::Lecteur()
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
}

void Lecteur::afficherIsbn()
{
    std::cout << "Liste des ISBN empruntes par : " << _prenomLecteur << std::endl;
    for(int i = 0; i < _listeIsbn.size(); i++)
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
// surcharge op
std::ostream& operator<<(std::ostream& os, Lecteur lecteur)
{
    os << "Infos du lecteur :" << std::endl << "Prenom : " << lecteur.getPrenomLecteur()  << std::endl << "Nom : " << lecteur.getNomLecteur() << std::endl << "ID : " << lecteur.getIdLecteur() << std::endl;
    return os;
}
