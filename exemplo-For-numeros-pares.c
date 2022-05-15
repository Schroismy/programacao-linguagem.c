// 1)Mostrar todos os números pares de 0 até 1000.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(void) {
  
  int numero;
  
  setlocale(LC_ALL, "Portuguese");
  
  for(numero = 0; numero <= 1000; numero++){
    if(numero % 2 == 0){
        printf("%d\n", numero);
    }
  }
  
  
  return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(void) {
  
  int numero;
  
  setlocale(LC_ALL, "Portuguese");
  
  for(numero = 0; numero <= 1000; numero = numero +2){
        printf("%d\n", numero);
  }
  
  return 0;
}
*/
