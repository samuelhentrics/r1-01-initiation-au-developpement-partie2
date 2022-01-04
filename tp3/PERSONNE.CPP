/**  CORPS MODULE Personne  
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

/* Corps des sous-programmes déclarés dans l'interface fractions.h
 */

// ACCESSEURS

// OPERATEURS BINAIRES

// AUTRES PRIMITIVES

// PRIMITIVES D'ENTREE/SORTIE

void afficher (const Personne& personne)
{
    cout << "  {" << personne.nom << ", " << personne.prenom << ", { " ;
    cout <<        personne.adresse.numRue << ", " ;
    cout <<        personne.adresse.nomRue << ", ";
    cout <<        personne.adresse.codePostal << ", ";
    cout <<        personne.adresse.nomVille << " }";
    cout << "}";
}