#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
  
/*1. Escrever um algoritmo na linguagem c , que receba o preço de um produto, calcule e mostre o novo preço, sabendo que se este sofreu um desconto de 10%. */

  float precoAtual, precoNovo;
  printf("informe o preço atual do produto: ");
  scanf("%f", &precoAtual );

  precoNovo = precoAtual - (precoAtual * 0.1);
  printf("O preço novo é: R$ %.2f\n", precoNovo );
  return 0;
}
