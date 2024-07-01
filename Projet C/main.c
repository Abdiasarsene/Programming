#include <stdio.h>
#include <stdlib.h>
#include "test.h"

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
    return 0;
}
