#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreAleatoire, tentative, nombreDeTentatives = 5;
    int nombreEntre;

    // Initialiser le générateur de nombres aléatoires avec le temps actuel
    srand(time(0));

    // Générer un nombre aléatoire entre 1 et 100
    nombreAleatoire = (rand() % 100) + 1;

    printf("J'ai choisi un nombre entre 1 et 100. Vous avez %d tentatives pour le deviner.\n", nombreDeTentatives);

    // Boucle pour les tentatives de l'utilisateur
    for (tentative = 1; tentative <= nombreDeTentatives; tentative++) {
        printf("Tentative %d: Entrez votre nombre: ", tentative);
        scanf("%d", &nombreEntre);

        if (nombreEntre == nombreAleatoire) {
            printf("Félicitations ! Vous avez deviné le nombre correct (%d) en %d tentatives.\n", nombreAleatoire, tentative);
            return 0; // Fin du programme si le nombre est deviné correctement
        } else if (nombreEntre < nombreAleatoire) {
            printf("Le nombre est trop bas.\n");
        } else {
            printf("Le nombre est trop haut.\n");
        }
    }

    // Si toutes les tentatives sont utilisées et le nombre n'est pas deviné
    printf("Désolé, vous n'avez pas deviné le nombre. Le nombre correct était %d.\n", nombreAleatoire);

    return 0;
}


#include <stdio.h>

int main() {
    int age;

    // Boucle for pour demander l'âge
    for (int i = 0; i < 5; i++) {
        printf("Quel est votre âge : ");
        scanf("%d", &age);

        if (age < 18) {
            printf("Vous pouvez entrer, c'est un jeu dédié aux enfants.\n");
        } else {
            printf("Vous ne pouvez pas entrer, c'est un jeu dédié aux moins de 18 ans.\n");
        }
    }

    return 0;
}



#include <stdio.h>

int main() {
    int age;

    // Boucle infinie pour demander l'âge jusqu'à ce qu'un nombre négatif soit entré
    while (1) {
        printf("Veuillez entrer votre âge (entrez un nombre négatif pour quitter) : ");
        scanf("%d", &age);

        if (age < 0) {
            printf("Programme terminé.\n");
            break; // Sort de la boucle si un nombre négatif est entré
        }

        if (age >= 18) {
            printf("Vous êtes majeur.\n");
        } else {
            printf("Vous êtes mineur.\n");
        }
    }

    return 0;
}
