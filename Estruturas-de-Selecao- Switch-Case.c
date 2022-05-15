// Defaul--> funciona como  se fosse o else
//Defaul --> Usado  onde nenhum dos casos é verdadeiro.
//Break--> Não deve executar os casos seguintes, deve para a execução

/*
  Estrutura de Seleção.
-Exemplo:"Avisar se um número é igual a zero, igual a 1 ou diferente de zero e de 1"

#include <stdio.h>

int main(void){
int numero;
scanf("%d",&numero);
switch(numero){
case 0:
printf("Iguala a zero!");
break;
case 1:
printf("Iguala a 1!");
break;
defaul;
printf("Diferente de zero e 1!")
}
return 0;
}

*/


#include <stdio.h>

int main(void) {
  int dia;
  
  printf("Informe  dia: ");
  scanf("%d", &dia);

  switch(dia){
    case 1:
        printf("Domingo \n");
        break; 
    case 2:
        printf("Segunda-feira \n");
         break; 
    case 3:
        printf("Terça-feira \n");
         break; 
    case 4:
        printf("Quarta-feira \n");
        break; 
    case 5:
        printf("Quinta-feira \n");
        break; 
    case 6:
        printf("Sexta-feira \n");
        break; 
    case 7:
        printf("Sábado \n");
        break; 
  default:
    printf("Dia inválido!\n");
  }
  
  return 0;
}
