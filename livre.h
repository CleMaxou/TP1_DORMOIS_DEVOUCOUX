#include<string>
#include"date.h"
#include<vector>
#include"auteur.h"
#ifndef LIVRE_H
#define LIVRE_H
class Livre {
public:
	Livre(std::string titre,Auteur auteur, std::string langue, std::string genre , Date date_publi , std::string isbn);
	std::string getTitre() const ;
	Livre();
	Auteur getAuteur() const;
	std::string getLangue() const;
	std::string getGenre() const;
	Date getDate_publi() const;
	std::string getIsbn() const;
	void afficheLivre();
	void add(std::string emprunteur);
	void del(int id);
	bool getEtat() const;
	void setEtat(bool etat);

	
private :
	Auteur _auteur;
	std::string _langue;
	std::string _genre;
	std::string _titre;
	Date _date_publi;
	bool _emprunte;
	std::string _isbn;
	std::vector <std::string> _id_emprunteurs;

	
};
void display(Livre& livre);
std::string toString(Auteur a);


#endif // !LIVRE_H
