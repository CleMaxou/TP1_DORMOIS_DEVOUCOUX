#include <iostream>
#include "Livre.h"
#include "Auteur.h"
#include "Date.h"

int main()
{
    std::cout << "bonjour" << std::endl << std::endl;



    Livre Direction("Direction", "francais", "historique", "254106", "DEVOUCOUX", "Maxime", "23/05/2000", "12", 12, 5, 2011);
    Direction.afficheLivre();

    return 0;
}
