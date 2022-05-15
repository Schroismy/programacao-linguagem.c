

//1. Criar uma função que recebe um valor inteiro e verificar e exibir na tela se o valor é par ou impar.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Declaração Global
int numero;

void VerificarNumero(int num){
    if( numero % 2 == 0){
      printf("%d = Par!\n", numero);
    }
    else{
      printf("%d = Ímpar!\n", numero);
    }
  
}


int main() 
{
 
setlocale(LC_ALL, "Portuguese");

  printf("Informe o número: ");
  scanf("%d", &numero);

  VerificarNumero(numero);
  
  return 0;
}

/* 
1. Criar uma função que recebe um valor inteiro e verificar e exibir na tela se o valor é par ou impar.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void VerificarNumero(int num){
    if( num % 2 == 0){
      printf("Par!\n");
    }
    else{
      printf("Ímpar!\n");
    }
  
}


int main() 
{
  int numero; 
setlocale(LC_ALL, "Portuguese");

  printf("Informe o número: ");
  scanf("%d", &numero);

  VerificarNumero(numero);
  
  return 0;
}
*/

/*
//1. Criar uma função que recebe um valor inteiro e verificar e exibir na tela se o valor é par ou impar.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void VerificarNumero(int num){
    if( num % 2 == 0){
      printf(" %d = Par!\n", num);
    }
    else{
      printf(" %d = Ímpar!\n", num);
    }
  
}


int main() 
{
 // int numero; 
setlocale(LC_ALL, "Portuguese");

 // printf("Informe o número: ");
  //scanf("%d", &numero);

  VerificarNumero(10);
  VerificarNumero(11);
  VerificarNumero(3);
  VerificarNumero(9);
  VerificarNumero(27);
  VerificarNumero(42);
  VerificarNumero(13);

  return 0;
}
*/
