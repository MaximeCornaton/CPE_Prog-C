/* Fichier: tri.c
* Tri d'un tableau de 100 entiers 
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#include <stdlib.h>

void tri(int tab[]){
    for(int i=0; i< 100; i++){ 
        for (int j = 0; j < 99; j++){
            if (tab[j] > tab[j+1]){
                int a = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = a;
            }       
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

    int i;
    for(i=0;i<100;i++){
        nombres[i] = rand()%100;
    }

    afficher(nombres);
    tri(nombres);
    afficher(nombres);


    return 0;
}