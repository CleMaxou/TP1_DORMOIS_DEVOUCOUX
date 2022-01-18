#include <iostream>
#include "Livre.h"
#include "Auteur.h"
#include "Date.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Bibliotheque.h"

// TP 1 DEVOUCOUX Maxime DORMOIS Clement

int main()
{
    // objets
    Bibliotheque bibli1;
    // date
    Date date(5,11,2021);
    // dates auteurs
    Date naissanceBMinier(8,26,1960);
    Date naissanceJDashner(11,26,1972);
    Date naissanceMChattam(2,19,1976);
    Date naissanceHCoben(1,4,1962);
    // dates parution
    Date parutionGlace(2,24,2011);
    Date parutionLaVallee(5,20,2020);
    Date parutionLeLabyrinthe(10,4,2012);
    Date parutionLaTerreBrulee(8,14,2013);
    Date parutionAllianceDesTrois(11,3,2008);
    Date parutionMalefices(4,15,2004);
    Date parutionLaPatienceDuDiable(6,2,2014);
    Date parutionSansDefense(7,22,2017);
    Date parutionFauteDePreuves(10,5,2011);
    // auteurs
    Auteur BMinier("Minier", "Bernard", naissanceBMinier, "0001");
    Auteur JDashner("Dashner", "James", naissanceJDashner, "0002");
    Auteur MChattam("Chattam", "Maxime", naissanceMChattam, "0003");
    Auteur HCoben("Coben", "Harlan", naissanceHCoben, "0004");
    // lecteurs
    Lecteur clement("245", "DORMOIS", "Clement");
    Lecteur maxime("255", "DEVOUCOUX", "Maxime");
    Lecteur laurine("262", "CARCONE", "Laurine");
    //livres
    Livre glace("Glace", "francais", "Roman", "125487", BMinier, parutionGlace);
    Livre laVallee("La Vallee", "francais", "Roman", "542632", BMinier, parutionGlace);
    Livre leLabyrinthe("Le Labyrinthe", "anglais", "Roman", "148567", JDashner, parutionLeLabyrinthe);
    Livre laTerreBrulee("La Terre Brulee", "anglais", "Roman", "148578", JDashner, parutionLaTerreBrulee);
    Livre allaicneDesTrois("L'Alliance des Trois", "francais", "Roman", "845120", MChattam, parutionAllianceDesTrois);
    Livre malefices("Malefices", "francais", "Roman", "187236", MChattam, parutionMalefices);
    Livre laPatienceDuDiable("La patience du Diable", "francais", "Roman", "326521", MChattam, parutionMalefices);
    Livre sansDefense("Sans Defense", "anglais","Roman","203541", HCoben, parutionSansDefense);
    Livre fauteDePreuves("Faute de preuves", "anglais","Roman","626352", HCoben, parutionFauteDePreuves);
    // ajout de livres dans la bibliotheque
    bibli1.ajouterUnLivre(glace);
    bibli1.ajouterUnLivre(laVallee);
    bibli1.ajouterUnLivre(leLabyrinthe);
    bibli1.ajouterUnLivre(laTerreBrulee);
    bibli1.ajouterUnLivre(allaicneDesTrois);
    bibli1.ajouterUnLivre(malefices);
    bibli1.ajouterUnLivre(laPatienceDuDiable);
    bibli1.ajouterUnLivre(sansDefense);
    bibli1.ajouterUnLivre(fauteDePreuves);
    // ajout de lecteurs dans la bibliotheque
    bibli1.ajouterUnLecteur(clement);
    bibli1.ajouterUnLecteur(maxime);
    bibli1.ajouterUnLecteur(laurine);
    // emprunts de livres
    // clement
    bibli1.emprunt(glace,clement,date);
    bibli1.emprunt(laTerreBrulee,clement,date);
    bibli1.emprunt(laPatienceDuDiable,clement,date);
    // maxime
    bibli1.emprunt(glace,maxime,date);  // impossible car déjà emprunté
    bibli1.emprunt(fauteDePreuves,maxime,date);
    // laurine
    bibli1.emprunt(leLabyrinthe,laurine,date);
    bibli1.emprunt(allaicneDesTrois,laurine,date);
    // affichage lise d'emprunts
    bibli1.afficherListeEmprunt();
    // restitution de livres
    bibli1.rendre(allaicneDesTrois,laurine,6);  // laurine rend le livre qui est le 6 eme emprunt
    // surchage des opérateurs
    std::cout << clement << std::endl;
    std::cout << HCoben << std::endl;
    std::cout << laTerreBrulee << std::endl;
    // recherche des livres d'un auteur
    bibli1.chercherLivresAuteur(JDashner);
    // chercher les livres empruntés et %age de la bibliotheque
    bibli1.calculLivreemprunter();
    // chercher les livres empruntes par un lecteur
    bibli1.afficheLivresEmprunteLecteur(clement);
    // classement des lecteurs en fonction des livres empruntes
    bibli1.classementLecteur();

    return 0;
}
