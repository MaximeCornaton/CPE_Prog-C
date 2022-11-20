/* Fichier: puissance.c
* eleve un nombre a la puissance d'un second (sans utiliser la fonction pow)
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers


int main() {

    int a = 2;
    int b = 10;
    int resultat = 1;
    

    for(int i = 0 ; i<b ; i++){
        resultat = resultat * a; //on mutiplie a par lui meme b fois
    }
    
    printf("%i\n", resultat);


return 0;

}