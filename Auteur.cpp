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

Date Auteur::getDateAuteur() const
{
    return _dateAuteur;
}

// ============================ méthodes ==========================
void Auteur::afficherAuteur() const
{
    std::cout << "Prenom : " << _prenomAuteur << std::endl;
    std::cout << "Nom : " << _nomAuteur << std::endl;
    std::cout << toString(_dateAuteur) << std::endl;
    std::cout << "ID : " << _idAuteur << std::endl;
}

// ==================== surcharge op =============================
std::ostream& operator<<(std::ostream& os, Auteur auteur)
{
    os << "Infos de l'auteur : " << std::endl << "Nom : " << auteur.getNomAuteur() << std::endl << "Prenom : " << auteur.getPrenomAuteur() << std::endl << "ID : " << auteur.getIdAuteur()  << std::endl << "Date de naissance : " << toString(auteur.getDateAuteur()) << std::endl;
    return os;
}
