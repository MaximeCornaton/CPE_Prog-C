/* Fichier: conditions.c
* Affiche des numeros <= 1000 selon 3 conditions differentes
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers

int main(){
    int i = 0;

    while(i<=1000){
        if(i%2 == 0 && i%15 ==0){
            printf("%i - Div par 2 et 15\n",i);
        }else if(i%103 == 0 || i%107 == 0){
            printf("%i - Div par 103 ou 107\n",i);
        }else if((i%7 == 0 || i%5 == 0) && i%3 != 0){
            printf("%i - Div par 5 et 7 mais pas 3\n",i);
        }
        i++;
    }


    while(i<=1000){
        
        if (i%2 != 0) {
            i++;
        continue;
        }
        if (i%15 == 0) {
            printf("%i\n",i);
        }

        i++; 
    
    };

    return 0;
}