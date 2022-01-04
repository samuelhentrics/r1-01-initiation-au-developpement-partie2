// CORPS MODULE BIBTABLEAU

#include "bibTableaux.h"

#include <iostream>
using namespace std;

void afficher(const int tab[],
              unsigned short int lgTab)
{
    if (lgTab > 0)
    {
        cout << "{";
        for (unsigned short int i = 0; i < lgTab - 1; i++)
        {
            cout << tab[i] << ", ";
        };
        cout << tab[lgTab - 1] << "} " << endl;
    }
    else
    {
        cout << "tableau vide " << endl;
    }
}

void recherchePremiereOccDichoEntier(int tab[], unsigned short int lgTab, int val, unsigned short int &pos, bool &trouve)
{
    // VARIABLES LOCALES
    int bInf;
    int bSup;
    unsigned short int milieu;

    // TRAITEMENTS

    // () >> initRecherche >> trouve, bInf, bSup
    bSup = lgTab - 1;
    bInf = 0;
    trouve = false;

    // val, tab, bInf, bSup >> effectuerRecherche >> trouve, [pos]
    while (true)
    {
        if (bInf > bSup)
        {
            break;
        }

        // bInf, bSup >> calculerMilieu >> milieu
        milieu = static_cast<unsigned short int>(bSup + bInf) / 2;

        if (tab[milieu] == val)
        {
            trouve = true;
            pos = milieu;
            break;
        }

        // val, milieu, tab, bSup, bInf >> progresser recherche >> bSup, bInf
        if (tab[milieu] > val)
        {
            bInf = milieu + 1;
        }
        else
        {
            bSup = milieu - 1;
        }
    }
}
