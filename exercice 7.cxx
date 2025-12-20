#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMagique, tentative;
    int min = 1, max = 100; // Plage de valeurs
    int tentatives = 0;
    
    // Initialisation du générateur aléatoire
    srand(time(NULL));
    
    // Génération d'un nombre aléatoire entre min et max
    nombreMagique = min + rand() % (max - min + 1);
    
    printf("=== Jeu du Nombre Magique ===\n");
    printf("Devinez le nombre magique (entre %d et %d) !\n\n", min, max);
    
    do {
        printf("Entrez un nombre entier : ");
        
        if (scanf("%d", &tentative) != 1) {
            printf("Veuillez entrer un nombre entier valide.\n");
            while (getchar() != '\n');
            continue;
        }
        
        tentatives++;
        
        if (tentative < nombreMagique) {
            printf("Trop petit !\n\n");
        } 
        else if (tentative > nombreMagique) {
            printf("Trop grand !\n\n");
        }
        
    } while (tentative != nombreMagique);
    
    printf("\nFélicitations ! Vous avez trouvé le nombre magique %d en %d tentative(s).\n", 
           nombreMagique, tentatives);
    
    return 0;
}