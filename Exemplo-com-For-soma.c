// 3)Somar todos os números de 0 até 100


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 //for(numero =0; -> inicialização
    //numero <=100; -> Critério de parada
    //numero++ ->Incremento

  int main(void) {
  setlocale(LC_ALL, "Portuguese");

  int numero, soma = 0;

  for(numero = 0; numero <= 100; numero++){
    soma += numero; // soma += numero;
  }
    printf(" Soma = %d\n", soma );
  
  return 0;
  }
