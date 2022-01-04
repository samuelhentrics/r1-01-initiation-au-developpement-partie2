 /*
 Programme : test du module Fractions
 But :  Tester la conformité de chaque fonctionnalité du module Fractions
        par rapport aux jeux d'essais prévus
 Date de dernière modification : 17/11/2021
 Auteur : Samuel HENTRICS LOISTINE
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - td n°2
*/

#include "fractions.h"

#include <iostream>
using namespace std;

// Déclarations des sous-programmes de main()
void testerAfficher();
    // But : tester le sous-programme afficher() du module Fractions

void testerAdditionner();
    // But : tester le sous-programme additionner() du module Fractions

int main()
{
    // VARIABLES
    // Fraction maFraction = FRACTIONNULLE;

    // TRAITEMENTS

    // () >> essayerAfficher >> ()
    testerAfficher();

    testerAdditionner();
    
    return 0;
}

// Corps des sous-programmes de main()
void testerAfficher(){
    afficher({1,3}) ; cout << endl ;
    afficher({-1,3}) ; cout << endl ;
    afficher({0,1}) ; cout << endl ;
    afficher(FRACTIONNULLE) ; cout << endl ;
    afficher({1,1}) ; cout << endl ;
}


void testerAdditionner(){
    cout << "Addition" << endl;
    afficher(additionner({1,2},{2,1})); cout << endl;
}