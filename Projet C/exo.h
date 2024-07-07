#ifndef EXO_H
#define EXO_H
#include <stdio.h>

/* Définition d'une structure pour la collecte des données sur les étudiants du master */
typedef struct
{
    int age;
    int taille;
    int classe;
    char sexe;
    char couleurPreferee[20];
    char nom[50];
    char prenom[50];
    double moyenneSemestrielle;
} DossierSurCollecteDesDonneesSurEtudiantMaster;

#endif /* EXO_H */
