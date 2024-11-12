/*
A nota final de um estudante ´e calculada a partir de trˆes notas atribu´ıdas entre o intervalo
de 0 at´e 10, respectivamente, a um trabalho de laborat´orio, a uma avalia¸c˜ao semestral e a um exame final.
A m´edia das trˆes notas mencionados anteriormente obedece aos pesos:
• Trabalho de laborat´orio: 2;
• Avalia¸c˜ao Semestral: 3;
• Exame Final: 5.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  float TL, AS, EF, M;// TL = trabalho laboratório (peso 2), AS = avaliação semestral (peso 3), EF = exame final (peso 5), M = média.

  printf("Nota Trabalho Laboratorio: ");
  scanf("%f", &TL);
  printf("Nota Avaliacao Semestral: ");
  scanf("%f", &AS);
  printf("Nota Exame Final: ");
  scanf("%f", &EF);

  if(TL < 0 || TL >10 || AS <0 || AS > 10 || EF < 0 || EF > 10){
    printf("Nota invalida.\n");
    return 0;
  }
  M = (TL * 2 + AS * 3 + EF * 5) / 10; // 2 + 3 + 5 = 10.
  printf("Media =  %.2f\n", M);
  return 0;
}
