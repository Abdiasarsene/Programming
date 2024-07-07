#include <stdio.h> 
#include <stdlib.h>
#define TAILLE()    printf("bienvenu chez vous");\
                    printf("nous vous avons pris tout le temps pour cette préparation, daignez bien l'honorer pour nous");\
                    printf("allez, faites comme chez vous, d\'ailleurs, c\'est chez vous et vous avez tous les droits");
#define NOUVELLEAMIE(nombrefille)   if (nombrefille==1000)\
                            printf("le nombre de filles prévu est atteint, ne prenez plus de filles");\ 
                                else\
                            printf("continuez encore le recrutement");

/* une autre manière de définir les conditions en langage préprocesseur*/
// #if (nombrefille==1000)
//     printf("le nombre de filles prévu est atteint, ne prenez plus de filles");\
// #endif



/* Avec les "\", il est possible d'écrire le nombre de fonction possible dans notre programme*/

int main()
{
    TAILLE();
    NOUVELLEAMIE(560);
    return 0;
}

// définition d'une structure qui enregristre kes coordonnées des etudiantes en master data science



