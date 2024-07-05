#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int bodycountdefinie =50;
    int bodycount=0;

    // mise en place
    printf("Quel est votre bodycount ?");
    scanf("%d",&bodycount);

    // définition de la condition
    if (bodycountdefinie>bodycount)
    {
        printf("Vous êtes un vrai pro !\n");
    }else{
        printf("Vous êtes un débutant !\n");
    }

    int *pointeursurbody = &bodycount; // je viens de créer un pointeur qui pointe sur la variable bodycount
    printf("%p", pointeursurbody); // là, j'affiche l'adreese de la variable bodycount contenu dans le pointeur. Cette adresse de la variable n'est que la valeur de kotre pointeur

    // Mais avec ceci : 
    printf("%p", *pointeursurbody); // je suis entrain d'afficher la valeur de la variable bodycount et non son adresse

    printf("%p", &pointeursurbody); // cet affichage va montrer l'adresse du pointeur
}