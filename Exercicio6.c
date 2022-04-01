#include <stdio.h>
/* Escreva um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e com 30 meses.
  */
int main(void) {

  int anos, dias, meses, totalDias;
  
  printf("Informe os anos: ");
  scanf("%d",&anos);
  
  printf("Informe os meses: ");
  scanf("%d",&meses);
  
  printf("Informe os dias: ");
  scanf("%d",&dias); 

  totalDias = (anos * 365) + ( meses * 30) + dias;
  printf("Total de dia são: %d\n", totalDias);
  
  return 0;
}
