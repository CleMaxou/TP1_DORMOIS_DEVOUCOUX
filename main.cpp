#include<iostream>
#include"date.h"
#include"livre.h"
#include"lecteur.h"
#include"auteur.h"


using namespace std;
int main() {
	Date date1(12, 31, 2021);
	Auteur bernard("bebe", "werber", "bernard", date1);
	Livre livre1("The Hitchhiker's Guide to the Galaxy", bernard, "Anglais", "Science Fiction", date1, "0593359445");
	display(livre1) ;
	Lecteur ginhac("dginhac", "Ginhac", "Dominique");
	
	
	return 0;
}