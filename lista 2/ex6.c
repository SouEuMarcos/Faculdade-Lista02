/*
Fa ̧ca um programa que receba um n ́umero inteiro e verifique se este n ́umero  ́e par ou  ́ımpar.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A;

  printf("Digite um numero inteiro: ");
  scanf("%d", &A);

  if(A % 2 == 0){
    printf("Numero par.\n");
  }else{
    printf("Numero impar\n");
  }
  return 0;
}
