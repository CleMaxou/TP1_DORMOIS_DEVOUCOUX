#include "Livre.h"

#include <iostream>

// constructeur par paramètres
Livre::Livre(std::string titre, std::string langue, std::string genre, std::string isbn, std::string nomAuteur, std::string prenomAuteur, std::string dateNaissanceAuteur, std::string idAuteur, int mois, int jour, int annee) : _titre(titre), _langue(langue), _genre(genre), _isbn(isbn),  _auteurDuLivre(nomAuteur, prenomAuteur, dateNaissanceAuteur, idAuteur), _date(mois, jour, annee)
{
    _emprunte = false;
}



// ================================ Méthodes ==============================
void Livre::afficheLivre()
{
    std::cout << "A propos du livre" << std::endl;
    std::cout << _titre << std::endl;
    std::cout << _langue << std::endl;
    std::cout << _genre << std::endl;
    std::cout << _isbn << std::endl;
    std::cout << _emprunte << std::endl;
    std::cout << "A propos de l'auteur : " << std:: endl;
    std::cout << _auteurDuLivre.getNomAuteur() << std::endl;
    std::cout << _auteurDuLivre.getPrenomAuteur() << std::endl;
    std::cout << _auteurDuLivre.getDateNaissanceAuteur() << std::endl;
    std::cout << _auteurDuLivre.getIdAuteur() << std::endl;
    std::cout << "Date de publication : " << std:: endl;
    std::cout << _date.getDay() << std::endl;
    std::cout << _date.getMonth() << std::endl;
    std::cout << _date.getYear() << std::endl;

}
