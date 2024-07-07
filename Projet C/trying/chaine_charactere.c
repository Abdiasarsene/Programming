#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //  écrivons le mot salutation avec du char
    char lettres[11];
    lettres[0] = 'S';
    lettres[1] = 'a';
    lettres[2] = 'l';
    lettres[3] = 'u';
    lettres[4] = 't';
    lettres[5] = 'a';
    lettres[6] = 't';
    lettres[7] = 'i';
    lettres[8] = 'o';
    lettres[9] = 'n';
    lettres[10] = '\0';
    printf("%s\n", lettres);

    char prenom[100]= "Jean-Marie";

    printf("merci beaucoup, monsieur %s\n", prenom);
    
    return 0;
}
int main()
{
    char chaine[]="bonsoir les amis, how's it going\n";
    int longeurdechaine=0;
    char *pointeursurchaine=NULL;
    pointeursurchaine=&chaine;

    printf("%s", chaine);
    longeurdechaine = strlen(chaine);
    printf("la longeur de la chaîne est %d\n",longeurdechaine);
    printf("%p",pointeursurchaine);

    return 0;
}

int main(int argc, char *argv[])
{
    /* On crée une chaîne "chaine" qui contient un peu de texte
    et une copie (vide) de taille 100 pour être sûr d'avoir la place
    pour la copie */
    
    char chaine[] = "Texte", copie[100] = {0};

    strcpy(copie, chaine); // On copie "chaine" dans "copie"

    // Si tout s'est bien passé, la copie devrait être identique à chaine
    printf("chaine vaut : %s\n", chaine);
    printf("copie vaut : %s\n", copie);

    return 0;
}

// la concaténation
int main(int argc, char *argv[])
{
    const char nom = "Mathieu";
    char chaine[]="wassup, bro, ";

    strcat(chaine, nom);
    print("%s\n", chaine);
}

// la comparaison
int main(int argc, char *argv[])
{
    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";

    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
        printf("Les chaines sont identiques\n");
    }
    else
    {
        printf("Les chaines sont differentes\n");
    }

    return 0;
}

// la recherche 
int main(int argc, char *argv[])
{
    char chaine[] = "Texte de test", *suiteChaine = NULL;

    suiteChaine = strchr(chaine, 'd');
    if (suiteChaine != NULL) // Si on a trouvé quelque chose
    {
        printf("Voici la fin de la chaine a partir du premier d : %s", suiteChaine);
    }

    return 0;
}

// recherche du prmeier charactère dans une liste
int main(int argc, char *argv[])
{
    char *suiteChaine;

    // On cherche la première occurrence de x, d ou s dans "Texte de test" 
    suiteChaine = strpbrk("Texte de test", "xds");

    if (suiteChaine != NULL)
    {
        printf("Voici la fin de la chaine a partir du premier des caracteres trouves : %s", suiteChaine);
    }

    return 0;
}

// recherche d'une chaîne dans une autre
int main(int argc, char *argv[])
{
    char *suiteChaine;

    // On cherche la première occurrence de "test" dans "Texte de test" :
    suiteChaine = strstr("Texte de test", "test");
    if (suiteChaine != NULL)
    {
        printf("Premiere occurrence de test dans Texte de test : %s\n", suiteChaine);
    }

    return 0;
}

// récrire dans une chapine
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char chaine[100];
    int age = 15;

    // On écrit "Tu as 15 ans" dans chaine
    sprintf(chaine, "Tu as %d ans !", age);

    // On affiche chaine pour vérifier qu'elle contient bien cela :
    printf("%s", chaine);

    return 0;
}