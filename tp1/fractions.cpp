/**  CORPS MODULE Fractions  
     ------------------------ */

/* inclusions
   ----------*/
#include "fractions.h"

#include <iostream>
using namespace std;

/* Types - Variables - Constantes propres au corps
 */

/* Déclarations des sous-programmes utilisés dans ce corps
 */

/* Corps des sous-programmes déclarés dans l'interface fractions.h
 */

// ACCESSEURS

int numerateur(Fraction frac)
{
     return frac.num;
}

unsigned int denominateur(Fraction frac)
{
     return frac.den;
}

// OPERATEURS BINAIRES

Fraction additionner(const Fraction &frac1, const Fraction &frac2)
{
     // VARIABLES

     Fraction frac; // Fraction résultante de l'addition de frac1 et frac2

     // TRAITEMENTS

     // frac1, frac2 >> calculerFractionNonIrreductible >> frac
     frac.num = frac1.num * frac2.den + frac2.num * frac1.den;
     frac.den = frac1.den * frac2.den;

     // frac >> retournerAddition >> ()
     return reduire(frac);
}

// AUTRES PRIMITIVES

Fraction reduire(const Fraction &fraction)
{
     // VARIABLES
     Fraction fractionReduite; // Fraction contenant la fraction irreductible de frac
     unsigned int pgcdFrac;    // PGCD de la fraction
     // TRAITEMENTS

     // frac, FRACTIONNULLE >> testerFractionNulle >> fractionReduite
     if (fraction.num == 0)
     {
          fractionReduite = FRACTIONNULLE;
     }
     else
     {
          // frac >> calculerPGCD >> pgcdFrac
          pgcdFrac = pgcd(fraction.num, fraction.den);

          // frac, pgcdFrac >> calculerFractionReduite >> fractionReduite
          fractionReduite.num = fraction.num / pgcdFrac;
          fractionReduite.den = fraction.den / pgcdFrac;
     }

     return fractionReduite;
}

unsigned int pgcd(int entierA, int entierB)
{
     // VARIABLES
     unsigned short int a;
     unsigned short int copieDeA;
     unsigned short int b;
     unsigned short int reste;
     unsigned short int lePgcd;

     // TRAITEMENTS

     // entierA, entierB >> calculerValeursAbsolues >> a, b
     a = abs(static_cast<unsigned short int>(entierA));
     b = abs(static_cast<unsigned short int>(entierB));

     // a,b >> calculPGCD >> lePgcd
     if (a == 0)
     {
          lePgcd = b;
     }
     else if (b == 0)
     {
          lePgcd = a;
     }
     else
     {
          // a,b >> pgcdDeDeuxNombresSuperieurA0 >> lePgcd
          if (a < b)
          {
               copieDeA = a;
               a = b;
               b = copieDeA;
          }
          // a, b >> algorithmeEuclide >> lePgcd
          while (true)
          {
               reste = a % b;

               if (reste == 0)
               {
                    lePgcd = b;
                    break;
               }

               // b, reste >> tourSuivant >> a,b
               a = b;
               b = reste;
          }
     }

     // lePgcd >> retournerLePgcd >> ()
     return lePgcd;
}

// PRIMITIVES D'ENTREE/SORTIE

Fraction saisir()
{
     return FRACTIONNULLE;
}

void afficher(Fraction frac)
{
     cout << " " << frac.num << "/" << frac.den << " ";
}

/* Corps des sous programmes déclarés dans ce corps
 */
