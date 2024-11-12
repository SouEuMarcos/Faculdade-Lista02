/*
Fa¸ca um programa que receba dois n´umeros e mostre qual deles ´e o maior.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A, B;

  printf("Digite dois valores.\n");
  scanf("%i %i", &A, &B);
  printf("Primeiro valor = %i\nSegundo valor = %i\n", A, B);

  if(A >= B){
    printf("O primeiro valor e maior = %i\n", A);
  }else{
    printf("O segundo valor e maior = %i\n", B);
  }
  return 0;
}
