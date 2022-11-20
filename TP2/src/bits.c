/* Fichier: bits.c
* Verifie que les 4eme et 20eme bits de gauche sont 1.
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers


int main() {

int nombre = 0b10000100000000001000;
int masque = 0b10000000000000001000;

if((nombre & masque) == masque){
    printf("1\n");
}else{
     printf("0\n");
}
//printf("%i, %i\n",(nombre & masque), masque);

return 0;

}