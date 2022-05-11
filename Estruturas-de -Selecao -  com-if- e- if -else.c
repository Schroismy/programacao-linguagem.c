/*
        Estrutura de seleção.
-Formato:
if(teste lógico){
ação só ocorre se for verdadeiro o teste
}else if (teste lógico) {
ação só ocorre se for verdadeiro o teste
} else  {
ação só ocorre se for falso os testes acima
}

Exemplo: "Avisar se um número é igual a zero, maior ou menor que zero"

#include <stdio.h>

int main (){
  int numero:
  scanf("%d", &numero);
  if(numero == 0){
  printf("Igual a  zero!");
  } else if(numero > 0) {
    printf("Maior que zero!");        ou
  } else {                       //  } else if(numero < 0){ 
    printf("Menor que zero!");
  }
  return 0;
}


*/


/*
  #include <stdio.h>

int main (){
  int numero;
  scanf("%d", &numero);
  if(numero == 0){
  printf("Igual a zero!");
  } else if(numero > 0) {
    printf("Maior que zero!");    
  } else {                       
    printf("Menor que zero!");
  }
  return 0;
}
 */

#include <stdio.h>

  int main ()
  { 
    int dia;
    printf("Informe o valor do dia: ");
    scanf("%d", &dia);

    // Se é  domingo
    if(dia == 1){
      printf(" Domingo!\n");
    }
      else if(dia == 2){
        printf("Segunda-feira!\n");
    }
      else if( dia == 3) {
        printf("Terça-feira!\n");
    }       
      else if( dia == 4) {
        printf("Quarta-feira!\n");
    }    
      else if( dia == 5) {
        printf("Quinta-feira!\n");
    }    
      else if( dia == 6) {
        printf("Sexta-feira!\n");
    }    
      else if( dia == 7) {
        printf("Sábado!\n");
    }    
    else{
       printf(" O dia é inválido!\n");
    }
  }












