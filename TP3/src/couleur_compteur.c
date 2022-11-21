/* Fichier: couleur_compteur.c
* Creer une strucure couleur_COMPTEUR pour compter les couleurs
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> 
#include <stdlib.h>

struct couleur{ // création d'une structure couleur 
    int R;
    int G;
    int B;
    int A;
};

struct couleur_compteur{
    int R;
    int G;
    int B;
    int A;
    int compteur = 0;
};

void couleur_compteur(struct couleur c[], struct couleur_compteur cc[]){
    for(int i=0; i< 100; i++){
        for(int j = 0; j < 100; j++){
            if(c[i].R == cc[j].R && c[i].G == cc[j].G && c[i].B == cc[j].B && c[i].A == cc[j].A){
                cc[j].compteur ++;
                break;
            }else{
                cc[i].R = c[i].R;
                cc[i].G = c[i].G;
                cc[i].B = c[i].B;
                cc[i].A = c[i].A;
                break;
            }
        }
    }
}

void afficher(struct couleur tab[]){
    for(int i=0; i< 100; i++){
        printf("%d ", tab[i].R);
        printf("%d ", tab[i].G);
        printf("%d ", tab[i].B);
        printf("%d ", tab[i].A);
        printf("\n");
    }
    
}

int main(void){
    // Déclaration de tableau en spécifiant la taille
    int nbr_couleur = 100;

    struct couleur tab[nbr_couleur];
    struct couleur_compteur tab_c[nbr_couleur];
    
    for (int i = 0; i < nbr_couleur; i++){
        tab[i].R = rand()%255 + 1; // nombre entre 1 et 255
        tab[i].G = rand()%255 + 1; // nombre entre 1 et 255
        tab[i].B = rand()%255 + 1; // nombre entre 1 et 255
        tab[i].A = rand()%255 + 1; // nombre entre 1 et 255

    }

    afficher(tab);
    couleur_compteur(tab, tab_c);

    return 0;
}
