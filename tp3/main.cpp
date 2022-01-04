/*
 Programme : test du module bibTableauxEntiers
 But :  Tester la conformité des fonctionnalités de tri du module bibTableaux
        par rapport aux jeux d'essais prévus
 Date de dernière modification : 25/11/2021
 Auteur : Pantxika Dagorret
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - TD n°4
*/

#include "bibTableaux.h"
#include <iostream>
using namespace std;

/* --------------------------------------------------
  Déclarations des sous-programmes utilisés dans main()
  -----------------------------------------------------*/

void testTriBulle_entiers();
// test du triBulle croissant d'un tableau d'entiers

void testTriBulle_personnes();
// test du triBulle croissant selon le champ .nom d'un tableau de Personnes

void testTriParInsertion_entiers();
// test du tri par Insertion croissant d'un tableau d'entiers

void testTriParSelectionDePlace_entiers();
// test du tri par Sélection de place croissant d'un tableau d'entiers

int main()
{
    //testTriBulle_entiers();
    //testTriBulle_personnes();
    testTriParInsertion_entiers();
    //testTriParSelectionDePlace_entiers();
    return 0;
}


/* --------------------------------------------------
  Corps des sous-programmes utilisés dans main()
  -----------------------------------------------------*/

void testTriBulle_entiers()
{
    const unsigned int TAILLE = 10 ;

   int tableau1 [TAILLE] = {7, -6, 8, 10, 2, -3, 6, 9, 0, 2}; // non trié au hasard
   int tableau2 [TAILLE] = {-6, -3, 0, 2, 2, 6, 7, 8, 9, 10}; // déjà trié croissant
   int tableau3 [TAILLE] = {10, 9, 8, 7, 6, 2, 2, 0, -3, -6}; //trié à l'envers (= décroissant)
   int tableau4 [TAILLE] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8};    //constant

   cout << " ------------------   TRI BULLE croissant - tableau d'ENTIERS --------------" << endl << endl;

    // ---------tableau 1
    // afficher monTab avant le tri
    cout << "Avant tri BULLE croissant, tableau = ";
    afficher (tableau1, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triBulle(tableau1, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri BULLE croissant, tableau = " ;
    afficher (tableau1, TAILLE);
    cout << endl;

    // ---------tableau 2
    // afficher monTab avant le tri
    cout << "Avant tri BULLE croissant, tableau = ";
    afficher (tableau2, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triBulle(tableau2, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri BULLE croissant, tableau = " ;
    afficher (tableau2, TAILLE);
    cout << endl;

    // ---------tableau 3
    // afficher monTab avant le tri
    cout << "Avant tri BULLE croissant, tableau = ";
    afficher (tableau3, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triBulle(tableau3, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri BULLE croissant, tableau = " ;
    afficher (tableau3, TAILLE);
    cout << endl;

    // ---------tableau 4
    // afficher monTab avant le tri
    cout << "Avant tri BULLE croissant, tableau = ";
    afficher (tableau4, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triBulle(tableau4, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri BULLE croissant, tableau = " ;
    afficher (tableau4, TAILLE);
    cout << endl;

    // ---------tableau VIDE
    // afficher monTab avant le tri
    cout << "Avant tri BULLE croissant, tableau = ";
    afficher (tableau4, 0);
    // monTab1, TAILLE >> triBulle >> monTab
    triBulle(tableau4,0) ;
    // afficher monTab après le tri
    cout << "Apres tri BULLE croissant, tableau = " ;
    afficher (tableau4, 0);
    cout << endl;

}

void testTriBulle_personnes()
{
    const unsigned short int TAILLE = 10;
    Personne tableau1[TAILLE] =   {                                             // à l'envers
        {"Voisin", "Sophie", {"12", "rue des arenes",64240, "Hasparren"}},
        {"Urruty", "Damien", {"6", "rue des lilas",64240, "Hasparren"}},
        {"Marquesuzaa", "Christophe", {"8", "avenue d'Anglet",64600, "Anglet"}},
        {"Lopisteguy", "Philippe", {"1", "avenue d'Anglet",64600, "Anglet"}},
        {"Etcheverry", "Patrick", {"2bis", "allee des alouettes",64100, "Bayonne"}},
        {"Dijon-Duboue", "Simone", {"5", "rue des roses",64600, "Anglet"}},
        {"Dagorret", "Pantxika", {"10", "chemin des bois",64250, "Itxassou"}},
        {"Corbineau", "Sandrine", {"23", "allee des fleurs",64100, "Bayonne"}},
        {"Bruyere", "Marie", {"4", "rue de la musique",64240, "Hasparren"}},                               
        {"Alami", "Chakib", {"41", "allee de la patisserie",64250, "Itxassou"}}
                                }; 

        Personne tableau2[TAILLE] =   {                                                 // en désordre quelconque, avec doublons
        {"Urruty", "Damien", {"6", "rue des lilas",64240, "Hasparren"}},
        {"Alami", "Chakib", {"41", "allee de la patisserie",64250, "Itxassou"}},
        {"Marquesuzaa", "Philippe", {"1", "avenue d'Anglet",64600, "Anglet"}},
        {"Marquesuzaa", "Christophe", {"8", "avenue d'Anglet",64600, "Anglet"}},       
        {"Marquesuzaa", "Patrick", {"2bis", "allee des alouettes",64100, "Bayonne"}},
        {"Dijon-Duboue", "Simone", {"5", "rue des roses",64600, "Anglet"}},
        {"Dagorret", "Pantxika", {"10", "chemin des bois",64250, "Itxassou"}},
        {"Corbineau", "Sandrine", {"23", "allee des fleurs",64100, "Bayonne"}},
        {"Voisin", "Sophie", {"12", "rue des arenes",64240, "Hasparren"}},        
        {"Bruyere", "Marie", {"4", "rue de la musique",64240, "Hasparren"}}                              
        };                                                                              // remarquer l'ordre des 3 Marquesuzaa

    cout << " ------------------   TRI BULLE croissant - tableau de PERSONNES --------------" << endl << endl;

    // ---------tableau 1
    // afficher monTab avant le tri
    cout << "Avant tri BULLE croissant, tableau = ";
    afficher (tableau1, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triBulle(tableau1, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri BULLE croissant, tableau = " ;
    afficher (tableau1, TAILLE);
    cout << endl;

    // ---------tableau 2
    // afficher monTab avant le tri
    cout << "Avant tri BULLE croissant, tableau = ";
    afficher (tableau2, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triBulle(tableau2, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri BULLE croissant, tableau = " ;
    afficher (tableau2, TAILLE);
    cout << endl;

    // le tri Bulle est stable : 
    // - AVANT le tri, les 3 Marquesuzaa etaient dans un certain ordre : Philippe, Christophe, Christophe
    // - APRES le tri, les 3 Marquesuzaa sont dans le même ordre --> le triBulle respecte l'ordre initial des doublons 
}

void testTriParInsertion_entiers()
{
    const unsigned int TAILLE = 10 ;

   int tableau1 [TAILLE] = {7, -6, 8, 10, 2, -3, 6, 9, 0, 2}; // non trié au hasard
   int tableau2 [TAILLE] = {-6, -3, 0, 2, 2, 6, 7, 8, 9, 10}; // déjà trié croissant
   int tableau3 [TAILLE] = {10, 9, 8, 7, 6, 2, 2, 0, -3, -6}; //trié à l'envers (= décroissant)
   int tableau4 [TAILLE] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8};    //constant

   cout << " ------------------   TRI par INSERTION croissant - tableau d'ENTIERS --------------" << endl << endl;

    // ---------tableau 1
    // afficher monTab avant le tri
    cout << "Avant tri par INSERTION croissant, tableau = ";
    afficher (tableau1, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triParInsertion(tableau1, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri par INSERTION croissant, tableau = " ;
    afficher (tableau1, TAILLE);
    cout << endl;

    // ---------tableau 2
    // afficher monTab avant le tri
    cout << "Avant tri par INSERTION croissant, tableau = ";
    afficher (tableau2, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triParInsertion(tableau2, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tripar INSERTION  croissant, tableau = " ;
    afficher (tableau2, TAILLE);
    cout << endl;

    // ---------tableau 3
    // afficher monTab avant le tri
    cout << "Avant tri par INSERTION croissant, tableau = ";
    afficher (tableau3, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triParInsertion(tableau3, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri par INSERTION croissant, tableau = " ;
    afficher (tableau3, TAILLE);
    cout << endl;

    // ---------tableau 4
    // afficher monTab avant le tri
    cout << "Avant tri par INSERTION croissant, tableau = ";
    afficher (tableau4, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triParInsertion(tableau4, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri par INSERTION croissant, tableau = " ;
    afficher (tableau4, TAILLE);
    cout << endl;

    // ---------tableau VIDE
    // afficher monTab avant le tri
    cout << "Avant tri par INSERTION croissant, tableau = ";
    afficher (tableau4, 0);
    // monTab1, TAILLE >> triBulle >> monTab
    triParInsertion(tableau4,0) ;
    // afficher monTab après le tri
    cout << "Apres tri par INSERTION croissant, tableau = " ;
    afficher (tableau4, 0);
    cout << endl;

}

void testTriParSelectionDePlace_entiers()
{
    const unsigned int TAILLE = 10 ;

   int tableau1 [TAILLE] = {7, -6, 8, 10, 2, -3, 6, 9, 0, 2}; // non trié au hasard
   int tableau2 [TAILLE] = {-6, -3, 0, 2, 2, 6, 7, 8, 9, 10}; // déjà trié croissant
   int tableau3 [TAILLE] = {10, 9, 8, 7, 6, 2, 2, 0, -3, -6}; //trié à l'envers (= décroissant)
   int tableau4 [TAILLE] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8};    //constant

   cout << " ------------------   TRI par SELECTION de PLACE croissant - tableau d'ENTIERS --------------" << endl << endl;

    // ---------tableau 1
    // afficher monTab avant le tri
    cout << "Avant tri par SELECTION de PLACE croissant, tableau = ";
    afficher (tableau1, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triParSelectionDePlace(tableau1, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri par SELECTION de PLACE croissant, tableau = " ;
    afficher (tableau1, TAILLE);
    cout << endl;

    // ---------tableau 2
    // afficher monTab avant le tri
    cout << "Avant tri par SELECTION de PLACE croissant, tableau = ";
    afficher (tableau2, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triParSelectionDePlace(tableau2, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tripar SELECTION de PLACE  croissant, tableau = " ;
    afficher (tableau2, TAILLE);
    cout << endl;

    // ---------tableau 3
    // afficher monTab avant le tri
    cout << "Avant tri par SELECTION de PLACE croissant, tableau = ";
    afficher (tableau3, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triParSelectionDePlace(tableau3, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri par SELECTION de PLACE croissant, tableau = " ;
    afficher (tableau3, TAILLE);
    cout << endl;

    // ---------tableau 4
    // afficher monTab avant le tri
    cout << "Avant tri par SELECTION de PLACE croissant, tableau = ";
    afficher (tableau4, TAILLE);
    // monTab1, TAILLE >> triBulle >> monTab
    triParSelectionDePlace(tableau4, TAILLE) ;
    // afficher monTab après le tri
    cout << "Apres tri par SELECTION de PLACE croissant, tableau = " ;
    afficher (tableau4, TAILLE);
    cout << endl;

    // ---------tableau VIDE
    // afficher monTab avant le tri
    cout << "Avant tri par SELECTION de PLACE croissant, tableau = ";
    afficher (tableau4, 0);
    // monTab1, TAILLE >> triBulle >> monTab
    triParSelectionDePlace(tableau4,0) ;
    // afficher monTab après le tri
    cout << "Apres tri par SELECTION de PLACE croissant, tableau = " ;
    afficher (tableau4, 0);
    cout << endl;

}