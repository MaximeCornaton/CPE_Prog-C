/* Fichier: opérateurs2.c
* Affiche en notation binaire
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers

int main(){
	int nbr = 1024; 
	
	int binA[30], i;

	if (nbr == 0){
		printf("0");
	}
	for (i = 0; nbr > 0; i++) {
		binA[i] = nbr%2;
		nbr /= 2;
	}
	for (i -= 1; i >= 0; i--){
		printf("%d", binA[i]);
	}
    
	printf("\n");
}