/*
Fa¸ca um programa que calcule e mostre a ´area de um trap´ezio. Sabe-se que:
A =
(baseM aior + baseMenor) ∗ altura
2
(1)
Lembre-se que a base maior e base menor devem ser n´umeros maiores que zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float BMA, BME, H, AT; // Base maior, Base menor, Altura, Area do Trapézio.

  do{
  printf("Digite um valor para a Base maior(positivo): ");
  scanf("%f", &BMA);
  printf("Digite um valor para a Base menor(positivo): ");
  scanf("%f", &BME);
  printf("Digite um valor para a Altura: ");
  scanf("%f", &H);
  }while(BMA < 0 || BME < 0);
      AT = (BMA + BME) * H / 2;

      printf("A area do trapezio sera: %.2f\n", AT);
      return 0;
}
