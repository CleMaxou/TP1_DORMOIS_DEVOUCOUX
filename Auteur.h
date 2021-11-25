#ifndef DEF_AUTEUR
#define DEF_AUTEUR

#include <string>
#include "Livre.h"

class Auteur
{
	public:
	// contructeur
	Auteur(std::string idNum, std::string name, std::string firstname, std::string birthday);
	
	
	private:
	std::string _idNum;
	std::string _name;
	std::string _firstname;
	std::string _birthday;
	
};

#endif
