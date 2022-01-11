#include<iostream>
#include<string>
#include<vector>
#ifndef LECTEUR_H
#define LECTEUR_H
class Lecteur {
public:
	Lecteur(std::string idu, std::string noml, std::string prenoml);
	Lecteur();
	std::vector <std::string> getIdn();
	std::string getIdu();
	std::string getNoml();
	std::string getPrenoml();
	void afficherLecteur();
private:
	std::string _idu;
	std::string _noml;
	std::string _prenoml;
	std::vector <std::string> _isbn;



};
void display(Lecteur& lecteur);
std::ostream& operator<<(std::ostream& os, Lecteur l);
#endif // !LECTEUR_H
