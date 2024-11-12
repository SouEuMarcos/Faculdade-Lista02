/*
Leia um n´umero real. Se o n´umero for positivo, imprima a raiz quadrada. Do contr´ario,
imprima o n´umero ao quadrado.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  float A;

  printf("Digite um numero real: ");
  scanf("%f", &A);

  if(A >= 1){
    A = sqrt(A);
    printf("Raiz = %.2f\n", A);
  }else{
    A = A * A;
    printf("Ao quadrado = %.2f\n", A);
  }
  return 0;
}
