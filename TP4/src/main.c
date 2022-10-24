/* Fichier: main.c
* programme principal pour les exos 1 et 2
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers
#include "fichier.c"
#include "operator.c"

int main(void)
{
    printf("\n\n------------- EXO 1 ----------------\n\n");
    
    int num1 = 10;
	int num2 = 5;
	char op = '!';
	
    int (*funct)(int, int); //On fait un pointeur de fonction

	switch(op){
		case '*'  : funct = produit;
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
		case '!' : funct = negation;
			break;
    }
	
    printf("Résultat: %d\n",funct(num1, num2));




    printf("\n\n------------- EXO 2 ----------------\n\n");

    char message[] = "blabla";                     // on défini un message

    char fichier2[] = "./fichier2.c";              // on crée un fichier

    ecrire_dans_fichier(fichier2, message);    
    
    lire_fichier(fichier2);


    printf("\n\n------------- EXO 4 ----------------\n\n");

    return 0;
}