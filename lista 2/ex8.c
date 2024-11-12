/*
Fa ̧ca um programa que receba dois n ́umeros e mostre o maior. Se por acaso, os dois n ́umeros
forem iguais, imprima a mensagem: ‘‘N ́umeros iguais’’.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A, B;

  printf("Digite dois numeros consecutivamente:\n");
  scanf("%d %d", &A ,&B);

  if (A > B){
    printf("%d e maior.\n", A);
  }else if(B > A){
    printf("%d e maior\n", B);
  }else{
    printf("Sao iguais.\n");
  }
  return 0;
}
