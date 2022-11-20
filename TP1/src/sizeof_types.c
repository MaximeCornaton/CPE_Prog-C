/* Fichier: sizeof_types.c
* Affiche la talle des différents types de base
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers

int main(){
    int sizeC = sizeof(char);
    int sizeUC = sizeof(unsigned char);
    int sizeS = sizeof(short);
    int sizeUS = sizeof(unsigned short);
    int sizeI = sizeof(int);
    int sizeUI = sizeof(unsigned int);
    int sizeLI = sizeof(long int);
    int sizeULI = sizeof(unsigned long int);
    int sizeLLI = sizeof(long long int);
    int sizeULLI = sizeof(unsigned long long int);
    int sizeF = sizeof(float);
    int sizeD = sizeof(double);
    int sizeLD = sizeof(long double);

    printf("- Taille des différents types - \n Char %i\n Unsigned Char %i\n Short %i\n Unsigned Short %i\n Int %i\n Unsigned Int %i\n Long Int %i\n Unsigned Long Int %i\n Long Long Int %i\n Unsigned Long Long Int %i\n Float %i\n Double %i\n Long Double %i", 
    sizeC,sizeUC, sizeS, sizeUS, sizeI, sizeUI, sizeLI, sizeULI, sizeLLI, sizeULLI, sizeF, sizeD, sizeLD);
    return 0;
}