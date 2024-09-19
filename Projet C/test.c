#include <stdio.h>
#include <stdlib.h>

double division(double a, double b)
{
    return a / b;
}

int distanceParcourue(int temps, int secondePassee)
{
    return temps * secondePassee;
}

void echange(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    double a = 10.0, b = 2.0;
    int temps = 5, secondePassee = 60;
    int x = 1, y = 2;

    printf("Division: %f\n", division(a, b));
    printf("Distance parcourue: %d\n", distanceParcourue(temps, secondePassee));

    printf("Avant échange: x = %d, y = %d\n", x, y);
    echange(&x, &y);
    printf("Après échange: x = %d, y = %d\n", x, y);

    return 0;
}
