#ifndef DEF_LIVRE
#define DEF_LIVRE

#include <string>
#include "Auteur.h"

class Livre
{
	public:
	// méthodes
	void isBorrowed();
	
	// getters
	std::string getTitle() const;
	std::string getLanguage();
	std::string getStyle();
	std::string getIsbn();
	bool getIsBorrowed();
	
	// setters
	void setTitle(std::string title);
	void setLanguage(std::string language);
	void setStyle(std::string style);
	void setIsbn(std::string isbn);
	void setIsBorrowed(bool isBorrowed);
	
	
	// constructeur
	Livre(std::string title, std::string language, std::string style, std::string isbn, bool isBorrowed, Auteur auteur);
	
	private:
	// attributs
	std::string _title;
	std::string _language;
	std::string _style;
	std::string _isbn;
	bool _isBorrowed;
	//Auteur _auteur;	
};

#endif
