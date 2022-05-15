/*

            Matrizes
-Vetores podem ter mais de uma diensão.Dessa forma,podemos ter diferentes
índices  para alcançar os valores armazenados.

->Declaração

-Tipo matriz[tamanhoA][tamanhoB];
              +->Linha   +->Coluna


->Atribuição:
-matriz[índiceA][índiceB]= valor;

Exemplo

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {

  setlocale(LC_ALL,"Portuguese");

  int mat[3][4], linha, coluna;

  for(linha = 0; linha < 3; linha++){
    for(coluna = 0; coluna < 4; coluna++){
      printf("Informe o elento [%d,%d]: ", linha, coluna);
      scanf("%d", &mat[linha][coluna]);

    }
  }

   for(linha = 0; linha < 3; linha++){
    for(coluna = 0; coluna < 4; coluna++){
        printf("%d\t", mat[linha][coluna]);

    }
     printf("\n");
  }



  return 0;
}
*/


/*
->Exemplo
Fazer aleitura de valores para dentro da matriz de inteiros
e somar todos os elementos pares da matriz.

  */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  int mat[4][4], linha, coluna, soma = 0;

  for (linha = 0; linha < 4; linha++) {
    for (coluna = 0; coluna < 4; coluna++) {
      printf("Informe o elento [%d,%d]: ", linha, coluna);
      scanf("%d", &mat[linha][coluna]);

    }
   }

   for (linha = 0; linha < 4; linha++) {
    for (coluna = 0; coluna < 4; coluna++) {
        printf("%d\t", mat[linha][coluna]);
      if( mat[linha][coluna] % 2 == 0){
        soma = soma + mat[linha][coluna];
       
      }
      
    }
      printf("\n");
  }

  printf("A soma dos elementos pares da Matriz é: %d\n", soma);
  
  return 0;
  }
