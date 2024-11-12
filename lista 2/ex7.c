/*
Escreva um programa que, dados dois n ́umeros inteiros, mostre na tela o maior deles, assim
como a diferen ̧ca existente entre ambos.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int A, B, DIF;

  printf("Digite dois valores inteiros consecutivamente:\n");
  scanf("%d %d", &A , &B);

  if(A > B){
    printf("%d e maior\n", A);
  }else{
    printf("%d e maior\n", B);
  }
  DIF = A - B;
  printf("Diferenca = %d\n", DIF);
  return 0;
}
