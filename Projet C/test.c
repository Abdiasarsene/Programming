#include <stdio.h>
#include <stdlib.h>

int division( double a, double b)
{
    return a/b;
}
int distanceParcourue ( int temps, int secondePassee)
{
    return temps*secondePassee;
}

int echange (int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}