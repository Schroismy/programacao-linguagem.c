#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  setlocale(LC_ALL,"Portuguese");
  
  int contador2, contador1;

  for(contador1 = 1; contador1 <= 10;contador1++){
      for(contador2 = 0; contador2 <= 10; contador2++){
        printf(" %d X %d   = %d\n",contador1, contador2, contador1  * contador2);
    }
    printf("\n");
  }
  
  return 0;
}
