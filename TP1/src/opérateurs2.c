/* Fichier: opérateurs2.c
* Execute une operation sur 2 variables en fonction d'un caractere
* auteur: CARPENTIER Juliette, CORNATON Maxime
*/

#include <stdio.h> // headers

int main(){
    int num1 = 56;
    int num2 = 10;
    char op = '%';
    int resultat;
    int opBase = (int) op; //Conversion en base 10 du charactère.

    switch (opBase) {
        case 43 : resultat = num1+num2;
        case 45 : resultat = num1-num2;
        case 42 : resultat = num1*num2;
        case 47 : resultat = num1/num2;
        case 37 : resultat = num1%num2;
        case 38 : resultat = num1&&num2;
        case 124 : resultat = num1||num2;
        case 126 : resultat = ~num1;
       
        default : resultat = num1+num2;
        }
    printf("%i", resultat);
    return resultat;
}