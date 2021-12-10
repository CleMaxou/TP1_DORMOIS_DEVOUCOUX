#include "Livre.h"

Livre::Livre(std::string titre, std::string langue, std::string genre, std::string isbn, std::string nomAuteur, std::string prenomAuteur, std::string dateNaissanceAuteur) : _titre(titre), _langue(langue), _genre(genre), _isbn(isbn), _auteurDuLivre(nomAuteur, prenomAuteur, dateNaissanceAuteur)
{

}
