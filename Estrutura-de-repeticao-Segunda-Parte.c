/*
    Estrutura de Seleção na Linguagem  C.
  -Estrutura de  seleção (decisão ou condicionais) possibilitam criar desvios na
execução de um algoritmo. -Percorrer um caminho diferente de execução. -Os
devios ocorrem atráves de testes lógicos (V ou F)

  Principais estruturas de decisão incluem:
  -if(teste lógico) {...}
  -if(teste lógico) {...} else {...}
  -if(teste lógico) {...} else if (teste lógico) {...}else{...}
  -switch(variável) {...}

- Formato
if (Teste lógico){
ação só ocorre se for verdadeiro o teste
}
Exemplo:"Avisar se um númer é iguala a zero"

#include <stdio.h>

  int main(void) {
int numero;
scanf("%d", & numero);
if(numero==0){
printf("igual a zero!");
}
return 0;

  }


  */

/*#include <stdio.h>

Cria um algoritmo pra verificar se a pessoa pode ser vacinada, contra o COVID-19
Pessoa deve ter pelo menos 85 anos
  */
/*int main(void) {
 int idadePessoa;
 printf("Informe a idade da pessoa: ");
 scanf("%d", &idadePessoa );

   //Verifique se a idade é maior ounigual a 85 anos
 if(idadePessoa >= 85){
 printf("A pessoa pode ser vacinada!\n");
 }
 return 0;
 }
*/

/*
  int main(
) {

  int idadePessoa;

  printf("Informe a idade da pessoa:");
  scanf("%d", &idadePessoa);

  // Verifique se a idade é maior ounigual a 85 anos
  if (idadePessoa >= 85) {
    printf("A pessoa pode ser vacinada!\n");
  } 
  else {
    printf("A pessoa não pode ser vacionada\n");
  }

  return 0;
}
*/

   /* int main(void) {

     (1)

  Verificar se um  nuro é par ou impar 
      PAR--> 0,2,4,6,8  --> O resto da divisão é zero.
    Impar--> 1,3,5,7,9  --> O resto da divisão por 2 não é zero.
    */
  /*
int numero,resto;

  printf("Informe o numero: ");
  scanf("%d", &numero);

  resto = numero % 2;
printf("O resto: %d\n", resto);
  
  if(resto == 0){
  printf("É Par!\n");
  }
  else{
  printf("É Ímpar!\n");
    }
  
  return 0;
}
*/
/*
if(teste lógico){
ação só ocorre se for verdadeiro o teste
} else {
ação só ocore se for falso o teste
}
*/

 // (2)

  int main(void) {

    /*
  Verificar se um  nuro é par ou impar 
      PAR--> 0,2,4,6,8  --> O resto da divisão é zero.
    Impar--> 1,3,5,7,9  --> O resto da divisão por 2 não é zero.
    */
  
  int numero,resto;

  printf("Informe o numero: ");
  scanf("%d", &numero);

 
  if(numero%2 == 0){
  printf("É Par!\n");
  }
  else{
  printf("É Ímpar!\n");
    }
  
  return 0;
}
 /*
    Formato
if(teste lógico){
ação só ocorre se for verdadeiro o teste
}else if (teste lógico) {
ação só ocorre se for verdadeiro o teste
} else  {
ação só ocorre se for falso os testes acima
}
*/
