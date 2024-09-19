#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *memoireAllouee = NULL;

    memoireAllouee = (int *)malloc(sizeof(int)); // Allocation de la mémoire
    if (memoireAllouee == NULL)
    {
        perror("Erreur d'allocation mémoire"); // Message d'erreur
        exit(1); // Indiquer une erreur
    }

    // Utilisation de la mémoire
    printf("Quel âge avez-vous ? ");
    scanf("%d", memoireAllouee);
    printf("Vous avez %d ans\n", *memoireAllouee);

    free(memoireAllouee); // Libération de la mémoire

    return 0;
}
