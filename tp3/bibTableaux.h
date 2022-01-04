/**  Complément pour le module bibTableaux 
     sous-programme d'affichage d'un tableau de personnes
     -------------------------------------------------------**/

#ifndef BIBTABLEAUX_H
#define BIBTABLEAUX_H

#include "personne.h"

/* ----------------------------------------------------------------------------- 
                                TRI PAR BULLE
    ----------------------------------------------------------------------------  */

/*                         ----- Pour des entiers -----                           */

void triBulle(int tab[], unsigned int nbTab);
// tri CROISSANT des nbTab(>0) élèments de tab (avec d'éventuels doublons)
// par la méthode de tri de même nom


/*                        ----- Pour des personnes -----                         */

void triBulle(Personne tab[], unsigned int nbTab);
// tri CROISSANT des nbTab(>0) élèments de tab (avec d'éventuels doublons)
// par la méthode de tri de même nom


/* ----------------------------------------------------------------------------- 
                                TRI PAR INSERTION
    ----------------------------------------------------------------------------  */

/*                         ----- Pour des entiers -----                           */

void triParInsertion(int tab[], unsigned int nbTab);
// tri CROISSANT des nbTab(>0) élèments de tab (avec d'éventuels doublons)
// par la méthode de tri par insertion

/* ----------------------------------------------------------------------------- 
                                TRI PAR SELECTION
    ----------------------------------------------------------------------------  */

/*                        ----- Pour des entiers -----                         */

void triParSelectionDePlace(int tab[], unsigned int nbTab);
// tri CROISSANT des nbTab(>0) élèments de tab (avec d'éventuels doublons)
// par la méthode de tri par selection


/* ----------------------------------------------------------------------------- 
                        PRIMITIVES D'ENTREE/SORTIE
    ----------------------------------------------------------------------------  */

void afficher(const Personne tab[],
              unsigned short int lgTab);
// But : affiche à l'écran le contenu d'un tableau tab contenant lgTab > 0 éléments de type Personne
//       si lgTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')

void afficher(const int tab[],
              unsigned short int lgTab);
// But : affiche à l'écran le contenu d'un tableau tab contenant lgTab > 0 éléments de type Personne
//       si lgTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')

#endif // BIBTABLEAUX_H
