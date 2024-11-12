/*
Fa¸ca um programa que mostre ao usu´ario um menu com 4 op¸c˜oes de opera¸c˜oes matem´aticas
(soma, subtra¸c˜ao, divis˜ao, multiplica¸c˜ao). O usu´ario escolhe uma das op¸c˜oes e o seu programa ent˜ao pede
dois valores num´ericos e realiza a opera¸c˜ao, mostrando o resultado na tela, e encerrando
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  float A, B, R;// resultado.
  int O;// opção.

  printf("Escolha uma operacao matematica:\n1 - Soma (+).\n2 - Subtracao (-).\n3 - Divisao (/).\n4 - Multiplicacao (x).\n");
  scanf("%d", &O);

  switch(O){
    case 1:
    printf("Voce escolheu soma (+).\n");
    printf("Valor de A: ");
    scanf("%f", &A);
    printf("Valor de B: ");
    scanf("%f", &B);
    R = A + B;
    printf("%.2f + %.2f = %.2f\n", A, B, R);
    break;
    case 2:
    printf("Voce escolheu subtracao (-).\n");
    printf("Valor de A: ");
    scanf("%f", &A);
    printf("Valor de B: ");
    scanf("%f", &B);
    R = A - B;
    printf("%.2f - %.2f = %.2f\n", A, B, R);
    break;
    case 3:
    printf("Voce escolheu divisao (/).\n");
    printf("Valor de A: ");
    scanf("%f", &A);
    printf("Valor de B: ");
    scanf("%f", &B);
    R = A / B;
    printf("%.2f / %.2f = %.2f\n", A, B, R);
    break;
    case 4:
    printf("Voce escolheu multiplicacao (x).\n");
    printf("Valor de A: ");
    scanf("%f", &A);
    printf("Valor de B: ");
    scanf("%f", &B);
    R = A * B;
    printf("%.2f * %.2f = %.2f\n", A, B, R);
    break;
    default:
    printf("Opcao invalida.\n");
    break;
  }
}
