/* Fichier: couleurs.c
* Creer une strucure couleur
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> 

struct couleur{ // création d'une structure couleur 
    int R;
    int G;
    int B;
    int A;
};

int main(void){
    // Déclaration de tableau en spécifiant la taille
    struct couleur tab[10];
    for (int i = 0; i < 10; i++){
        tab[i].R = 0xff;
        tab[i].G = 0x50;
        tab[i].B = 0x68;
        tab[i].A = 0;

    }
 
    return 0;
}
