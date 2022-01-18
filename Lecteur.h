#ifndef LECTEUR_H
#define LECTEUR_H

#include <string>
#include<vector>

class Lecteur
{
public:
    // constructeurs et destructeurs
    Lecteur(std::string idLecteur, std::string nomLecteur, std::string prenomLecteur);
    Lecteur();
    ~Lecteur();

    // getters
    std::string getNomLecteur() const;
    std::string getPrenomLecteur() const;
    std::string getIdLecteur() const;
    std::vector<std::string> getListeISBN() const;

    // setters
    void setIsbn(std::string isbn);

    // méthodes
    void ajouterIsbn(std::string isbn); // ajoute un isbn à la liste
    void afficherIsbn();    // affiche la liste des isbn
    void afficherLecteur(); // affiche les infos du lecteur

private:
    std::string _idLecteur;
    std::string _nomLecteur;
    std::string _prenomLecteur;
    std::vector<std::string> _listeIsbn;
};
// surcharge op
std::ostream& operator<<(std::ostream& os, Lecteur l);
bool operator < (const Lecteur& l1, const Lecteur& l2);

#endif // LECTEUR_H
