/* Fichier: variables.c
* affecte et affiche les valeurs des variables des différents types de base
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers

int main(){

    char c = 'a';
	signed char sc = 'z';
	unsigned char uc = 'e';
	short s = 2;
	unsigned short us = 6;
	signed short ss = -9;
	int  i = 80 ;
	unsigned int ui = 85;
	signed int si = -96;
	long int li = 888;
	signed long int sli = -666;
	unsigned long int uli = 999;
	long long int lli = 9999;
	signed long long int  slli = -6523;
	unsigned long long int ulli = 7895;
	float  f= 3.14;
	double d= 3.3333;
	long double ld = 66666.66666;

	printf("%c \n" , c);
	printf("%hhu \n" , sc);
	printf("%hhu \n" , uc);
	printf("%hd \n" , s);
	printf("%hu \n" , us);
	printf("%d \n" , ss);
	printf("%d \n" , i);
	printf("%u \n" , ui);
	printf("%u \n" , si);
	printf("%ld \n" , li);
	printf("%ld \n" , sli);
	printf("%lu \n" , uli);
	printf("%lld \n" , lli);
	printf("%lld \n" , slli);
	printf("%llu \n" , ulli);
	printf("%f \n" , f);
	printf("%g \n" , d);
	printf("%Lg \n" , ld);

}