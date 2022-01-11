#include<iostream>
#include"emprunt.h"
#include"livre.h"
Emprunt::Emprunt(Date dateemprunt, Livre livre, Lecteur lecteur) : _dateemprunt(dateemprunt), _isbnLivre(livre.getIsbn()), _idlecteur(lecteur.getIdl()) {

}