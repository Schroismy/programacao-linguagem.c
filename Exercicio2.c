#include <stdio.h>
#include <stdlib.h>

/*2. Escreva um algoritmo que calcule o IMC de uma pessoa (Índice de Massa
 * Corporal).       O  IMC é feito dividindo o peso (quilogramas) pela
 * altura (em metros) ao        quadrado.*/

int main(void) {
  float altura, peso, imc;
  printf("informe a sua altura: ");
  scanf("%f", &altura);

  printf("informe o seu peso: ");
  scanf("%f", &peso);

  imc = peso / (altura * altura);
  printf("Seu IMC é : %.2f\n", imc);
  return 0;
}
