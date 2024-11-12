/*
 Recebendo como entrada a data de nascimento de uma pessoa (dia, mˆes), escreva um
programa que informe qual o seu signo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int D, M; // opção

  printf("Dia de nascimento: ");
  scanf("%d", &D);
  printf("Mes de nascimento: ");
  scanf("%d", &M);

  if ((D >= 21 && &M == 3) || (D <= 20 && M == 4)){
        printf("Aries.\n");
    }else if ((D >= 21 && M == 4) || (D <= 20 && M == 5)){
        printf("Touro.\n");
    }else if ((D >= 21 && M == 5) || (D <= 20 && M == 6)){
        printf("Gemeos.\n");
    }else if ((D>= 21 && M == 6) || (D <= 22 && M == 7)){
        printf("Cancer.\n");
    }else if ((D >= 23 && M == 7) || (D <= 22 && M == 8)){
        printf("Leao.\n");
    }else if ((D >= 23 && M == 8) || (D <= 22 && M == 9)){
        printf("Virgem.\n");
    }else if ((D >= 23 && M == 9) || (D <= 22 && M == 10)){
        printf("Libra.\n");
    }else if ((D >= 23 && M == 10) || (D <= 21 && M == 11)){
        printf("Escorpiao.\n");
    }else if ((D >= 22 && M == 11) || (D <= 21 && M == 12)){
        printf("Sagitario.\n");
    }else if ((D >= 22 && M == 12) || (D <= 20 && M == 1)){
        printf("Capricornio.\n");
    }else if ((D >= 21 && M == 1) || (D <= 19 && M == 2)){
        printf("Aquario.\n");
    }else if ((D >= 20 && M == 2) || (D <= 20 && M ==3)){
        printf("Peixes.\n");
    }else{
      printf("Data de nascimento invalida.\n");
    }
    return 0;
}
