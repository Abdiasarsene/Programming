#include <stdio.h>

int main() {
    int bodycount = 10;           // Déclare une variable entière
    int *pointeursurbody = &bodycount;  // Déclare un pointeur sur int et l'initialise avec l'adresse de bodycount

    // Affiche l'adresse de la variable bodycount contenue dans le pointeur
    printf("%p\n", (void *)pointeursurbody);

    // Affiche l'adresse du pointeur
    printf("%p\n", (void *)&pointeursurbody);

    return 0;
}
