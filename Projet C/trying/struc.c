#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    /* data */
    char nom[10];
    int age, argentenbanque;
} information;

void initaliserinformation();

int main(int argc, char *argv[])
{
    information thomas;
    initaliserinformation(&thomas);
    
    return 0;
}

void initialiserinformation(information* amiral)
{
    amiral->age = 0;
    strcpy(amiral->nom, "");  // Mettre le nom à une chaîne vide
    amiral->argentenbanque = 0; // Initialiser également ce champ
}