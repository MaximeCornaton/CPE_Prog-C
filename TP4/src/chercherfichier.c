/* Fichier: chercherfichier.c
* cherche une phrase dans un fichier
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#include <string.h>

int main(){
    
    // On récupère le nom du fichier
    char filename[100];           
    printf("Nom du fichier : ");
    scanf("%s", filename);
    
    // On récupère la phrase à chercher
    char phrase[1000];
    printf("Phrase à chercher : ");
    scanf(" %32[^\n]", phrase);
    
    // On ouvre le fichier
    FILE* fichier = NULL;
    fichier = fopen(filename, "r");
    
    int presence = 0;
    
    // On vérifie que le fichier existe bien
    if (fichier == NULL){
        printf("Le fichier n'existe pas");
    }
    
    else{
        int taille = 1000;
        char ligne[taille];
        int num_ligne = 1;
        
        // on parcourt chaque ligne du fichier
        while (fgets(ligne, taille, fichier) != NULL){
            int compteur = 0;
            int i, j;

            // on parcourt chaque caractère de la ligne et on le compare à la phrase renseignée
            for (i = 0; i < strlen(ligne); i++){
                int verif = 0;
                for (j = 0; j < strlen(phrase); j++){
                    if (phrase[j] == ligne[i+j]){
                        verif = verif+1;
                    }
                    else{
                        break;
                    }
                }

                // on ajoute 1 au nombre de fois où apparait la phrase
                if (verif == strlen(phrase)){
                    compteur++;
                }
            }

            // si la phrase apparait au moins une fois on affiche les résultats
            if (compteur > 0){
                printf("ligne %d : %d fois\n", num_ligne, compteur);
                presence++;
            }
            num_ligne++;
        }
    }

    // si la phrase n'apparait pas dans le fichier
    if (presence == 0){
        printf("La phrase n'est pas dans le fichier");
    }
    
    // on ferme le fichier
    fclose(fichier);
    
}