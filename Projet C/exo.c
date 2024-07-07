#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo.h"

int main(int argc, char *argv[])
{
    DossierSurCollecteDesDonneesSurEtudiantMaster dossier;

    /* Initialisation des membres de la structure */
    dossier.age = 12;
    strcpy(dossier.nom, "toto");

    /* Affichage pour vérifier les valeurs */
    printf("Age: %d\n", dossier.age);
    printf("Nom: %s\n", dossier.nom);

    return 0;
}
