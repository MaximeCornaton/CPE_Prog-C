/* Fichier: calcule.c
* calcul de factorielle
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#include <stdlib.h>
#include "factorielle.h"

// fonction factorielle
int factorielle (int num) {
    // si on doit faire factorielle 0 on affiche 1
    if (num == 0) {
        return 1;
    }
    // sinon on fait l'opération
    else {
        return (num * factorielle (num-1));
    }
}

int main(int argc, char ** argv){
    // on passe l'argument donné en commande en entier
    int n = atoi(argv[1]);
    // on affiche le résultat
    printf("Résultat : %d", factorielle(n));
    return 0;
}