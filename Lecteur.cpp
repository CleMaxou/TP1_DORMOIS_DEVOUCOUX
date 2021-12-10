
#include<iostream>
#include"Lecteur.h"


Lecteur::Lecteur(std::string id, std::string nom, std::string prenom , std::string ISBN) : _id(id), _nom(nom), _prenom(prenom), _ISBN(ISBN) {

}
std::string Lecteur::Getprenom() const {
    return _prenom;
}

std::string Lecteur::Getnom() const {
    return _nom;
}
std::string Lecteur::Getid() const {
    return _id;
}

Lecteur::~Lecteur()
{
}