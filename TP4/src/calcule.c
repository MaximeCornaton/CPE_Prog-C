/* Fichier: calcule.c
* 
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#include <stdlib.h>
#include "operator.c"

int main(int argc, char ** argv){

    int (*funct)(int, int);        // On fait un pointeur de fonction
    int num1 = atoi(argv[2]);      // On passe l'argument 2 d'une chaine de caractères à un entier (commande "atoi")
    int num2 = atoi(argv[3]);
    char op = *argv[1];

    switch(op){
		case 'm' : funct = produit;
			break;
		case '-' : funct = difference;
			break;
		case '+' : funct = somme;
			break;
		case '/' : funct = quotient;
			break;
		case '%' : funct = modulo;
			break;
		case '&' : funct = et;
			break;
		case '|' : funct = ou;
			break;
		case '~' : funct = negation;
			break;
    }
	
    printf("Résultat: %d\n",funct(num1, num2));

    return 0;
}