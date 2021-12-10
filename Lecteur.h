#ifndef DEF_LECTEUR
#define DEF_LECTEUR
#include"Lecteur.h"
#include<vector>
class Lecteur
{
public:
	// _ISBN a implementer
	Lecteur(std::string id = "dginhac", std::string nom = "Ginhac", std::string prenom = "Dominique", std::string _ISBN = "0593359445");
	~Lecteur();
	std::string Getnom() const;
	std::string Getprenom() const;
	std::string Getid() const;
	std::vector< std::string > GETISBN();

private:
	std::string _id;
	std::string _nom;
	std::string _prenom;
	std::vector< std::string > _ISBN;
};


#endif // !DEF_LECTEUR
