/* Fichier: sizeof.c
* Affiche la talle des différents types de base
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers

int main(){
    int sizeI = sizeof(int);
    int sizeIa = sizeof(int *);
    int sizeIaa = sizeof(int **);
    int sizeCa = sizeof(char *);
    int sizeCaa = sizeof(char **);
    int sizeCaaa = sizeof(char ***);
    int sizeFa = sizeof(float *);
    int sizeFaa = sizeof(float **);
    int sizeFaaa = sizeof(float ***);

    printf("- Taille des différents types - \n Int %i\n Int * %i\n Int ** %i\n Char * %i\n Char ** %i\n Char *** %i\n Float * %i\n Float ** %i\n Float *** %i\n", 
    sizeI,sizeIa, sizeIaa, sizeCa, sizeCaa, sizeCaaa, sizeFa, sizeFaa, sizeFaaa);
    return 0;
}