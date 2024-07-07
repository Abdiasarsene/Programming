#ifndef exo_h
#define exo_h
#include <stdio.h>

/*définition d'une structure pour la collecte des données  sur les étudiants du master*/
typedef struct DossierSurCollecteDesDonneesSurEtudiantMaster;

struct DossierSurCollecteDesDonneesSurEtudiantMaster
{
    /*mes variables très importantes*/
    int age, taille,classe ;
    char sexe, couleurPrefere, nom, prenom;
    double moyenneSemestriel;
};
#endif