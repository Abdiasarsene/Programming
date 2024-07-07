#include <stdio.h>
#include <stdlib.h>
#include "test.h"
#include "exo.h"

int main(int argc, char *argv[])
{
    double a = 0;
    double b = 0;
    int resultat=0;
    printf("Entrez un nombre a : \n");
    scanf("%lf", &a);
    printf("Entrez un nombre b : \n");
    scanf("%lf", &b);
    resultat = division(a,b);

    int temps=0;
    int secondePassee=0;
    int tempsPasse=0;

    printf("le temps passé dans le catalyseur");
    scanf("%d",&temps);
    printf("le temps passé dans le catalyseur");
    scanf("%d",&secondePassee);
    tempsPasse=distanceParcourue(temps, secondePassee);

    // définition des pointeurs
    int *pointeurSurtemps =&temps;
    int *pointeurSursecondePassee =&secondePassee;
    int *pointeurSurtempsPasse =&tempsPasse;

    // affichage des pointeurs
    printf("%d",pointeurSursecondePassee);
    printf("%d",*pointeurSursecondePassee);

    // petit exercice d'échauffement
    int premierCoups= 12;
    int deuxiemeCoups= 34;
    echange(&premierCoups, &deuxiemeCoups);
    printf("avant l'échange : premierCoups=%d, deuxiemeCoups= %d",premierCoups, deuxiemeCoups );
    
    printf("après l'échange : premierCoups=%d, deuxiemeCoups=%d", premierCoups, deuxiemeCoups);

    // DossierSurCollecteDesDonneesSurEtudiantMaster abdias;
    
    return 0;
}

