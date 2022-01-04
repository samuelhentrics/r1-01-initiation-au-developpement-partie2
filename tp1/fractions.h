/**  MODULE Fractions
     permettant la manipulation de nombres RATIONNELS
     Implémentation proche d'un Type Abstrait de Données (TAD) 
     ----------------------------------------------------------------------
But :
    En tant que TAD, il met à disposition :
    - Un type Fraction, composé :
        ...d'un numérateur, entier portant le signe de la fraction
        ...d'un dénominaeur > 0

    - Une constante FRACTIONNULLE = 0/1
    - Des primitives (= sous-programmes) permettant de :
        ...faire des calculs entre fractions : addition, soustraction, multiplication, division
        ...comparer des fractions : égal, supérieur, inférieur
        ...afficher à l'écran une fraction ou saisir une fraction au clavier

    Afin de se rapprocher de l'usage mathématique, toutes les primitives de calcul mathématique :
    - attendent en paramètre donnée des fractions irréductibles
    - produisent des fractions irréductibles.
    L'utilisation du type Fraction impose par ailleurs que le numérateur soit porteur du signe de la fraction et que le dénominateur est > 0.
---------

 Date de dernière modification : 17/11/2021
 Auteur : Samuel HENTRICS LOISTINE
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - td n°2
*/

#ifndef FRACTIONS_H
#define FRACTIONS_H

// TYPES

struct Fraction
{
     int num; // Numérateur de la fraction
     unsigned int den; // Dénominateur de la fraction
};

// CONSTANTES

const Fraction FRACTIONNULLE = {0,1};

// CONSTRUCTEURS

// OBSERVATEURS

// ACCESSEURS


int numerateur(Fraction frac);
// But : retourne le numérateur d'une fraction donnée

unsigned int denominateur(Fraction frac);
// But : retourne le dénominateur d'une fraction donnée


// OPERATEURS BINAIRES


Fraction additionner(const Fraction& frac1, const Fraction& frac2);
// But : retourne l'addition d'une fraction frac1 et d'une fraction frac2


// OPERATEURS DE COMPARAISON

// AUTRES PRIMITIVES

Fraction reduire(const Fraction& frac);
// But : retourner la fraction sous forme irréductible

unsigned int pgcd(int entierA, int entierB);
// But : retourner le pgcd de A et de B

// PRIMITIVES D'ENTREE/SORTIE

Fraction saisir();
// Retourne une fraction irréductible à partir de 2 valeurs entières saisies au clavier
// post-condition : la fraction retournée est une fraction irréductible normalisée

void afficher (Fraction frac);
// affiche à l'écran le contenu du paramètre fraction frac sous sa forme irréductible
// pré-condition : le paramètre frac est une fraction irréductible

#endif // FRACTIONS_H

