/*
Considere uma loja que ao fazer o c´alculo do valor a ser pago em uma compra, d´a um desconto de acordo com o
n´umero de unidades compradas, conforme a seguinte tabela: Construa um programa para calcularo pre¸co a pagar,
sendo fornecidos o n´umero de unidades vendidas e o pre¸co unit´ario
do produto comprado. Ap´os calcular o eventual desconto, o programa deve informar o pre¸co a pagar, e se
houver desconto, de quanto foi.
N´umero de unidades Desconto
at´e 10 unidades -
de 11 a 20 unidades 10%
de 21 a 50 unidades 20%
acima de 50 unidades 30%
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float P, U, PT, D, R;// preço unitaria, unidades, preço total, desconto, resultado.

  printf("Valor unitario a ser pago: ");
  scanf("%f", &P);
  printf("Unidades compradas: ");
  scanf("%f", &U);

  if(U >= 1 && U <= 10){
    PT = P * U;
    printf("Valor a pagar: %.2f\n", PT);
  }else if(U >= 11 && U <= 20){
    PT = P * U;
    D = PT  * 0.10;
    R = PT - D;
    printf("Valor a pagar %.2f + (desconto de %.2f reais) = %.2f\n", PT, D, R);
  }else if(U >= 21 && U <= 50){
    PT = P * U;
    D = PT  * 0.20;
    R = PT - D;
    printf("Valor a pagar %.2f + (desconto de %.2f reais) = %.2f\n", PT, D, R);
  }else if(U >= 21 && U <= 50){
    PT = P * U;
    D = PT  * 0.30;
    R = PT - D;
    printf("Valor a pagar %.2f + (desconto de %.2f reais) = %.2f\n", PT, D, R);
  }else{
    printf("Opcao invalida.");
  }
  return 0;
}
