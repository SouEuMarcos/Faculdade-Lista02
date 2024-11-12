/*
Determine se um ano lido ´e bissexto. Um ano ´e bissexto se: for divis´ıvel por 400, ou se for
divis´ıvel por 4 e n˜ao for divis´ıvel por 100. Por exemplo: 1988, 1992, 1996, ...
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A;

  printf("Digite um ano: ");
  scanf("%d", &A);

  if(A % 4 == 0 || A % 400 == 0 && A % 100 != 0){
    printf("E bissexto.\n");
  }else{
    printf("Nao e bissexto.\n");
  }
  return 0;
}
