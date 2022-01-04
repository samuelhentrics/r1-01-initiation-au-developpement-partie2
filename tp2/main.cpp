/*
 Programme : test du module bibTableauxEntiers
 But :  Tester la conformité de chaque fonctionnalité du module bibTableauxEntiers
        par rapport aux jeux d'essais prévus
 Date de dernière modification : 24/11/2021
 Auteur : Samuel HENTRICS LOISTINE
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - TD n°3
*/

#include "bibTableaux.cpp"

#include <iostream>
using namespace std;

void testRechercheDichoEntiers();
// But : test du module bibTableaux et de son sous-programme recherchePremiereOccDichoEntier()

int main()
{

    testRechercheDichoEntiers();

    return 0;
}

void testRechercheDichoEntiers()
{
    // VARIABLES LOCALES
    const unsigned short int TAILLE = 10;
    int monTab1[TAILLE] = {60, 45, 30, 25, 15, 10, 0, -15, -20, -45};
    int monTab2[TAILLE] = {60, 30, 30, 25, 15, 10, 0, -15, -20, -45};
    int monTab3[TAILLE];
    unsigned short int position;
    bool estTrouvee;

    // TRAITEMENTS

    recherchePremiereOccDichoEntier(monTab1, TAILLE, 30, position, estTrouvee);
    cout << estTrouvee << position << endl;
    recherchePremiereOccDichoEntier(monTab1, TAILLE, -45, position, estTrouvee);
    cout << estTrouvee << position << endl;
    recherchePremiereOccDichoEntier(monTab2, TAILLE, 30, position, estTrouvee);
    cout << estTrouvee << position << endl;
    recherchePremiereOccDichoEntier(monTab1, TAILLE, 1, position, estTrouvee);
    cout << estTrouvee << position << endl;
    recherchePremiereOccDichoEntier(monTab1, TAILLE, 80, position, estTrouvee);
    cout << estTrouvee << position << endl;
    recherchePremiereOccDichoEntier(monTab1, TAILLE, 15, position, estTrouvee);
    cout << estTrouvee << position << endl;
    recherchePremiereOccDichoEntier(monTab3, TAILLE, 15, position, estTrouvee);
    cout << estTrouvee << position << endl;
}