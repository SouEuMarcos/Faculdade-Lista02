/*
Escreva um programa que leia um n ́umero inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, o n ́umero 251 corresponder ́a ao valor: 8 (2 + 5 + 1). Se o
n ́umero lido n ̃ao for maior do que zero, o programa terminar ́a com a mensagem: ‘‘N ́umero Inv ́alido’’.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, S = 0;

    printf("Digite um numero inteiro maior do que zero: ");
    scanf("%d", &N);

    if(N <= 0){
        printf("Numero invalido.\n");
        return 0;
    }while(N > 0){
        S += N % 10;
        N /= 10;
    }

    printf("Soma dos algarismos: %d\n", S);
    return 0;
}
