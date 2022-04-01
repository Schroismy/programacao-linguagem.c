
//%d ou %i ==> int
//%f ==> float
//%c ==> char
/*
Entrada de dados
 - Tem por função efetuar a leitura de dados de uma fonte externa.

A função scanf()
- É utilizada para fazer a leitura de dados formatados via teclado.

Sintaxe:
-scanf("expressão de controle", lista de argumentos);

Exemplo:
- scanf("%f", &salario);


Explicação: este comando efetua uma leitura do teclado onde é armazenada uma variável float(indicada por "%f"). O valor lido será armazenado no endereço da variável salário.

Na lista de argumentos devemos indicar os endereços da variáveis.
Para fazer isso adicionamos o simbolo "&" como prefixo na frente do nome da variável
   */


#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char LetraInicial;
  
  printf("Informe a letra inicial do seu nome:");
  scanf("%c", &LetraInicial);
  printf("a letra inicial do seu nome eh: %c",LetraInicial);
 
  
  
  printf("\n");
  //system("pause");
   return 0 ;
}
