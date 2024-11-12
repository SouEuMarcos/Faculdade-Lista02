/*
Leia o sal ́ario de um trabalhador e o valor da presta ̧c ̃ao de um empr ́estimo. Se a presta ̧c ̃ao for
maior que 20% do sal ́ario imprima: ‘‘Empr ́estimo n~ao conccedido’’, caso contr ́ario imprima: ‘‘Empr ́estimo
concedido’’.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float S, P;

  printf("Salario = ");
  scanf("%f", &S);

  printf("Prestacao emprestimo = ");
  scanf("%f", &P);

  if(P > S * 0.2){
    printf("Emprestimo nao concedido.\n");
  }else{
    printf("Empresitmo concedido.\n");
  }
  return 0;
}
