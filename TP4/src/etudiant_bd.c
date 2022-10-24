/* Fichier: etudiant_bd.c
* sauvegarde les noms, prénoms, adresses, et les notes dans un fichier etudiant.txt pour 5 étudiant(e)s
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#include "fichier.c"

int main(){

    // on initialise le nombre d'étudiants et le fichier dans lequel seront sauvegarder les informations
    int nbr_etudiants = 5;
    char fichier3[] = "./etudiant.txt";
    char texte[100];

    // pour chaque étudiant on rentre les même informations
    for(int i = 0 ; i < nbr_etudiants; i++){

        printf("\nEtudiant %d\n",i);

        // saisie et sauvegarde du prénom
        printf("Prenom : ");
        scanf(" %30[^\n]",texte);
        ecrire_dans_fichier(fichier3, texte);
        ecrire_dans_fichier(fichier3, ", ");

        // saisie et sauvegarde du nom
        printf("Nom : ");
        scanf(" %30[^\n]",texte);
        ecrire_dans_fichier(fichier3, texte);
        ecrire_dans_fichier(fichier3, ", ");

        // saisie et sauvegarde de l'adresse
        printf("Adresse : ");
        scanf(" %30[^\n]",texte);
        ecrire_dans_fichier(fichier3, texte);
        ecrire_dans_fichier(fichier3, ", ");

        // saisie et sauvegarde de la première note
        printf("1ere note : ");
        scanf(" %30[^\n]",texte);
        ecrire_dans_fichier(fichier3, texte);
        ecrire_dans_fichier(fichier3, ", ");

        // saisie et sauvegarde de la deuxième note
        printf("2eme note : ");
        scanf(" %30[^\n]",texte);
        ecrire_dans_fichier(fichier3, texte);
        ecrire_dans_fichier(fichier3, "\n");
        
        
    };
}