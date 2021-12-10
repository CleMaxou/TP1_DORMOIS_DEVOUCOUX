#include <iostream>
#include "Livre.h"
#include "Auteur.h"
#include "Date.h"

int main()
{
    std::cout << "bonjour" << std::endl;
    Date o(06,12,2021);
    Livre Direction("Direction", "francais", "historique", "254106", "DEVOUCOUX", "Maxime", "23/05/2000");

    return 0;
}
