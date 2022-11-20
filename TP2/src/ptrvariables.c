/* Fichier : ptrvariables.c
* affecte et affiche les valeurs et des variables de différents types de base
* auteurs : CARPENTIER Juliette & CORNATON Maxime
*/

# include <stdio.h> 


int main(){

    char c = 'A';
    char *pc = &c;

    signed char sc = 'B';
    signed char *psc = &sc;

    unsigned char uc = 'C';
    unsigned char *puc = &uc;

    short s = 10;
    short *ps = &s;

    unsigned short us = 3;
    unsigned short *pus = &us;

    signed short ss = -10;
    signed short *pss = &ss;

    int  i = 12 ;
    int *pi = &i;

    unsigned int ui = 45;
    unsigned int *pui = &ui;

    signed int si = -5;
    signed int *psi = &si;

    long int li = 1000;
    long int *pli = &li;

    signed long int sli = -200;
    signed long int *psli = &sli;

    unsigned long int uli = 600;
    unsigned long int *puli = &uli;

    long long int lli = 10000;
    long long int *plli = &lli;

    signed long long int  slli = -2000;
    signed long long int *pslli = &slli;

    unsigned long long int ulli = 6000;
    unsigned long long int *pulli = &ulli;

    float  f= 2.33;
    float *pf = &f;

    double d= 155.666;
    double *pd = &d;

    long double ld = 110000.22554;
    long double *pld = &ld;

    printf("valeur : %c, adresse : %p \n" , *pc,pc );
    printf("valeur : %hhu, adresse : %p  \n" , *psc, psc);
    printf("valeur : %hhu, adresse : %p \n" , *puc,puc);
    printf("valeur : %hd, adresse : %p \n" , *ps,ps);
    printf("valeur : %hu, adresse : %p \n" , *pus,pus);
    printf("valeur : %d, adresse : %p \n" , *pss,pss);
    printf("valeur : %d, adresse : %p \n" , *pi,pi);
    printf("valeur : %u, adresse : %p \n" , *pui,pui);
    printf("valeur : %u, adresse : %p \n" , *psi,psi);
    printf("valeur : %ld, adresse : %p \n" , *pli,pli);
    printf("valeur : %ld, adresse : %p \n" , *psli,psli);
    printf("valeur : %lu, adresse : %p \n" , *puli,puli);
    printf("valeur : %lld, adresse : %p \n" , *plli,plli);
    printf("valeur : %lld, adresse : %p \n" , *pslli,pslli);
    printf("valeur : %llu, adresse : %p \n" , *pulli,pulli);
    printf("valeur : %f, adresse : %p \n" , *pf,pf);
    printf("valeur : %g, adresse : %p \n" , *pd,pd);
    printf("valeur : %Lg, adresse : %p \n" , *pld,pld);


	return 0;
}