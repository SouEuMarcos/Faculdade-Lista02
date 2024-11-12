/*
Fa ̧ca um programa que leia 2 notas de um aluno, verifique se as notas s ̃ao v ́alidas e exibe na
tela a m ́edia destas notas. Uma nota v ́alida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso
a nota n ̃ao possua um valor v ́alido, este fato deve ser informado ao usu ́ario e o programa termina.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float A, B, M;

  printf("Digite duas notas consecutivamente.\n");
  scanf("%f %f", &A, &B);

  if(A < 0.0 || A > 10.0){
    printf("Nota invalida.\n");
  }else if(B < 0.0 || B > 10.0){
    printf("Nota invalida.\n");
  }else{
    M = (A + B) / 2;
    printf("Media = %.2f\n1", M);
  }
  return 0;
}
