
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "Portuguese");
  
  //Inicialização
  float numero, soma = 0,media;
  int contador = 0, qtdValor;
    media = 0;

    printf("Informe a quntidade de numeros para calcular a média: ");
    // leitura da Variável
    scanf("%d", & qtdValor);
  
    // Condição
    while(contador < qtdValor){
      // leitura
      printf(" Informe o %dº valor: ", contador +1);
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

/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  //Localização para português 
  setlocale(LC_ALL, "Portuguese");
  
  //Inicialização
  float numero = 0, soma = 0,media;
  int contador = 0;
  media = 0;

    // Condição
    while(numero >= 0 ){    //(numer != -1) pode ser assim
    printf("Informe o %dº valor: ", contador+1);

    //Ler o numero
    scanf("%f", &numero);

      if(numero >= 0){
        //Somando
        soma = soma + numero;
        //Incremento
        // não vai precisar  diminuir um la fora, só se ele estiver fora da chavae
          contador++; 
        
      }
  
  }
  
     printf(" Soma: %.2f\n", soma);
    
     media = soma / contador ; 
    printf("O valor da média é : %.2f\n", media);
  
    return 0;
    }
*/
