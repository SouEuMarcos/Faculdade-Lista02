/*
Fa¸ca um programa para verificar se um determinado n´umero inteiro ´e divis´ıvel por 3 ou 5,
mas n˜ao simultaneamente pelos dois.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A, R; // resultado.

  printf("Valor A (inteiro): ");
  scanf("%d", &A);

  if((A % 3 == 0 || A % 5 == 0) && A % 15 != 0){
    printf("E divisivel por 3 ou 5.\n");
  }else{
    printf("Nao e divisivel por 3 ou 5.\n");
  }
  return 0;
}
