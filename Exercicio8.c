#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/* Escreva um algoritmo para ler o salário mensal atual de um funcionário e o
 * percentual de reajuste. Calcular e escrever o valor do novo salário */

int main(void) {

  setlocale(LC_ALL, "Portuguese");
  
  float salarioAtual; 
  float salarioNovo; 
  float percReajuste;
  
 printf("Informe o salário atual do funcionário: ");
  scanf("%f", &salarioAtual);
  
  printf("Informe o percentual de reajuste do funcionário: ");
  scanf("%f", &percReajuste);

salarioNovo = salarioAtual + (salarioAtual * ( percReajuste/100.0));
 //ou
//salarioNovo = salarioAtual+ (salarioAtual * ((float)percReajuste);

  printf("O salário novo: R$  %.2f\n", salarioNovo);
  
  
  return 0;
}
