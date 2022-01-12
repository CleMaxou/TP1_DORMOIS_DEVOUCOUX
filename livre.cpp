#include"livre.h"
#include<string>

Livre::Livre(std::string titre,Auteur auteur, std::string langue, std::string genre, Date date_publi, std::string isbn) : _titre(titre), _auteur(auteur), _langue(langue), _genre(genre) , _date_publi(date_publi) , _isbn(isbn) , _emprunte(false)
{

}
Livre::Livre() {

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
void Livre::afficheLivre()
{
    std::cout << " ======== A propos du livre ==========" << std::endl;
    std::cout << "Titre : " << _titre << std::endl;
    std::cout << "Langue : " << _langue << std::endl;
    std::cout << "Genre : " << _genre << std::endl;
    std::cout << "ISBN : " << _isbn << std::endl;
    std::cout << "Etat (0 libre/1 emprunter) : " << _emprunte << std::endl;
}
bool Livre::getEtat() const
{
    return _emprunte;
}
void Livre::setEtat(bool etat)
{
    _emprunte = etat;
}
std::ostream& operator<<(std::ostream& os, Livre livre) {
    os << " Le titre du livre est : " << livre.getTitre() << ". L'auteur est : " << toString(livre.getAuteur()) << " La langue est : " << livre.getLangue() << " Le genre est :" << livre.getGenre() << " La date de publication : " << toString(livre.getDate_publi()) << " Etat (0 libre/1 emprunter) : "<< std::to_string(livre.getEtat())<< " ! " << std::endl;
    return os;
}
