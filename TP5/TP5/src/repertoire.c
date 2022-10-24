/* Fichier: repertoire.c
* Affiche les noms de fichiers d'un repertoire
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include "repertoire.h"
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

//pour mkdir on a besoin de ca et #include <sys/types.h>
#include <sys/stat.h>

//pour comparer chaine de caracteres
#include <string.h>


int main()
{   
    char* folder = "../src";
    //scanf("%s", folder);
    //lire_dossier(folder);
    //lire_dossier_recursif(folder);
    lire_dossier_iteratif(folder);

    return 0;
}


void lire_dossier(char* folder)
{
    //on ouvre le dossier
    DIR *dirp = opendir(folder);

    //creation dossier si pas existant
    if (dirp == NULL) 
    {
        mkdir(folder,0777);
    }

    struct dirent * ent;

    while(1) 
    {
        ent = readdir(dirp);
        if (ent == NULL) 
        {
        break;
        }
        printf("%s\n", ent->d_name);
    }

    closedir(dirp);
}


void lire_dossier_recursif(char* folder)
{
    //on ouvre le dossier
    DIR *dirp = opendir(folder);

    //creation dossier si pas existant
    if (dirp == NULL) 
    {
        mkdir(folder,0777);
    }

    struct dirent * ent;

    while(1) 
    {
        ent = readdir(dirp);
        if (ent == NULL) 
        {
        break;
        } 
        else if (ent->d_type == DT_DIR && strcmp(ent->d_name, ".") && strcmp(ent->d_name, "..") ) //Si c'est un dossier
        {   
            //printf("%s", ent->d_name);
            printf("►\n");
            lire_dossier_recursif(ent->d_name);
            printf("► ");
        }
        //Si c'est un fichier
        printf("%s\n", ent->d_name);
        
        
    }

    closedir(dirp);
}


void lire_dossier_iteratif(char* folder)
{
    //on ouvre le dossier
    DIR *dirp = opendir(folder);

    //creation dossier si pas existant
    if (dirp == NULL) 
    {
        mkdir(folder,0777);
    }

    struct dirent * ent;

    while(1) 
    {
        ent = readdir(dirp);
        if (ent == NULL) 
        {
        break;
        }
        else if (ent->d_type == DT_DIR && strcmp(ent->d_name, ".") && strcmp(ent->d_name, "..") ) //Si c'est un dossier
        {   
            printf("►\n");

            DIR *dirp2 = opendir(ent->d_name);
            struct dirent * ent2;
            while(1)
            {
            ent2 = readdir(dirp2);
            if (ent2 == NULL) 
            {
            break;
            }
            printf("%s\n", ent2->d_name);
            }

            
            printf("► ");
        }
        printf("%s\n", ent->d_name);
    }

    closedir(dirp);
}