#include"lecteur.h"

Lecteur::Lecteur(std::string idl, std::string noml, std::string prenoml) : _idl(idl), _noml(noml), _prenoml(prenoml)
{

}

std::string Lecteur::getIdl() {
	return _idl;
}
std::string Lecteur::getPrenoml() {
	return _prenoml;
}
std::string Lecteur::getNoml() {
	return _noml;
}

void display(Lecteur& lecteur) {
	std::cout << lecteur.getIdl() << "/" << lecteur.getNoml() << "/" << lecteur.getPrenoml() << '\n';

}