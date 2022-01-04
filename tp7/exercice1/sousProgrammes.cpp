#include "sousProgrammes.h"
#include "pile.h"
#include "fichierTexte.h"
#include <iostream>
using namespace std;

void afficherFichierTexte(string nomSysFic)
{
      // Variables
      UnFichierTexte monFichier; // Fichier texte qui sera affiché
      string maLigne; // Ligne courante du fichier texte
      bool fdf; // Indicateur de fin de fichier 

      // Traitements
      // nomSys >> preparerFichier >> monFichier (ouvert en consultation)
      associer(monFichier, nomSysFic);
      ouvrir(monFichier, consultation);

      // monFichier >> parcoursComplet >> ()
      while (true)
      {
            lireLigne(monFichier, maLigne, fdf);

            if (fdf)
            {
                  break;
            }
            
            cout << maLigne << endl;
      }
      
      fermer(monFichier);
}


void afficherInverseFichierTexte(string nomSysFic)
{
      // Variables
      UnePile pileLignes; // Pile contenant toutes les lignes du fichier
      UnFichierTexte monFichier; // Nom logique du fichier
      string uneLigne; // Ligne courante du fichier
      bool fdf; // Indicateur de fin de fichier

      // Traitements

      // nomSysFic >> preparerFichier >> monFichier
      associer(monFichier, nomSysFic);
      ouvrir(monFichier, consultation);

      // pileLignes >> initialiserPile >> pileLignes
      initialiser(pileLignes);

      // pileLignes, monFichier >> afficherInverseFichier
      // *** monFichier, unePhrase, fdf >> empilerLigneDansPile >> pileLignes
      while (true)
      {
            lireLigne(monFichier, uneLigne, fdf);
            if (fdf)
            {
                  break;
            }
            empiler(pileLignes, uneLigne);
      }
      
      // *** pileLignes >> depilerPile >> ()
      while (true)
      {
            if (estVide(pileLignes))
            {
                  break;
            }
            depiler(pileLignes, uneLigne);
            cout << uneLigne << endl;
      }
      
      // monFichier >> fermerFichier >> ()
      fermer(monFichier);


}

void etendreFichierTexte (string nomSysFicSource, string nomSysFicCible)

{
      // Variables
      UnFichierTexte fichierSource; // Fichier source qui va ajouter son contenu à celui du fichier cible
      UnFichierTexte fichierCible; // Fichier cible qui va obtenir à sa suite le contenu du fichier source
      string maLigne; // Ligne courante du fichier source
      bool fdf; // Indicateur de fin de fichier

      // Traitements

      // nomSysFicSource, nomSysFicCible >> preparerFichiers >> fichierSource, fichierCible
      // *** associerFichiers
      associer(fichierSource, nomSysFicSource);
      associer(fichierCible, nomSysFicCible);
      // *** ouvrirFichiers
      ouvrir(fichierSource, consultation);
      ouvrir(fichierCible, extension);

      // fichierSource, fichierCible >> ajouterContenuSourceVersCible >> ()
      while (true)
      {
            lireLigne(fichierSource, maLigne, fdf);
            if (fdf)
            {
                  break;
            }
            ecrireLigne(fichierCible, maLigne);
      }

      fermer(fichierSource);
      fermer(fichierCible);
      
}

void viderFichierTexte(string nomSysFic)
{
      // Variables
      UnFichierTexte monFichier; // Nom logique du fichier qui sera réinitalisé

      // Traitements
      associer(monFichier, nomSysFic);
      ouvrir(monFichier, creation);
      fermer(monFichier);
}