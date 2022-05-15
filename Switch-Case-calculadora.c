/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
 setlocale(LC_ALL, "Portuguese");

  float numero1, numero2,resultado;
  char operacao;

  printf("Informe o primeiro valor: ");
  scanf("%f", &numero1);

  fflush(stdin);


  printf("Informe a operação (+, -, /, *): ");
  scanf("%c", &operacao);


  printf("Informe o segundo valor: ");
  scanf("%f", &numero2);

  switch(operacao){
      case '+':
        resultado = numero1 + numero2;
        break;
      case '-':
        resultado = numero1 - numero2;
        break;
      case '/':
        resultado = numero1 / numero2;
        break;
      case '*':
        resultado = numero1 * numero2;
        break;
    default:
      printf("Operção inválida!\n");
    }
  printf("%.2f %c %.2f = %.2f\n", numero1, operacao, numero2, resultado);
  return 0;
  }
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
 setlocale(LC_ALL, "Portuguese");

  float numero1, numero2,resultado;
  char operacao;

  printf("Informe o primeiro valor: ");
  scanf("%f", &numero1);

  fflush(stdin);

  printf("Informe a operação (+, -, /, *): ");
  scanf("%c", &operacao);

  printf("Informe o segundo valor: ");
  scanf("%f", &numero2);

  switch(operacao){
      case '+':
        resultado = numero1 + numero2;
        break;
      case '-':
        resultado = numero1 - numero2;
        break;
      case '/':
        if(numero2 != 0){
        resultado = numero1 / numero2;
        }
        else{
            printf("Erro!Divisão por zero!\n");
          return 0;
        }
        break;
      case '*':
        resultado = numero1 * numero2;
        break;
    default:
      printf("Operção inválida!\n");
      return 0;
    }
  printf("%.2f %c %.2f = %.2f\n", numero1, operacao, numero2, resultado);
  return 0;
  }

