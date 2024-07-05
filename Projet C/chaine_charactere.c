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