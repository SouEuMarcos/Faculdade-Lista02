/*
Escreva um programa que, dada a idade de um nadador, classifique-os em uma das seguintes
categorias:
Categoria Idade
Infantil A 5 a 7
Infantil B 8 a 10
Juvenil A 11 a 13
Juvenil B 14 a 17
Sˆenior maiores de 18 anos
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int I;

  printf("Idade: ");
  scanf("%d", &I);

  if(I >= 5 && I <= 7){
    printf("Infantil A.\n");
  }else if(I >=8 && I <= 10){
    printf("Infantil B.\n");
  }else if(I >= 11 && I <= 13){
    printf("Juvenil A.\n");
  }else if(I >= 14 && I <= 17){
    printf("Juvenil B.\n");
  }else if(I >= 18){
    printf("Senior.\n");
  }else{
    printf("Nao corresponde a nenhuma categoria.\n");
  }
  return 0;
}
