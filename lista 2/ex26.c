/*
Leia a distˆancia em Km e a quantidade de litros de gasolina consumidos por um carro em
um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
Consumo (Km/l) Mensagem
menor que 8 Venda o carro!
entre 8 e 14 Econˆomico!
maior que 12 Super econˆomico!
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  float D, L, KML;

  printf("Distancia a percorrer em (KM): ");
  scanf("%f", &D);
  printf("Gasto em litros de gasolina: ");
  scanf("%f", &L);

  KML = D / L;

  if(KML <= 8){
    printf("Venda o carro!\n");
  }else if(KML <= 8 || KML <=14){
    printf("Economico!\n");
  }else{
    printf("Super economico!\n");
  }
  printf("%.2f KM/L.\n", KML);
  return 0;
}
