// Initiation en C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombre = 2;
    nombre%=6;
    printf("%d", nombre);

    int nombreDeGarcon= 12345, nombreDeFilles=45623, resultat=0;
    nombreDeGarcon+nombreDeFilles;
    resultat= nombreDeGarcon+nombreDeFilles;
    printf("Nous avons comme résultat :%d", resultat)

    int nombreDeFilles=200;
    if (nombreDeFilles >=   34 )
    {
        printf ("Vous etes majeur !");
    }
    else if ( nombreDeFilles ==0 ) 
    {
        printf ("Bon t'es pas trop jeune quand meme...");
    }
    else
    {
        printf ("Vous etes mineur !");
    }
    return 0; 
}

int main (int argc, char *argv[])
{
    int age =0;
    printf("Quel est votre age ?\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Vous etes majeur !");
    }
    else if (age == 0)
    {
        printf(' vous etes ni majeur ni mineur, mais plutôt un enfant')
    }
    else
    {
        printf("Vous etes mineur !");
    }
    return 0;

    // définition de la variable de choix de menu proposé par le restaurant
    int choixMenu=0;
    
    // affichage des menus proposés par le restaurant
    printf("Menu du restaurant\n\n");
    printf("1. royal cheese\n");
    printf("2. mc deluxe\n");
    printf("3. mc bacon\n");
    printf("4. big mac\n");
    printf("quel est votre choix?\n");

    printf('quel est votre menu, s\'il vous plait');
    scanf(%d, &choixMenu);
    
    // liste des menus servis dans le restaurant avec une codintion
    switch(choixMenu)
    {
        case 1:
            printf(' tu as choisi le menu royal cheese');
            break;
        case 2:
            printf(' tu as choisi le menu mc deluxe');
            break;
        case 3:
            printf(' tu as choisi le menu mc bacon');
            break;
        case 4:
            printf(' tu as choisi le menu big mac');
            break;
    return 0;

    int nombre=0;
    while (nombre!=47)
    {
        printf(' tapez votre nombre');
        scanf(%d,&nombre)
    }

    int age=0;

    while(age<30)
    {
        printf('quel est votre age');
        scanf(%d,&age);
        printf('finalement votre age est %d, ', age);
    }
    return 0;
    int tempsResttant =0, motDePasse;

    while( tempsResttant==3)
    {
        printf('taper votre code');
        scanf(%d,&motDePasse);
        printf(bienvenue dans notre site)
        tempsResttant++
    }
    }
}

#include <stdio.h>
#include <stdlib.h>
double aireRectangle(double largeur, double hauteur);

int main(int argc, char *argv[])
{
    int tempsRestant = 0; // Compteur de tentatives
    int motDePasse; // Variable pour stocker le mot de passe saisi

    // Boucle pour demander le mot de passe jusqu'à trois tentatives
    while (tempsRestant < 3)
    {
        printf("Taper votre code: "); // Demande à l'utilisateur de taper le code
        scanf("%d", &motDePasse); // Lit le code saisi

        // Vérification du mot de passe (par exemple, le bon mot de passe est 1234)
        if (motDePasse == 1234)
        {
            printf("Bienvenue dans notre site\n"); // Message de bienvenue
            break; // Sort de la boucle si le mot de passe est correct
        }
        else
        {
            printf("Mot de passe incorrect. Veuillez réessayer.\n"); // Message d'erreur
            tempsRestant++; // Incrémente le compteur de tentatives
        }
    }

    // Si le nombre maximum de tentatives est atteint
    if (tempsRestant == 3)
    {
        printf("Nombre maximum de tentatives atteint. Accès refusé.\n");
    }

    return 0; // Fin du programme

    for (int tempsRestant=0, tempsRestant<5, tempsRestant++)
    {
        printf("Taper votre code: ");
        scanf("%d", &motDePasse);
        if (motDePasse==1234)
        {
            printf("Bienvenue dans notre site\n");
            break;
        }
        else
        {
            printf("Mot de passe incorrect. Veuillez réessayer.\n");
        }
    }

    for( int age=0,age== signed char,age++)
    {
        printf('quel est votre age');
        scanf('%d', &age);
        if (age<18)
        {
            printf('vous pouvez entrer, c`\'est une jeu dédié aux enfants');
        }
        else
        {
            printf('vous ne pouvez pas entrer, c`\'est une jeu dédié aux moins de 18 ans')
        }
    }
}

{
    return largeur * hauteur;
}
