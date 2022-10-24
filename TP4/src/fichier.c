/* Fichier: fichier.c
* ouvrir puis lire ou ecrire dans un fichier.
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#include <stdlib.h>
#include "fichier.h"


void lire_fichier(char *file_name){           // création de la fonction de lecture de fichier
    char content[1000] = "";
    FILE* fc = NULL;                          // on crée un pointeur de type FILE
    fc = fopen (file_name, "r");              // on ouvre le fichier en mode lecture
    while (fgets(content, 1000, fc) != NULL){ // tant que le pointeur voit quelque chose dans le fichier ...
        printf ("%s",content);                // ... on l'affiche.
    }
    fclose(fc);                               // on ferme le fichier
}


void ecrire_dans_fichier(char *file_name, char *message){ // création de la fonction d'écriture de fichier
    int size;
    FILE* fo = NULL;                                      // on crée un pointeur de type FILE
    fo = fopen (file_name, "a");                          // on ouvre le fichier en mode append pour ajouter des données 
    size = fputs(message, fo);                            // on ajoute la donnée "message" à la fin du fichier
    fclose(fo);                                           // on ferme le fichier
}

