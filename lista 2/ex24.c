/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%, SP 12%, RJ 15%, MS 8%). Fa¸ca um programa em
que o usu´ario entre com o valor e o estado destino do produto e o programa retorne o pre¸co final do produto
acrescido do imposto do estado em que ele ser´a vendido. Se o estado digitado n˜ao for v´alido, mostrar uma
mensagem de erro
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int O; // opção
  float P, PF; //produto, produto final

  printf("1 - Minas Gerais.\n2 - Sao Paulo.\n3 - Rio de Janeiro.\n4 - Mato Grosso do Sul.");
  scanf("%d", &O);

  switch (O){
    case 1:
    printf("Voce escolheu Minas Gerais (imposto de 7 porcento).\n");
    printf("Valor do produto: ");
    scanf("%f", &P);
    PF = (P * 0.07) + P;
    printf("%f + 7% = %f\n", P, PF);
    break;
    case 2:
    printf("Voce escolheu Sao Paulo (imposto de 12 porcento).\n");
    printf("Valor do produto: ");
    scanf("%f", &P);
    PF = (P * 0.12) + P;
    printf("%f + 12% = %f\n", P, PF);
    break;
    case 3:
    printf("Voce escolheu Rio de Janeiro (imposto de 15 porcento).\n");
    printf("Valor do produto: ");
    scanf("%f", &P);
    PF = (P * 0.15) + P;
    printf("%f + 15% = %f\n", P, PF);
    break;
    case 4:
    printf("Voce escolheu Mato Grosso do Sul (imposto de 8 porcento).\n");
    printf("Valor do produto: ");
    scanf("%f", &P);
    PF = (P * 0.08) + P;
    printf("%f + 8% = %f\n", P, PF);
    break;
    default:
    printf("Opcao invalida.\n");
    break;
  }
  return 0;
}
