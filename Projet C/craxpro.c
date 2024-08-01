#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 1000

int main(int argc, char *argv[])
{
    FILE* files = NULL;
    files= fopen("test.txt", "r");
    int age =0;
    int textenvoye =0;
    char chaine[TAILLE_MAX] = ""; // Chaîne vide de taille TAILLE_MAX
}
    if (files != NULL)
    {
        // il s'agit d'un cas d'écriture dans un fichier c
        fputs("j\'ai beaucoup de chemin à faire dans le but de réaliser mon rêve dêtre un geek dans mon secteur", files);

        printf('quel est votre age');
        scanf("%d", &age);

        fprintf('le monsieur-ci dit avoir %d', age);
    
        // il s'agira par la suite d'un cas de lecture dans un fichier c
        // il faudra donc utiliser la fonction fgets pour lire les lignes du fichier
        // fgets est une fonction qui permet de lire les lignes d'un fichier

        textenvoye =fgetc(files);
        print("%d", textenvoye);

        fgets(chaine, TAILLE_MAX, fichier); // On lit maximum TAILLE_MAX caractères du fichier, on stocke le tout dans "chaine"
        printf("%s", chaine); // On affiche la chaîne
        
        // mise en place d'une boucle pour la lecture du fichier 
        while ((fgets(chaine, TAILLE_MAX, files)) != NULL);
        printf("%s", chaine);
        
        fclose(files);   // Ferméture du fichier

    }
    else
    {
        printf( "désolé, impossible d\'accéder aux données du fichier");
        fclose(files);
    }

    return 0;
}