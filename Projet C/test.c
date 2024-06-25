#include <stdio.h>
#include <stdlib.h>

// int main(int argc, char *argv[])
// {
//     int nombreDeGarcon= 12345, nombreDeFilles=45623, resultat=0;
//     nombreDeGarcon+nomDeFilles;
//     resultat= nombreDeGarcon+nomDeFilles;
//     printf("Nous avons comme résultat :%d", resultat)
// }

// int main()
// {
//     int nombreDeVie=0;
//     printf("QUEL EST VOTRE AGE ?\n");
//     scanf("%d", &nombreDeVie);
//     printf("Vous avez %d ans !\n", nombreDeVie);
//     return 0;
// }

int main(int argc, char *argv[])
{
    // définition des nombres à entrer dans la case
    int nombre1 = 0, nombre2 = 0, resultat = 0;

    // ajout de la case d'entrée des nombres
    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);
    printf("Entrez le deuxième nombre : "); // Utilisation de guillemets doubles
    scanf("%d", &nombre2); // Ajout d'un point-virgule ici

    // effectuer l'opération requise
    resultat = nombre1 + nombre2;

    // affichage des résultats
    printf("Le résultat est : %d\n", resultat);
    return 0;
}
