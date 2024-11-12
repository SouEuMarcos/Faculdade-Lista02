/*
Usando o comando switch, escreva um programa que leia um n´umero inteiro entre 1 e 7, e
imprima o dia da semana correspondente a este n´umero. Isto ´e, domingo se 1 for digitado, segunda-feira se
2, e assim por diante
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A;

    printf("Escolha um dia:\n1 - Domingo.\n2 - Segunda-feira.\n3 - Terca-feira.\n4 - Quarta-feira.\n5 - Quinta-feira.\n6 - Sexta-feira.\n7 - Sabado.\n");
    scanf("%d", &A);

    switch(A){
      case 1:
      printf("Voce escolheu Domingo.\n");
      break;
      case 2:
      printf("Voce escolheu Segunda-feira.\n");
      break;
      case 3:
      printf("Voce escolheu Terca-feira.\n");
      break;
      case 4:
      printf("Voce escolheu Quarta-feira.\n");
      break;
      case 5:
      printf("Voce escolheu Quinta-feira.\n");
      break;
      case 6:
      printf("Voce escolheu Sexta-feira.\n");
      break;
      case 7:
      printf("Voce escolheu Sabado.\n");
      break;
      default:
      printf("Opcao invalida.\n");
      break;
    }
    return 0;
}
