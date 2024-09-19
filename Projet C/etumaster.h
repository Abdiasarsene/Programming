#ifndef EXO_H
#define EXO_H
#include <stdio.h>

/* Définition d'une structure pour la collecte des données sur les étudiants du master */
typedef struct
{
    int age;
    double taille[10];
    int classe;
    char sexe;
    char couleurPreferee[20];
    char nom[50];
    char prenom[50];
    double moyenneSemestrielle;
} DossierSurCollecteDesDonneesSurEtudiantMaster;

typedef struct
{
    int age;
    char classe[50];
    double taille;
    double moyenneDeClasse;
} TableauxDonneesNumerique;

#endif /* EXO_H */
void selectiondosisier();
void selectiontableau();