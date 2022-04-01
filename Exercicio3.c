#include <stdio.h>
/*
3. Escolher um algoritmo que armazene o valor 10 em uma variável A e o valor 20
em uma variável B. A seguir (utilizando apenas atribuições entre variáveis) crie
uma formula de trocar os seus conteúdos fazendo com que o valor de A para B e
vice-versa. Ao fim, mostrar os valores que ficaram armazenados nas variáveis.
  */
int main(void) {
 // Aux --> Auxiliar
  int varA = 10, varB = 20, aux;
  
  aux = varA;
  varA = varB;
  varB = aux;
  printf("A = %d\n B = %d\n", varA, varB);
  return 0;
}
