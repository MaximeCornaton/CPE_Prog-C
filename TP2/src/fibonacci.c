/* Fichier: fibonacci.c
* Afficher les n termes de fibonacci
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers


void affichage( int tableau[], int nbr) {
    for (int i = 0; i < nbr; i++) {
        printf("%d\n", tableau[i]); 
    }
}


int main() {

    int nbr_termes = 10;

    int fibonacci[nbr_termes]; //INitialisation de la suite
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i<nbr_termes; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2]; //Calcul du terme suivant
    }

    affichage(fibonacci, nbr_termes); //Affiche les n termes de la suite
    return 0;
}