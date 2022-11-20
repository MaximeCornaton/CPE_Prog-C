/* Fichier : etudiant2.c
* gères les notes de cinq étudiants en utilisant les structures
* auteurs : CARPENTIER Juliette & CORNATON Maxime
*/

# include <stdio.h> 

struct etudiant{ // création d'une structure etudiant
    char* nom;
    char* prenom; 
    char* adresse; 
    int module1;
    int module2;
};

// on crée un fonction qui permet d'afficher les informartion de chaque étudiant
void affichage (struct etudiant* etu, int nbr_etu){ 
    for (int i = 0; i < nbr_etu; i++){
        printf ("Eleve %i", i);
        printf ("\n");
        printf ("Nom : %s", etu[i].nom);
        printf ("\n");
        printf ("Prenom : %s", etu[i].prenom);
        printf ("\n");
        printf ("Adresse : %s", etu[i].adresse);
        printf ("\n");
        printf ("Module 1 : %d", etu[i].module1);
        printf ("\n");
        printf ("Module 2 : %d", etu[i].module2);
        printf ("\n");
        printf ("\n");
    }
    printf ("\n");
}

int main(){
    struct etudiant etu [5]; // on crée un tableau de 5 étudiants
    int nbr_etu = 5;

    // on crée des listes contenant les informations de chaque étudiant
    char* noms[] = {"Carpentier", "Cornaton", "Barriquand", "Davaux", "Lajugie"};
    char* prenom[] = {"Juliette", "Maxime", "Valentin", "Florian", "Rodolphe"};
    char* adresse[] = {"12T", "19", "12T", "100", "97"};
    int module1[] = {18, 3, 2, 8, 12};
    int module2[] = {15, 8, 7, 11, 13};

    // on met les informations de chaque étudiant dans le tableau
    for (int i = 0; i < 5; i++){
        etu[i].nom = noms[i];
        etu[i].prenom = prenom[i];
        etu[i].adresse = adresse[i];
        etu[i].module1 = module1[i];
        etu[i].module2 = module2[i];
    }

    affichage (etu, nbr_etu);

return 0;
}