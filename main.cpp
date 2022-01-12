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
    Livre allaicneDesTrois("L'Allaicne des Trois", "francais", "Roman", "845120", MChattam, parutionAllianceDesTrois);
    Livre malefices("Malefices", "francais", "Roman", "187236", MChattam, parutionMalefices);
    Livre laPatienceDuDiable("La patience du Diable", "francais", "Roman", "326521", MChattam, parutionMalefices);
    // ajout de livres dans la bibliotheque
    bibli1.ajouterUnLivre(glace);
    bibli1.ajouterUnLivre(laVallee);
    bibli1.ajouterUnLivre(leLabyrinthe);
    bibli1.ajouterUnLivre(laTerreBrulee);
    bibli1.ajouterUnLivre(allaicneDesTrois);
    bibli1.ajouterUnLivre(malefices);
    bibli1.ajouterUnLivre(laPatienceDuDiable);

    bibli1.emprunt(glace, maxime, parutionAllianceDesTrois);
    bibli1.emprunt(leLabyrinthe, maxime, parutionAllianceDesTrois);
    bibli1.emprunt(laTerreBrulee, maxime, parutionAllianceDesTrois);
    bibli1.afficheLivresEmprunteLecteur(maxime);



    return 0;
}
