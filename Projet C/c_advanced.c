#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOM 50
#define TAILLE_INITIALE 3

// Structure pour représenter une personne
typedef struct {
    char nom[MAX_NOM];
    int age;
} Personne;

// Fonction pour comparer les âges (utilisée pour le tri)
int comparerParAge(const void* a, const void* b) {
    Personne* personneA = (Personne*)a;
    Personne* personneB = (Personne*)b;
    return (personneA->age - personneB->age);
}

// Fonction pour afficher une personne
void afficherPersonne(const Personne* p) {
    printf("Nom: %s, Age: %d\n", p->nom, p->age);
}

// Fonction pour rechercher une personne par nom
Personne* rechercherPersonne(Personne* base, int taille, const char* nom) {
    for (int i = 0; i < taille; i++) {
        if (strcmp(base[i].nom, nom) == 0) {
            return &base[i];
        }
    }
    return NULL;
}

// Fonction pour ajouter une personne à la base de données
Personne* ajouterPersonne(Personne* base, int* taille, int* capacite, const char* nom, int age) {
    if (*taille >= *capacite) {
        // Réallocation de la mémoire si nécessaire
        *capacite *= 2;
        base = realloc(base, *capacite * sizeof(Personne));
        if (base == NULL) {
            printf("Erreur de réallocation mémoire.\n");
            exit(1);
        }
    }

    // Ajouter la nouvelle personne
    strcpy(base[*taille].nom, nom);
    base[*taille].age = age;
    (*taille)++;
    
    return base;
}

int main() {
    int taille = 0;
    int capacite = TAILLE_INITIALE;
    Personne* baseDeDonnees = malloc(capacite * sizeof(Personne));
    if (baseDeDonnees == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    // Ajout de quelques personnes
    baseDeDonnees = ajouterPersonne(baseDeDonnees, &taille, &capacite, "Alice", 30);
    baseDeDonnees = ajouterPersonne(baseDeDonnees, &taille, &capacite, "Bob", 25);
    baseDeDonnees = ajouterPersonne(baseDeDonnees, &taille, &capacite, "Charlie", 35);

    // Afficher la base de données avant le tri
    printf("Base de données avant le tri:\n");
    for (int i = 0; i < taille; i++) {
        afficherPersonne(&baseDeDonnees[i]);
    }

    // Trier la base de données par âge
    qsort(baseDeDonnees, taille, sizeof(Personne), comparerParAge);

    // Afficher la base de données après le tri
    printf("\nBase de données après le tri par âge:\n");
    for (int i = 0; i < taille; i++) {
        afficherPersonne(&baseDeDonnees[i]);
    }

    // Recherche d'une personne par nom
    char nomRecherche[MAX_NOM] = "Bob";
    Personne* trouvee = rechercherPersonne(baseDeDonnees, taille, nomRecherche);

    if (trouvee != NULL) {
        printf("\nPersonne trouvée : ");
        afficherPersonne(trouvee);
    } else {
        printf("\nPersonne non trouvée.\n");
    }

    // Libérer la mémoire
    free(baseDeDonnees);

    return 0;
}
