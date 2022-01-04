/**  MODULE bibTableaux 
     regroupe des sous-programmes applicables à des tableaux
     -------------------------------------------------------
But :
    Mettre à dispositon d'un programmeur des sous-programmes applicables aux tableaux.
    Conformes aux exercices des TD n°1 et et 3 de R1.01
    
    Il peut s'agit de tableaux d'entiers ou d'enregistrements de type Personne.
    Les tableaux manipulés doivent être triés par ordre décroissant de valeur.
    Dans le cas des tableaux d'enregistrements de type Personne, ils seront triés par ordre 
    décroissant de nom.
---------

 Date de dernière modification : xxxx
 Auteur : xxx
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - td n°2
*/

#ifndef BIBTABLEAUX_H
#define BIBTABLEAUX_H

// Primitives d'Entrée-Sortie
void afficher(const int tab[],
              unsigned short int lgTab);

// But : affiche à l'écran le contenu d'aun tableau tab contenant lgTab > 0 éléments
//       si lgTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')

// Recherches

void recherchePremiereOccDichoEntier(int tab[], unsigned short int lgTab, int val, unsigned short int &pos, bool &trouve);
// But : A partir d'un tab d'entier trié
//       Chercher la premiere occurence val dans tab grâce à lgTab
//       S'il existe une occurence, trouve prend vrai et pos prend la position de la premiere occurence
//       S'il n'existe aucune occurence, trouve prend faux

#endif // BIBTABLEAUX_H
