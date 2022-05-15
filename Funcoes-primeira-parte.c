/*
      Funções (sub-rotinas ou procedimentos)

->Permite a divisão de problemas em partes
->Por que usar funções?
-Para evitar qu um trecho de código seja repetido várias vezes dentro de um mesmo programa;
-Permitir o reaproveitamento de códogo já construído;
-Modificar um trecho de um código;
-Blocos menores para testar a corretude do código;
-Facilita a leitura do algoritmo.

            Escopo de Variáveis
-Variáves locais:
->Variáveis declaradas DENTRO de uma função são chamadas de  variáveis locais.
->Elas existem apenas dentro do escopo da função onde foram criadas, não estando acessíveis para as outras funções.

Variáveis globais:
=>Sempre que uma variável é declarada FORA de uma função, ela é chamada de variável global;
=>Elas podem ser utiizadas ou acessadas por qualquer função.

exemplo
Tipo,nome_funcao(tipo parametro1,...,tipo parametro N)
{
Corpo da função;
return valor_retorno;
}

->Tipo: o tipo do dado valor que a função irá retornar(int,char,...etc)para quem chamou a função.Se nada for especificado, o compilador ira considerar será retornado um valor inteiro;
->Nome_funcao: nome da funcão;
->tipo parametro1...N: a variável ou lista de variáveis que recebem os valores dos argumentos quando a função é chamada.Deve-se incluir  o tipo eo nome de cada variável;
->Corpo da funcao: códifgos que serão executados dentro da função declaração  de variáveis locais;
->return valor_retorno: o comando que realiza o retorno de um valor para função chamadora.

                        Comando Return.
-Utilizado para realizar o retorno da função. Ele pode ser executado em qualquer ponto da função na qual deseja-se finalizar a execução da função e retornar um valor.

->O comando return interrompe a execução da função e indicar o valor de retorno da mesma

->O valor etornado pelo return deve ser compatível com o tipo de retorno da função, que é defnido no momento  da definição da função.

->Ou seja, o valor de return será convetido no tipo específicado no cabeçalho da função.  

Exemplos de return
-Void-> não tem tipo
  -return    // não retorna nada
  -return3   //retorna o valor 3
  -return x  //retorna o valor contido na variável
  return a + b  //retorna soma de a com b.

int soma(int a, int b){
return a +b; //ou int soma = a + b;
            //return soma;
}

Tipos de Funções
->Funções sem pagagem de parâmetro
->Funções com passagem de parâmetro por valor

Exemplo de função sem passagem de parãmetro
void teste(){
int a;
a = 25;
printf("%d", a);
}

Exemplo  de Função com passagem de parâmetro
void teste(int a){
a = 25;
printf("%d", a);
}

*/

/*
1. Criar uma função que recebe um valor inteiro e verificar e exibir na tela se o valor é par ou impar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void VerificarNumero(int numero){
    if( numero % 2 == 0){
      printf("Par!\n");
    }
    else{
      printf("Ímpar!\n");
    }
  
}


int main() 
{
  int numero; 
setlocale(LC_ALL, "Portuguese");

  printf("Informe o número: ");
  scanf("%d", &numero);

  VerificarNumero(numero);
  
  return 0;
}
