//2)Mostrar todos os números ímpares de 2000 até 1000

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
 setlocale(LC_ALL, "Portuguese");

  int numero;
  
  for(numero = 2000; numero >=1000; numero--){
    if(numero % 2 != 0){
      printf("%d\n",numero);
    }
  }
  
  
  return 0;
}
