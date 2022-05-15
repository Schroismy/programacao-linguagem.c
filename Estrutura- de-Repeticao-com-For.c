/*
                  Estrutura de Repetição

->É utilizada  quando um trecho do algoritmo precisa ser repetido inúmeras vezes.
->Ao invés de repetirmos o trecho da algorito diversas vezes, podemos utilizar estruturas de repetição pra realizar essa repetição

->A estrutura de repetição da ações( ou de uma única ação) por
-Um número  defindo de vezes(exemplo, 20 X)
-Um número indefinido  de vezes
-Enquanto uma condição for verdadeira
-Atá que uma condição se torne falsa

Exemplo  do uso de estruturas de repetição incluem, por exemplo:
-Imprimir na tela a sequencia de números paraes entre[0, 100]
-Ler uma sequência de 20 notas e calcular a média

->Estruturas de repetição incluem:
-for(inicialização: condição ser verdadeira; increento)
//For ->Variável de controle 
-do{...} while(condição ser verdadeira)
//do...while-> Tipo de estrutura pos testada ou seja testa no final
-while (condição ser verdadeira) {...} 
// while -> Pré testada, faz o teste no começo 


                    Noção de Contador
-Com o uso de estruturas de repetição, utilizaremos diversar vezes a noção de contador

-Um contador é ua variável que tem seu valor incrementado ou decrementado inúmeras vezes a cada intaeração de estrutura de repatição

-Contador de 0 a 10 utilizando a estrutura do{...}while():
...
int contador = 0;
do{
   contador= contador + 1;
}while (contador < 10);
...


                    Estrutura FOR..
-Utilizada inicialmente quanto sabe-se o número de vezes que o trecho da algoritimo irá ser recebido

-Utiliza o formato:
for(var = INICIAL;var < valor final; var = var + 1){
...
}

-O incremento ou decremento da vriável na linguagem C, também pode ser abreviado por: var++ ou var--.

                              Exemplo FOR...

->Ler 50 números fornecidos pelo usuário, calcular e exibir a média:

...
float soma,count,num,media;
media = 0;
soma = 0;
for(cont =0;cont < 50;cont++){
  sncanf("%f",&num);
  soma = soma + num;
}
  soma = soma / cont;
  printf("%f",media);
}
*/

#include <stdio.h>

int main(void) {

  
  float numero, soma = 0, media; 
  int contador, qtdMax;

  printf("Informe aquntidade de númros lidos: ");
    scanf("%d", &qtdMax);
      
  //Inicialização depois testa
  for(contador = 1; contador <=qtdMax; contador++){
    
    //Executa o bloco
      printf("Informe o %dº valor : ",contador);
      scanf("%f", &numero);

      soma += numero;
  }

  media = soma / (contador - 1);
  
  printf("Média = %.2f\n", media);
 
  return 0;
  }
