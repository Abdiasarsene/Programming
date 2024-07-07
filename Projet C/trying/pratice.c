// importation des bibliothèques
#include <stdio.h>
#include <stdlib.h>

// debut des commandes 
int main(void)
{
    int age=0,  i=0;
    double taille=0;

    // posez les questions
    printf("quel est votre age, svp");
    scanf("%d",&age);

    printf("entrez également votre taillen, je vous en prie");
    scanf("%d",&taille);
    
    // poser la condition pour exécuter le programme
    for (i=0; i<0; i++)
    {
        if (age<18 && taille<1,5)
        {
            printf( "vous êtes pris dans l'équipe première pour votre seconde étape");
        }
        else if (18<= age <=25 && taille<1,5)
        {
            printf("bienvenu dans l'équipe deux");
        }
        else if (18<= age <=25 && 1,5<= taille <=1,75)
        {
            printf(" vous faites dans l'équipe trois");
        }
        else if(taille<=2)
        {
            printf("vous êtes sélectionnés pour la dernière partie du jeu");
        }
        else{
            printf("navré, on se verra l'an prochain pour des challenges plus funs");
        }
    }
    return 0;
}