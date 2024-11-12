/*
Leia a idade e o tempo de servi¸co de um trabalhador e, escreva se ele pode ou n˜ao, se
aposentar. As condi¸c˜oes para aposentadoria s˜ao:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int I, T; //idade e tempo.

  printf("Idade: ");
  scanf("%d", &I);
  printf("Tempo: ");
  scanf("%d", &T);

  if(I >= 65 || T >= 30 || (I >= 60 && T >= 25)){
    printf("Pode se aposentar.\n");
  }else{
    printf("Nao pode se aposentar.\n");
  }
  return 0;
}
