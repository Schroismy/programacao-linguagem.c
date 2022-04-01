#include <stdio.h>
/*  Escreva um algoritmo para ler (do teclado) e escrever (na tela) e o seu
 * sucessor e antecessor.
 */ 
//EXEMPLO 1
 //int main(void) {
 // int valor;
 //  printf("Informe o valor: ");
 // scanf("%d", &valor);

 // printf("Sucessor = %d e  Antecessor = %d\n", valor + 1, valor - 1);

  
  //return 0;
//}

#include <stdio.h>
int main(void) {
 int valor,sucessor, antecessor;
  printf("Informe o valor: ");
 scanf("%d", &valor);

  sucessor = valor + 1;
  antecessor = valor -1;
  printf("Sucessor = %d e Antecessor = %d\n",sucessor, antecessor );

  
  return 0;
}
