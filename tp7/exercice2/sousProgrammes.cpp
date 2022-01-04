#include <iostream>
#include "fichierTexte.h"
#include "sousProgrammes.h"
using namespace std;

void produireMoyenne (string nomSysFic)
{
    // Variables
    UnFichierTexte monFichier; // Nom logique du fichier
    bool fdf; // Indicateur de fin de fichier
    float valeur; // Valeur courante du fichier
    float somme; // Somme de toutes les valeurs
    unsigned int nbJours; // Nombre de jours dans le fichier
    float moyenne; // Moyenne calculée

    // Traitements

    // nomSysteme >> preparerFichier >> monFichier
    associer(monFichier, nomSysFic);
    ouvrir(monFichier, consultation);

    // monFichier >> sommeDonnees >> somme, nbJours
    somme = 0;
    nbJours = 0;
    while (true)
    {
        lireMot(monFichier, valeur, fdf);
        if (fdf)
        {
            break;
        }
        somme += valeur;
        nbJours++;
    }
    
    // () >> afficherMoyenneSiPossible >> ()
    if (nbJours!=0)
    {
        // somme, nbJours >> calculerMoyenne >> moyenne
        moyenne=somme/nbJours;
        // moyenne >> afficherMoyenne >> ()
        cout << "Moyenne : " << moyenne << endl;
    }
    else{
        cout << "Impossible de calculer, le fichier est vide.";
    }
    
    

    // monFichier >> fermerFichier >> ()
    fermer(monFichier);


    

}
