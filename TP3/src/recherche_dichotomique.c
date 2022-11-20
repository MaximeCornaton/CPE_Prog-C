/* Fichier : recherche_dichotomique.c
* recherche_dichotomique dans un tableau trié
* auteurs : CARPENTIER Juliette & CORNATON Maxime
*/

# include <stdio.h> 
#include <stdlib.h>

void dicho(int tab[], int entier){
    int al = rand()%100;
    for(int i=0; i< 100; i++){ 
        if(tab[al] == entier){
            printf("entier présent");
            break;
        }else{
            if(tab[al] >entier){
                al = (int) (al/2);
            }else{
                al = (int) (al+ al/2);
            }
        }
    }
    
}

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

int main(){

    int nombres[100];
    int recherche = 50;

    int i;
    for(i=0;i<100;i++){
        nombres[i] = rand()%100;
    }

    tri(nombres);
    dicho(nombres, entier);

    return 0;
}