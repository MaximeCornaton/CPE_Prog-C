/* Fichier: opérateurs.c
* Teste les différents opérateurs aithmétiques et logiques
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers

int main(){
    
    int a = 16;
    int b = 3;
    
    printf("- Opérateurs Arithméthiques - \n");

    int add = a+b;
    printf("Addition: %i\n", add);

    int sous = a-b;
    printf("Soustraction: %i\n", sous);

    int mult = a*b;
    printf("Multiplication: %i\n", mult);

    int div = a/b;
    printf("Division de a par b: %i\n", div);

    int mod = a%b;
    printf("Modulus de a par b: %i\n", mod);

    printf("- Opérateurs Logiques - \n");

    int neg = !a;
    printf("Negation de A: %i\n", neg);

    int et = a&&b;
    printf("ET: %i\n", et);

    int ou = a||b;
    printf("OU: %i\n", ou);

    return 0;
}