/* Fichier: chercher.c
* Recherche d'un valeur dans un tableau de 100 entiers 
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#include <stdlib.h>

void chercher(int tab[], int val){
    for(int i = 0; i < 100; i++){  
        if(tab[i] == val){
            printf("Entier Present \n");
        }
    }
}   

void afficher(int tab[]){
    for(int i=0; i< 100; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(){

    int nombres[100];
    int val = 60;

    int i;
    for(i=0;i<100;i++){
        nombres[i] = rand()%100;
    }

    //afficher(nombres);
    chercher(nombres, val);
}