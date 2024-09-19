#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Déclaration de la structure
typedef struct {
    char nom[50];
    int age;
    float taille[10];
} DossierSurCollecteDesDonneesSurEtudiantMaster;

// Fonction de sélection et initialisation du dossier, en passant un pointeur
void selectiondossier(DossierSurCollecteDesDonneesSurEtudiantMaster *dossier)
{
    /* Initialisation des membres de la structure */
    dossier->age = 16; // Utilisation de l'opérateur '->' pour accéder aux membres via un pointeur

    // Initialisation du tableau taille
    float tailles[10] = {1.5, 2, 2.3, 1.76, 1.67, 0}; // Tableau temporaire
    memcpy(dossier->taille, tailles, sizeof(tailles)); // Copier les valeurs dans le tableau de la structure

    // Initialisation de nom
    strcpy(dossier->nom, "totonomotooan"); // Utilisation de strcpy pour copier la chaîne
    int longueurNom = strlen(dossier->nom); // Calculer la longueur du nom
    printf("Longueur du nom: %d\n", longueurNom); // Afficher la longueur pour vérification
}

void selectiontableau()
{
    // Exemple d'utilisation de selectiondossier
    DossierSurCollecteDesDonneesSurEtudiantMaster dossier;
    selectiondossier(&dossier); // Appel en passant l'adresse de la structure

    // Affichage des données pour vérifier l'initialisation
    printf("Nom: %s\n", dossier.nom);
    printf("Age: %d\n", dossier.age);
    printf("Taille: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", dossier.taille[i]);
    }
    printf("\n");
}

int main() {
    selectiontableau();
    return 0;
}
