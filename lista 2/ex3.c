/*
Leia um n´umero fornecido pelo usu´ario. Se esse n´umero for positivo, calcule a raiz quadrada
do n´umero. Se o n´umero for negativo, mostre a mensagem dizendo que o n´umero ´e inv´alido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int A;

  printf("Digite um numero:");
  scanf("%d", &A);

  if(A >= 0){
    A = sqrt(A);
    printf("Raiz = %d\n", A);
  }else{
    printf("Numero invalido.\n");
  }
  return 0;
}
