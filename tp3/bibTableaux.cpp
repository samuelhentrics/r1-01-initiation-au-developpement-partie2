/**  CORPS MODULE bibTableaux  
     ------------------------ */

/* inclusions
   ----------*/
#include "personne.h"
#include "bibTableaux.h"
#include <iostream>
using namespace std;

/* Types - Variables - Constantes propres au corps
 */

/* Déclarations des sous-programmes utilisés dans ce corps
 */

// Echanger
void echanger(int& nb1, int& nb2);
void echanger(Personne& p1, Personne& p2);

void echanger(int& nb1, int& nb2){
    //variables
    int copieNb1;

    // traitements
    copieNb1=nb1;
    nb1=nb2;
    nb2=copieNb1;
}

void echanger(Personne& p1, Personne& p2){
    //variables
    Personne copieP1;

    // traitements
    copieP1=p1;
    p1=p2;
    p2=copieP1;
}


/* ----------------------------------------------------------------------------- 
                                TRI PAR BULLE
    ----------------------------------------------------------------------------  */

/*                         ----- Pour des entiers -----                           */


void faireMonterLaBulleIci(int tab[], unsigned short int bDeb, unsigned int ici);
// Place le plus grand element de la tranche tab(bDeb...ici) en position ici
// selon le principe de la bulle

/*                        ----- Pour des personnes -----                         */


void faireMonterLaBulleIci(Personne tab[], unsigned short int bDeb, unsigned int ici);
// Place le plus grand element de la tranche tab(bDeb...ici) en position ici
// selon le principe de la bulle

/* ----------------------------------------------------------------------------- 
                                TRI PAR INSERTION
    ----------------------------------------------------------------------------  */

void triInsert(int tab[], unsigned int ici, unsigned int bDeb);
// Retourne la position max d'un tableau de taille bDeb, bFin

/* ----------------------------------------------------------------------------- 
                                TRI PAR SELECTION
    ----------------------------------------------------------------------------  */

int positionDuMax(int tab[], unsigned int bDeb, unsigned int bFin);
// Retourne la position max d'un tableau de taille bDeb, bFin






/* Corps des sous-programmes déclarés dans l'interface bibTableaux.h
 */

/* ----------------------------------------------------------------------------- 
                                TRI PAR BULLE
    ----------------------------------------------------------------------------  */

/*                              Pour des entiers                                 */

void faireMonterLaBulleIci(int tab[], unsigned short int bDeb, unsigned int ici){

    for (unsigned short int i = bDeb; i <= ici-1; i++)
    {
        if (tab[i]>tab[i+1]){
            echanger(tab[i], tab[i+1]);
        }
    }
    
}

void triBulle(int tab[], unsigned int nbTab){
    for (unsigned int ici = nbTab-1; ici >= 1; ici--)
    {
        faireMonterLaBulleIci(tab, 0, ici);
    }
}


/*                              Pour des personnes                               */

void faireMonterLaBulleIci(Personne tab[], unsigned short int bDeb, unsigned int ici){

    for (unsigned short int i = bDeb; i <= ici-1; i++)
    {
        if (tab[i].nom>tab[i+1].nom){
            echanger(tab[i], tab[i+1]);
        }
    }
    
}

void triBulle(Personne tab[], unsigned int nbTab){
        for (unsigned int ici = nbTab-1; ici >= 1; ici--)
    {
        faireMonterLaBulleIci(tab, 0, ici);
    }
}

/* ----------------------------------------------------------------------------- 
                                TRI PAR INSERTION
    ----------------------------------------------------------------------------  */


void triParInsertion(int tab[], unsigned int nbTab){
    // variables
    unsigned int ici;

    // traitements
    for ( ici = 1; ici <= nbTab-1; ici++)
    {
        // tab, ici >> placerLaPlusGrandeValeurDeTabEnPositionIci >> tab, ici
        triInsert(tab, ici, 0);
    }
}

void triInsert(int tab[], unsigned int ici, unsigned int bDeb){
    bool trouve;
    unsigned int i;
    unsigned int pos;

    // init
    trouve = false;
    pos = (ici-1);
    // chercher
    while (true){
        
        if (tab[pos]<tab[ici]){
            pos++;
            trouve=true;
            break;
            
        }
        if (pos <= bDeb){
            break;
        }
        pos--;
    }

    if (trouve)
    {
        for (i = ici; i >= pos+1; i--)
        {
            echanger(tab[i],tab[i-1]);
        }
    }
    else{
        for (i = ici; i >= bDeb+1; i--)
        {
            echanger(tab[i],tab[i-1]);
        }
    }
    
}
/* ----------------------------------------------------------------------------- 
                                TRI PAR SELECTION
    ----------------------------------------------------------------------------  */

void triParSelectionDePlace(int tab[], unsigned int nbTab){
    // variables
    unsigned int ici;
    unsigned int pos;

    // traitements
    for ( ici = nbTab-1; ici >= 1; ici--)
    {
        // tab, ici >> placerLaPlusGrandeValeurDeTabEnPositionIci >> tab, ici
        pos = positionDuMax(tab, 0, ici);
        echanger(tab[pos], tab[ici]);
    }
    
}

int positionDuMax(int tab[], unsigned int bDeb, unsigned int bFin){
    // variables
    unsigned int posMax;

    // traitements
    posMax=0;
    for (unsigned int i = bDeb; i <= bFin-1; i++)
    {
        if (tab[i]>tab[posMax])
        {
            posMax = i;
        }
        
    }
    return posMax;
    
}

// ACCESSEURS

// OPERATEURS BINAIRES

// AUTRES PRIMITIVES

/* ----------------------------------------------------------------------------- 
                        PRIMITIVES D'ENTREE/SORTIE
    ----------------------------------------------------------------------------  */

void afficher (const Personne tab[],
               unsigned short int lgTab)
{
    if (lgTab > 0)
    {
        cout << "{" << endl;
        for (unsigned short int i = 0; i<lgTab-1; i++)
        {
            afficher(tab[i]) ;
            cout << ", "<< endl ;
        };
        afficher (tab[lgTab-1]);
        cout << endl <<  "} "<< endl;
    }
    else
    {
        cout << "tableau vide " << endl;
    }
}

void afficher (const int tab[],
               unsigned short int lgTab)
{
    if (lgTab > 0)
    {
        for (unsigned short int i = 0; i<=lgTab-1; i++)
        {
            cout << tab[i] << ", " ;
        };
        cout <<endl;
    }
    else
    {
        cout << "tableau vide " << endl;
    }
}
