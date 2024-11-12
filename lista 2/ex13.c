/*
Fa¸ca um algoritmo que calcule a m´edia ponderada das notas de 3 provas. A primeira e
segunda provas tem peso 1, e a terceira prova tem peso 2. Ao final, mostrar a m´edia do aluno e indicar se o
aluno foi aprovado ou reprovado. A nota para aprova¸c˜ao deve ser igual ou superior a 6,0. Uma nota v´alida
deve ser, obrigatoriamente, um valor entre 0 e 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float NU, ND, NT, M;// NOTA UM, NOTA DOIS, NOTA TRÊS, MEDIA.

  printf("Digite a nota das tres provas respectivamente (0.0 ate 10.0).\n");
  scanf("%f %f %f", &NU, &ND, &NT);

  if(NU < 0 || NU >10 || ND <0 || ND > 10 || NT < 0 || NT > 10){
    printf("Nota invalida.\n");
    return 0;
  }

  M = (NU + ND + (NT * 2)) / 4;
  printf("Media: %.2f\n", M);

  if(M >= 6.0){
    printf("Aprovado.\n");
  }else{
    printf("Reprovado.\n");
  }
  return 0;
}
