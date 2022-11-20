/* Fichier: grand_petit.c
* Operation sur un tableau de 100 entiers 
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#include <stdlib.h>

int plus_petit(int tab[]){
    int petit = tab[0];
    for(int i = 1; i < 100; i++){
        if(petit >= tab[i]){
            petit = tab[i];
        }
    }
    return petit;
}

int plus_grand(int tab[]){
    int grand = tab[0];
    for(int i = 1; i < 100; i++){
        if(grand <= tab[i]){
            grand = tab[i];
        }
    }
    return grand;
}

int main(){

    int nombres[100];

    int i;
    for(i=0;i<100;i++){
        nombres[i] = rand()%100;
    }

    printf("Le plus grand nombre est: %d\n",plus_grand(nombres));
    printf("Le plus petit nombre est: %d\n",plus_petit(nombres));

    return 0;
}