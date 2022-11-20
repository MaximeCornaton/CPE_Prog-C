/* Fichier: boucles.c
* Affiche un triangle rectangle en fonction d'un compteur
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers

int main(){

int compteur = 15; 

//BOUCLE FOR
for (int i=0; i<compteur; i++){ //Lignes du triangle
    for (int j=0; j<i+1; j++){ //Colonnes du triangle
        if(j == 0 || i==compteur-1 || i == j){ //Si on est au bord du triangle on affiche des etoiles
            printf("* ");
        }else{
            printf("# "); //Sinon des #
        }
    }
    printf("\n");
}


//----//
printf("\n\n");

//BOUCLE WHILE
int lig = 1;
int col = 1;
printf("* "); //1ere ligne (pointe du haut du triangle)
printf("\n");
while(lig<compteur-1){ //lignes de la 2eme a l'avant derniere
    printf("* "); 
    while(col < lig){ //On met des # entre les colonnes 1 et avant derniere
        printf("# ");
        col++;
    }
    printf("* "); //etoile de fin des lignes
    printf("\n"); 
    
    lig++;
    col = 1;
} 
while(col<compteur+1){ //Derniere ligne
    printf("* "); //On met que des etoiles
    col++;
}
printf("\n");


return 0;
}