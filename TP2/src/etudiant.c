/* Fichier : etudiant.c
* gères les notes de cinq étudiants en utilisant seulement des tableaux
* auteurs : CARPENTIER Juliette & CORNATON Maxime
*/

# include <stdio.h> 

void add_mult_etudiants (char** save_etud, int nbr_etudiants, char* nom[], char* prenom[], char* adresse[], int* module1, int* module2){
    for (int i = 0; i < nbr_etudiants; i++){
        save_etud[i][0] = nom[i];
        save_etud[i][1] = prenom[i];
        save_etud[i][2] = adresse[i];
        save_etud[i][3] = module1[i];
        save_etud[i][4] = module2[i];

    }
}

void affichage (char** chaine, int nbr1, int nbr2){
    for (int i = 0; i < nbr1; i++){
       for (int j = 0; j < nbr2; j++){
            printf ("%c", chaine[i][j]);
       }
       printf ("\n");
    }
}

int main(){

    int nombre_etudiants = 5;
    int nombre_parametre = 5;
    char* details_etu[nombre_etudiants];

    char* noms[] = {"Carpentier", "Cornaton", "Barriquand", "Davaux", "Lajugie"};
    char* prenom[] = {"Juliette", "Maxime", "Valentin", "Florian", "Rodolphe"};
    char* adresse[] = {"12T", "19", "12T", "100", "97"};
    int module1[] = {18, 3, 2, 8, 12};
    int module2[] = {15, 8, 7, 11, 13};
    
    add_mult_etudiants(details_etu,nombre_etudiants,noms,prenom,adresse,module1,module2);
    affichage (details_etu, 5, 5);
    return 0;

}