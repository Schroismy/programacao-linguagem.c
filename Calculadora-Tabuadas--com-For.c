#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  setlocale(LC_ALL,"Portuguese");
  
  int tabuada,contador;

  printf("Informe o valor da tabuada: ");
  scanf("%d", &tabuada);
  
  for(contador = 0; contador <= 10; contador++){
    printf(" %d X %d   = %d\n", tabuada, contador, tabuada * contador);
  }
 
  
  return 0;
}
