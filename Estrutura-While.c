/*

              Estrutura While...
-Utiliza inicialmente quando não se sabe o número de vezes que o trecho do algoritmo irá ser repetido

->Nesse caso, repetimos a estrutura enquanto uma determinada condição é verdadeira.

->A condição é baseada no estadado do programa, ou seja no atual valor das diferenças variáveis que definem o programa.

->Para a estrutura Enquanto(while) há a necessidade dea realização de uma atribuição que mo difique o resultado da expressão que controla o fluxo da aplicação, pois caso isto não ocorrer, o programa poderá entrar em um loop infinito.

-> Poderá entrar em loop infinito se :
-Uma condição seja errroneamente escrita
-ou sua l[ogica de modificação impossibilite alteração do resultado da expressão ]

Utiliza o formato:
while(condição){
AÇÃO1
AÇÃO2
...
AÇÃON
}

                Exemplo While...
-Ler 50 números fornecidos pelo usuário, calcular e exibir a média:

...
float soma,count,num,media;
media = 0;
soma = 0;
cont = 0;
while(cont<50){
scanf("%f", &num);
soma = soma + num;
cont++
} 
media = soma/cont;
printf("%f", medai);
...
*/

//-Ler 10 números fornecidos pelo usuário, calcular e exibir a média:



#include <stdio.h>

int main(void) {
  
  //Inicialização
  float numero, soma = 0,media;
  int contador = 0;
    media = 0;
   
      // Condição
    while(contador < 10){
      // leitura
      printf(" Informe o %dº valor: ", contador +0);
      scanf("%f", &numero);

      //Somando
      soma +=numero; // soma = soma + numero;

      //Alterando o valor da variável
      contador++;
   
    } 
    printf("Soma: %f.2\n", soma);
    media = soma / (contador - 1); 
    printf("A média é: %.2f\n", media);
    

  
  return 0;
}
