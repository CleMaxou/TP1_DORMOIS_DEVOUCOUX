#include "Auteur.h"
#include "Date.h"

#include <iostream>

// constructeur
Auteur::Auteur(std::string nomAuteur, std::string prenomAuteur, Date dateAuteur, std::string idAuteur) : _nomAuteur(nomAuteur), _prenomAuteur(prenomAuteur), _dateAuteur(dateAuteur), _idAuteur(idAuteur)
{

}

Auteur::Auteur()
{

}

// ======================= Getters =================================
std::string Auteur::getNomAuteur() const
{
    return _nomAuteur;
}

std::string Auteur::getPrenomAuteur()const
{
    return _prenomAuteur;
}

std::string Auteur::getIdAuteur() const
{
    return _idAuteur;
}

// ============================ méthodes ==========================
void Auteur::afficherAuteur() const
{
    std::cout << "Prenom : " << _prenomAuteur << std::endl;
    std::cout << "Nom : " << _nomAuteur << std::endl;
    std::cout << toString(_dateAuteur) << std::endl;
    std::cout << "ID : " << _idAuteur << std::endl;
}
