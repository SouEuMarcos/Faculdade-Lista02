/*
Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mˆes
correspondente a este n´umero. Isto ´e, janeiro se 1, fevereiro se 2, e assim por diante.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A;

    printf("Escolha um mes:\n1 - Janeiro.\n2 - Fevereiro.\n3 - Marco.\n4 - Abril.\n5 - Maio.\n6 - Junho.\n7 - Julho.\n8 = Agosto.\n9 - Setembro.\n10 - Outubro.\n11 = Novembro.\n12 - Dezembro.\n");
    scanf("%d", &A);

    switch(A){
      case 1:
      printf("Voce escolheu Janeiro.\n");
      break;
      case 2:
      printf("Voce escolheu Fevereiro.\n");
      break;
      case 3:
      printf("Voce escolheu Marco.\n");
      break;
      case 4:
      printf("Voce escolheu Abril.\n");
      break;
      case 5:
      printf("Voce escolheu Maio.\n");
      break;
      case 6:
      printf("Voce escolheu Junho.\n");
      break;
      case 7:
      printf("Voce escolheu Julho.\n");
      break;
      case 8:
      printf("Voce escolheu Agosto.\n");
      break;
      case 9:
      printf("Voce escolheu Setembro.\n");
      break;
      case 10:
      printf("Voce escolheu Outubro.\n");
      break;
      case 11:
      printf("Voce escolheu Novembro.\n");
      break;
      case 12:
      printf("Voce escolheu Dezembro.\n");
      break;
      default:
      printf("Opcao invalida.\n");
      break;
    }
    return 0;
}
