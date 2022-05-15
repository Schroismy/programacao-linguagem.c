/*
Estrutura  do...while

- Utiliza inicialmente  quando  naõ se sabe o número de vezes que o trecho do algoritmo  irá ser repetido

->Nesse caso a estrutura enquanto uma condição for verdadeeira.´Parecida com a estrutura while..., mas o teste ocorre no final

->Está subentendido o início  e o fim do bloco de ações

->Se analisarmos com cuidado  verificaremos que a esrutura while pode nunca ser executada, dependendo do caso, ou seja, se a condição do loop retornar falso de primeira a sua execução não será  realizada.

-> Por outro lado, no loop do while o código será executado ao menos uma vez, pois a verificação da condição é feita no final da intrução.

->Neste tipo de estrutura também  é extremamente necessária uma atribuição que modifique o  estrado da condição do fluxo, pois caso isto não ocorrer, o programa poderá entra em loop infinito. 

- Utiliza o formato:
do{
AÇÃO1
AÇÃO2
...
AÇÃON
} while (condição);

                Exemplo do...while
+Ler 50 números fornecidos pelo usuário, calcular e exebir a média:
...
float soma,count,num, media;
media = 0;
soma = 0;
count = 0;
do{
scanf("%f", &num);
soma = soma + num;
cont++
} while (cont < 50);
media = soma/cont;
printf("%f",medai);
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  setlocale (LC_ALL, "Portuguese");

  float numero, soma = 0, media;
  int contador = 0;

  do{
    printf("Informe o %dº valor: ", contador+1);
    scanf("%f", &numero);

    soma =soma + numero;
    contador++;
    
  }while(contador < 10);
  printf ("soma: %.2f\n", soma );
  media = soma / contador;
  
  printf(" O valor da média é : %.2f\n", media);
  
  return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  setlocale (LC_ALL, "Portuguese");
  
  float numero, soma = 0, media;
  int contador = 0,qtdValor;

    printf("Informe a quantidade de valores: ");
    scanf("%d", &qtdValor);
  
  do{
    printf("Informe o %dº valor: ", contador+1);
    scanf("%f", &numero);

    soma =soma + numero;
    contador++;
    
  }while(contador < qtdValor);
  printf ("soma: %.2f\n", soma );
  media = soma / contador;
  
  printf(" O valor da média é : %.2f\n", media);
  
  return 0;
}

