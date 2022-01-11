#include<iostream>
#include<string>
#include<vector>
#ifndef LECTEUR_H
#define LECTEUR_H
class Lecteur {
public:
	Lecteur(std::string idl, std::string noml, std::string prenoml);
	std::string getIdl();
	std::string getNoml();
	std::string getPrenoml();
private:
	std::string _idl;
	std::string _noml;
	std::string _prenoml;
	std::vector <std::string> _isbn;



};
void display(Lecteur& lecteur);
#endif // !LECTEUR_H
