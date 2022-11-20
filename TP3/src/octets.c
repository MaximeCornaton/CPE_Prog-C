/* Fichier : octets.c
* voir les octets d'une variable short, int, long int, float, double et long double
* auteurs : CARPENTIER Juliette & CORNATON Maxime
*/

#include <stdio.h>

int main(){
	short s = 69;
	int in = 99999;
	long int lin = 66666666666;
	float f = 33.3333;
	double d = 6.6666666;
	long double ld = 66666.66666;

    
	unsigned char *sptr =NULL; // pointeur nul
    sptr = (unsigned char*)&s; //pointeur à l'addresse de la variable
	for(int i = 0 ; i < sizeof(s); i++)
		printf("%x ", *(sptr+i));
    printf("\n");


	unsigned char *inptr =NULL;
    inptr = (unsigned char*)&in;
	for(int i = 0 ; i < sizeof(in); i++)
		printf("%x ", *(inptr+i));
    printf("\n");


	unsigned char *linptr =NULL;
    linptr = (unsigned char*)&lin;
	for(int i = 0 ; i < sizeof(lin); i++)
		printf("%x ", *(linptr+i));
    printf("\n");


	unsigned char *fptr =NULL;
    fptr = (unsigned char*)&f;
	for(int i = 0 ; i < sizeof(f); i++)
		printf("%x ", *(fptr+i));
    printf("\n");


	unsigned char *dptr =NULL;
	dptr = (unsigned char*)&d;	
	for(int i = 0 ; i < sizeof(d); i++)
    	printf("%x ", *(dptr+i));
    printf("\n");


	unsigned char *ldptr =NULL;
	ldptr = (unsigned char*)&ld;
	for(int i = 0 ; i < sizeof(ld); i++)
		printf("%x ", *(ldptr+i));
    printf("\n");

    return 0;
}