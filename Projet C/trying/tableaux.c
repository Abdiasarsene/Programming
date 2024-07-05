#include <stdio.h>
#include <stdlib.h>


int sommeTableau(int tableau[], int tailleTableau);

double moyenneTableau(int tableau[], int tailleTableau)
{
    int somme = sommeTableau(tableau, tailleTableau);
    return somme / tailleTableau;
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for (int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }

    return 0;
}