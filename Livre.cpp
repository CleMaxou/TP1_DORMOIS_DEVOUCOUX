#include "Livre.h"
#include "Auteur.h"
#include <iostream>

// constructeur par paramètres
Livre::Livre(std::string title, std::string language, std::string style, std::string isbn, bool isBorrowed) : _title(title), _language(language), _style(style), _isbn(isbn), _isBorrowed(isBorrowed)
{
	
}

// méthodes
void Livre::isBorrowed()
{
	if(_isBorrowed == true)
	{
		std::cout << "le livre est emprenute" << std::endl;
	}
	else
	{
		std::cout << "le livre n'est pas emprenute" << std::endl;
	}
}

//====================================== GETTERS =============================================
std::string Livre::getTitle() const
{
	return _title;
}

std::string Livre::getLanguage()
{
	return _language;
}

std::string Livre::getStyle()
{
	return _style;
}

std::string Livre::getIsbn()
{
	return _isbn;
}

bool Livre::getIsBorrowed()
{
	return _isBorrowed;
}

//====================================== SETTERS =============================================
void Livre::setTitle(std::string title)
{
	_title = title;
}

void Livre::setLanguage(std::string language)
{
	_language = language;
}

void Livre::setStyle(std::string style)
{
	_style = style;
}

void Livre::setIsbn(std::string isbn)
{
	_isbn = isbn;
}

void Livre::setIsBorrowed(bool isBorrowed)
{
	_isBorrowed = isBorrowed;
}
