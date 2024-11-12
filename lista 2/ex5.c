/*
Fa ̧ca um programa que leia um n ́umero e, caso ele seja positivo, calcule e mostre:
• o n ́umero digitado ao quadrado;
• a raiz quadrada do n ́umero digitado.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  float A, RAIZ;

  printf("Digite um numero: ");
  scanf("%f", &A);

  if(A >= 0){
    RAIZ = sqrt(A);
    A = A * A;
    printf("Ao quadrado = %.2f\n", A);
    printf("Raiz quadrada = %.2f\n", RAIZ);
  }else{
    printf("Numero invalido.\n");
  }
  return 0;
}
