//4) Verificar quantos números divisíveis por 3 existe entre 200 e 300.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  setlocale(LC_ALL, "Portuguese");

  int numero, quantidade = 0;

  for(numero = 200; numero<=300; numero ++)  {
      if(numero % 3 == 0){
        printf("%d\n",numero);
          quantidade++;
      }
  }
  
  printf("Entre  200 e 300, possuimos %d  números divisíveis por 3\n", quantidade);
  return 0;
  }
