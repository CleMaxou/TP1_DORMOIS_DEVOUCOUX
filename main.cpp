#include <iostream>
#include "Livre.h"
#include "Auteur.h"
#include "Date.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Bibliotheque.h"

int main()
{
    // objets
    Bibliotheque bibli1;

    Date date1(5,13,2020);
    Date date2(2,25,1995);
    Date date3(8,31,1959);
    Date date4(11,25,2022);

    Auteur auteur1("Colbell", "Jonhatan", date3, "7854");
    Auteur auteur2("Blora", "Natasha", date2, "8541");

    Livre Direction("Direction", "francais", "historique", "254106", auteur1, date1);
    Livre Nemo("Nemo", "allemand", "roman", "125652", auteur2, date1);
    Livre LPCR("Le petit chaperon rouge", "anglais", "conte", "454587", auteur2, date1);

    Lecteur marc("123", "BOUELAU", "Marc");
    Lecteur clement("245", "DORMOIS", "Clement");
    Lecteur maxou("921", "DEVOUCOUX", "Maxime");

    //Livre *pointDirection = &Direction;
    // ========== pointeurs ======================
    Lecteur *pointMarc = &marc;
    Lecteur *pointClement = &clement;
    Lecteur *pointMaxou = &maxou;

    // ajout de livres
    bibli1.ajouterUnLivre(Direction);
    bibli1.ajouterUnLivre(LPCR);
    bibli1.ajouterUnLivre(Nemo);

    // ajout de lecteurs
    bibli1.ajouterUnLecteur(clement);
    bibli1.ajouterUnLecteur(maxou);
    bibli1.ajouterUnLecteur(marc);

    bibli1.afficherListeLecteur();
    bibli1.afficherListeLivre();

    bibli1.emprunt(Nemo, maxou, date4);
    Nemo.afficheLivre();

    bibli1.emprunt(Direction, clement, date4);
    Direction.afficheLivre();

    bibli1.afficherListeEmprunt();

    bibli1.rendre(Direction, clement, 2);

    Direction.afficheLivre();



    /*
    std::cout << " ============== marc ============" << std::endl;

    Direction.emprunter(*pointMarc);
    Direction.afficheLivre();
    Direction.afficherEmprunt();
    Direction.rendre(*pointMarc);
    Direction.afficheLivre();
    std::cout << std::endl << std::endl;

    std::cout << " ============== clement ============" << std::endl;
    Direction.emprunter(*pointClement);
    Direction.afficheLivre();
    Direction.afficherEmprunt();
    Direction.rendre(*pointClement);
    Direction.afficheLivre();

    std::cout << " ============== maxou ============" << std::endl;
    Direction.emprunter(*pointMaxou);
    Direction.afficheLivre();
    Direction.afficherEmprunt();

    std::cout << std::endl << std::endl;
    pointClement->afficherIsbn();   // à faire

    Emprunt emprunt1(date1, Direction, maxou);
    emprunt1.afficher();

    std::cout << std::endl << std::endl;
    std::cout << " ==========================" << std::endl;
    bibli1.ajouterUnLivre(Direction);
    bibli1.ajouterUnLivre(LFNPDSDM);
    bibli1.ajouterUnLivre(LPCR);
    bibli1.afficherListeLivre();

    std::cout << std::endl << std::endl;
    std::cout << " ==========================" << std::endl;

    bibli1.ajouterUnLecteur(clement);
    bibli1.ajouterUnLecteur(marc);
    bibli1.ajouterUnLecteur(maxou);


    bibli1.emprunt(Direction,clement,date1);


    bibli1.afficherListeEmprunt();

    */




    /*
    Emprunt emprunt1("0125", "235");
    Emprunt *pointEmmprunt1 = &emprunt1;
    pointEmmprunt1->setId("1258");
    emprunt1.afficher();
    */

    delete pointMarc;
    delete pointClement;
    delete pointMaxou;
    return 0;
}
