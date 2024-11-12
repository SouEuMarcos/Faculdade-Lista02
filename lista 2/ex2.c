/*
Escreva um programa que receba um valor inteiro e indique se este valor est´a contido entre
10 e 50, incluindo os limites.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A;

    printf("Digite um numero: ");
    scanf("%d", &A);

    if(A >= 10 && A <= 50){
        printf("Numero Valido.\n");
    }else{
        printf("Numero Invalido.\n");
    }
    return 0;
}
