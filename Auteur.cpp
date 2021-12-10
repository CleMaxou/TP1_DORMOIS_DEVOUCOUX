#include "Auteur.h"

#include <iostream>

// constructeur
Auteur::Auteur(std::string nomAuteur, std::string prenomAuteur, std::string dateNaissanceAuteur, std::string idAuteur) : _nomAuteur(nomAuteur), _prenomAuteur(prenomAuteur), _dateNaissanceAuteur(dateNaissanceAuteur), _idAuteur(idAuteur)
{

}

// ======================= Getters =================================
std::string Auteur::getNomAuteur()
{
    return _nomAuteur;
}

std::string Auteur::getPrenomAuteur()
{
    return _prenomAuteur;
}


std::string Auteur::getDateNaissanceAuteur()
{
    return _dateNaissanceAuteur;
}

std::string Auteur::getIdAuteur()
{
    return _idAuteur;
}
