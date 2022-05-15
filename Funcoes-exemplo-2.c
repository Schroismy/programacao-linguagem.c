/*
2.Escreva um programa que calcule as seguintes operações entre dois n~umeros
dados: Adição, subtração, multiplicação e deivisão. Cada uma destas operações
deve ser uma função separada. A função principal deve ler estes dois números e
passá-los à respectiva função. Os resulados devem ser retornados pelas funções e
mosrastrados no principal.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Esta função  faz a soma de dois valores
float  Somar(float n1, float n2){
  return n1 + n2;
}

//Esta função  faz a sutração de dois valores
float Subtrair(float n1, float n2){
  return  n1 - n2;
}

//Esta função  faz a multiplicação de dois valores
float Multiplicar (float n1, float n2){
  return n1 * n2;
}

//Esta função  faz a divisão de dois valores
float Dividirr (float n1, float n2){
  return n1 / n2;
}



int main() 
{
setlocale(LC_ALL, "Portuguese");

  float número1, número2;
  float soma, subtracao, multiplicacao, divisao;

  //Leitura do número 1 
  printf("Informe o primeiro número: ");
  scanf("%f", &número1);

  //Leitura do número 2
  printf("Informe o segundo número: ");
  scanf("%f", &número2);

  soma = Somar(número1, número2);
  printf("A soma de %.2f +  %.2f =  %.2f\n",número1, número2, soma);
  
 
  return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Esta função  faz a soma de dois valores
float  Somar(float n1, float n2){
  return n1 + n2;
}

//Esta função  faz a sutração de dois valores
float Subtrair(float n1, float n2){
  return  n1 - n2;
}

//Esta função  faz a multiplicação de dois valores
float Multiplicar (float n1, float n2){
  return n1 * n2;
}

//Esta função  faz a divisão de dois valores
float Dividirr (float n1, float n2){
  return n1 / n2;
}



int main() 
{
setlocale(LC_ALL, "Portuguese");

  float número1, número2;

  //Leitura do número 1 
  printf("Informe o primeiro número: ");
  scanf("%f", &número1);

  //Leitura do número 2
  printf("Informe o segundo número: ");
  scanf("%f", &número2);

  printf("A soma de %.2f +  %.2f =  %.2f\n",número1, número2, Somar(número1, número2));
  
 
  return 0;
}
*/


  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>

  //Esta função  faz a soma de dois valores
  float  Somar(float n1, float n2){
    return n1 + n2;
  }
  
  //Esta função  faz a sutração de dois valores
  float Subtrair(float n1, float n2){
    return  n1 - n2;
  }
  
  //Esta função  faz a multiplicação de dois valores
  float Multiplicar (float n1, float n2){
    return n1 * n2;
  }
  
  //Esta função  faz a divisão de dois valores
  float Dividir (float n1, float n2){
    return n1 / n2;
  }
  
  
  
  int main() 
  {
  setlocale(LC_ALL, "Portuguese");

  //Declaração de variáveis
  float número1, número2;
  float soma, subtracao, multiplicacao, divisao;

  //Leitura do número 1 
  printf("Informe o primeiro número: ");
  scanf("%f", &número1);

  //Leitura do número 2
  printf("Informe o segundo número: ");
  scanf("%f", &número2);

  soma = Somar(número1, número2);
  subtracao = Subtrair(número1, número2);
  multiplicacao = Multiplicar(número1, número2);
  divisao = Dividir(número1, número2);
 
  
  printf("A soma de %.2f +  %.2f =  %.2f\n",número1, número2, soma);
  printf("A subtração de %.2f -  %.2f =  %.2f\n",número1, número2, subtracao);
  printf("A multiplicação de %.2f *  %.2f =  %.2f\n",número1, número2, multiplicacao);
  printf("A divisão de %.2f /  %.2f =  %.2f\n",número1, número2, divisao);
    return 0;
}
