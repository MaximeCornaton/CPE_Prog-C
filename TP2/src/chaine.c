/* Fichier: chaine.c
* Effectue des opérations sur les chaines
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers

int lenght_chaine(char chaine[]){
    int compteur = 0;
    char c=chaine[compteur];
    while(c != '\0'){
        compteur++; 
        c = chaine[compteur];
    }
    return compteur;
}

void copy_chaine(char chaine[], char chaineCopy[]){
    for(int i=0; i<lenght_chaine(chaine); i++){
        chaineCopy[i] = chaine[i];
    }
}

void affichage(char chaine[]) {
    for (int i = 0; i < lenght_chaine(chaine); i++) {
        printf("%c", chaine[i]); 
    }
}

void concat_chaines(char chaine1[], char chaine2[], char chaineOut[]){
    int i = lenght_chaine(chaine1);
    copy_chaine(chaine1, chaineOut);
    for(int j = 0; j<lenght_chaine(chaine2); j++){
        chaineOut[i+j] = chaine2[j];
    }
}


int main(){

    char chaine1[] = "Juliette ";
	char chaine2[] = "et Maxime !";

    char chaineCopy[100];
    char chaineOut[100];
    
    printf("longueur : %i\n", lenght_chaine(chaine1));
    affichage(chaine1);
    affichage("\n");
    copy_chaine(chaine1, chaineCopy);
    affichage(chaineCopy);
    affichage("\n");

    concat_chaines(chaine1, chaine2, chaineOut);
    affichage(chaineOut);
    //printf("%i", lenght_chaine(chaineConcat));

    return 0;
}