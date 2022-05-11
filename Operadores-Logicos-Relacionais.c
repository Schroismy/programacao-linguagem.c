/*
      Testes Lógicos

-->Baseados em operadoras logicos relacionais


Lógicos &&,||,!
&&--> É operador E ou And  
&&--> Busca pelo certo
||-->é um operador Or ou ou
||--> Busca pelo erro
!-->É operador Not ou não lógico. 
!--> Ele nega operação 
Relacionais ==, >, <, >=, !=
*/



 /*
    //exemplo: 1
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  //Verificar se um número está no intervalo de 1 até 10 
 
  int numero;
  
  printf("Informe um número: ");
  scanf("%d", &numero);
//forma mais clara
    if( numero >= 1  && numero <= 10 ){
    printf("O número está dentro do intervalo\n");
  }
    else{
     printf("O número não está dentro do intervalo\n");
  }
return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "Portuguese");

//Verificar se um número está no intervalo de 1 até 10 
 
  int numero;
  
  printf("Informe um número: ");
  scanf("%d", &numero);

    if( numero < 1 || numero > 10 ){
    prntf("O número não está dentro do intervalo\n");
  }
    else{
     printf("O número está dentro do intervalo\n");
  }
  return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "Portuguese");

//Verificar se um número está no intervalo de 1 até 10 
 
  int numero;
  
  printf("Informe um número: ");
  scanf("%d", &numero);

    if(!(numero >= 1 && numero <= 10 )){
    printf("O número não está dentro do intervalo\n");
  }
    else{
     printf("O número está dentro do intervalo\n");
  }

  return 0;
}
