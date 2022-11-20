/* Fichier: cercle.c
* Calcul l'aire et le Perimetre d'un cercle
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#define PI 3.14159

float surface(float rayon) {
return(PI * rayon * rayon);
}

float perimetre(float rayon) {
return(2 * PI * rayon);
}

int main(){
    int rayon = 5; //On definit en dur le rayon

    float surf = surface(rayon); //On execute la fonction surface
    float peri = perimetre(rayon); //On execute la fonction perimetre
    printf("Aire = %f, Perimetre = %f", surf,peri); //On affiche les resultats

    return 0;
}