#ifndef LECTEUR_H
#define LECTEUR_H

#include <string>
#include<vector>

class Lecteur
{
public:
    // constructeurs et destructeurs
    Lecteur(std::string idLecteur, std::string nomLecteur, std::string prenomLecteur);
    ~Lecteur();
    // getters
    std::string getNomLecteur() const;
    std::string getPrenomLecteur() const;
    std::string getIdLecteur() const;

    // setters
    void setIsbn(std::string isbn);

    // méthodes
    void ajouterIsbn(std::string isbn);
    void afficherIsbn();
    void afficherLecteur();

private:
    std::string _idLecteur;
    std::string _nomLecteur;
    std::string _prenomLecteur;
    std::vector<std::string> _listeIsbn;
};

void ajouterUnIsbn(std::string isbn);

#endif // LECTEUR_H
