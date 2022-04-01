/*
 O que é uma variável?
   - Variável é um local reservado na memória para armazenar um tipo de dado.
   - Tipo de dado é um valor que vai ser lido  durante a execução do programa ou  é um valor que    eu vai ser atribuir enquanto  escrevo o código antes de rodar a minha aplicação.
   - Toda variável deve ter um IDENTIFICADOR, ou seja um nome.
   - Além de ter um nome, a variável também precisa ter um tipo.
   - O tipo de dado de uma variável determina o que ela é capaz de armazenar.

   Os principais tipos de dados numéricos dividem-se em:
    Inteiro: Armazena números inteiros sem parte com virgula
    Real: armazena números com casas decimais, são as variáveis de ponto flutuante;

    int: armazena valores numéricos inteiros.
    char: armazena caracteres
    float: armazena números com ponto flutuante(reais) com precisão simples
    double: armazena números com ponto flutuante, com precisão dupla,                                 ou seja normalmente possui o dobro da capacidade de uma variável do                             tipo float

    Usaremos principalmente:
      - int
      - char
      -float

     
      
      PODEMOS:
  
   Tipo nome = valor;                   ==> int quantidade;
   Tipo nome = valor 2;                 ==> int quantidade = 10; 

  Ex: int quantidade = 10;       Ex: int quantidade = 10              
  int x;                             int x = quantidade +2; 
  x = quantidade +2 


   Tipo nome1, = valor 2;               ==> float nota1, nota2, nota3;
   -Tipo nome1 = valor, nome2 = valor;   
    -Ex: int nome1 = valor, nome2 = valor;
    -Ex: float nome1 = valor, nome2 = valor;

    NÃO PODEMOS FAZER:
  Tipo 1nome;      ==>Ex: float 1Nota; ( isso esta errado) 
  Tipo fração;     ==>Ex: Tipo água  (NÃO PODE USAR ACENTO OU CARACTERES EXPECIAIS EM NOMES DE     VARIÁVEIS)
  Tipo nome;       ==>Ex: Tipo -nome (NÃO PODE USAR ESTE SINAL(-), ELE É UM SINAL DE MENOS)
  Tipo valor-total; ==>(Não pode usar este sinal em uma variável,nem para separar palavra que representa o nome da variável)


    OUTRAS FORMAS QUE PODEMOS FAZER:
    Tipo valor_total; (Pode por mais do que duas palavras no nome da variável)
    Tipo valorTotal; (Pode por aprimeira letra da palavra em minusculo e a 1ª letra da palavra       restante em maiúsculo)
    Tipo valorTotal; ==> Ex: float mediaTotalSemestre  Tipo valorTotal;==> Ex: float         
    MediaTotalSemestre
    Tipo VALOR_TOTAL;==> Boa pratica de programação
    Tipo VALORTOTAL; ==> Boa pratica de programação
    Tipo valortotal; ==> Boa pratica de programação
    Tipo valorTotal; ==> Boa pratica de programação
  */

 #include <stdio.h>
#include <stdbool.h> 

int main(void) {
  //declarando  uma variável
  //nome da variável: qtd
  // tipo da variável: int (Inteiro)
  //int qtd;

  //atribuindo valor a variável
   //qtd = 1;
    
    //alternativo
    int qtd = 1;
  
  char a = '@';
  char b = '1';

  printf("%c \n", a+b);
  printf("%d \n", a+b); 

 bool repete = true;

  //estrutura de repetição condicional
  // repete o bloco enquanto condição verdadeira
  //         |-------------------|
  //    +-----------+
  while (repete ) {  
  printf("%d \n",qtd);
    qtd = qtd + 1;
  // quando qtd chegar a 101 entra e troca repete
  if (qtd > 100){
    repete = false;
  }
  
   if (a == '1')  {
     printf("igual");
    } else {
   printf("diferente"); 
   }  
  //if (qtd > 11){
  //printf("maior que 10")
 // } else {
   //printf("maior ou igual a 11")
  
    }

  }

    if(c == 'x'){
        printf("\n A variavel c = letra x");
    }

    //Número par ou impar
    if ( %2 == 1){
        printf("\n A variavel a eh impar");
    else{
        printf("\n A variavel a eh par");
    }

    //Condicional Composta
    if (opcao == 1){
        printf("\nA opcao = 1");
    }else if(opcao == 2){
         printf("\nA opcao = 2");
    }else{
        printf("\nA opcao nao eh igual a 1 e nem 2");
    }

    //Pausa o programa após executar
    system("pause");

}
     
      
     
