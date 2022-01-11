#include"livre.h"
#include<string>

Livre::Livre(std::string titre,Auteur auteur, std::string langue, std::string genre, Date date_publi, std::string isbn) : _titre(titre), _auteur(auteur), _langue(langue), _genre(genre) , _date_publi(date_publi) , _isbn(isbn)
{

}
std::string Livre::getTitre() const {

	return _titre;
}

Auteur Livre::getAuteur() const {
    return _auteur;
}
std::string Livre::getLangue() const {
    return _langue;
}
std::string Livre::getGenre() const {
    return _genre;
}
Date Livre::getDate_publi() const {
    return _date_publi;
}
std::string Livre::getIsbn() const {
    return _isbn;
}

void display(Livre& livre) {
    std::cout <<"Info sur le livre :" << " le titre : " << livre.getTitre() << " / "
            << "l'auteur: " << toString(livre.getAuteur()) << " / "
            <<" langue: " << livre.getLangue() << " / "
            << " genre: " << livre.getGenre() << " / "
            << toString(livre.getDate_publi()) << "/"
            << " ISBN: " << livre.getIsbn() << '\n';
    //livre.getAuteur()

    }
std::string toString(Auteur a) {
    return a.getNom() + " / " + a.getPrenom() + " / " + toString(a.getBorn()) + " / " + a.getIdn();
}
void Livre::add(std::string emprunteur) {
    _id_emprunteurs.push_back(emprunteur);
}
void Livre::del(int id) {
    if (id < _id_emprunteurs.size()) {
        _id_emprunteurs.erase(_id_emprunteurs.begin() + id);
    }
}
