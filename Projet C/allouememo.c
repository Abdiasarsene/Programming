// Analysez un exemple concret d'utilisation
// On va programmer quelque chose qu'on a appris à faire il y a longtemps : demander l'âge de l'utilisateur et le lui afficher. La seule différence avec ce qu'on faisait avant, c'est qu'ici la variable va être allouée manuellement :

int main(int argc, char *argv[])
{
    int *memoireAllouee = NULL;

    memoireAllouee = malloc(sizeof(int)); // Allocation de la mémoire
    if (memoireAllouee == NULL)
    {
        exit(0);
    }

    // Utilisation de la mémoire
    printf("Quel age avez-vous ? ");
    scanf("%d", memoireAllouee);
    printf("Vous avez %d ans\n", *memoireAllouee);

    free(memoireAllouee); // Libération de mémoire

    return 0;
}