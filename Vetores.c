/*
                      Vetores
- É uma variável composta a partir de agregação de um conjunto de variáveis do mesmo tipo.

-Um vetor aloca, de forma sequencial, um conjunto de variáveis de mesmo tipo na   
 memória

- Essas variáveis podem ser acessadas através de um índice, que define a localização da variável específica no vetor.

                     Declaração
Declaração:
  -TIPOnome[tamanho]

 -Exemplo:
  -int vet[10]; // 10 é quantiade máxima de elementos que ele consegue ter dentro da estrututura.


              Atribuição
-Atribuição;
  -nome[índice]=valor

->Exemplo:
  -vet[1]=5;
  -vet[5]=77

              Utilização
->Vetores são úteis quando queremos guardar um conjunto de valores de um mesmo tipo de dados na memória.

-> Utilizando estrutura de repetição para acessar de forma genérica esses dados

->Exemplo: Ler a nota de 5 alunos, calcular a média e contar quantos alunos ficaram acima da média!!


                     SEM O USO DE VETORES
  Exemplo de cima
  int main(){ 
  //Definindo Variáveis
  int n1,n2,n3,n4,n5,media = 0, alunos =0;
  //Leitura das variáveis
  scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
  //Calculo da média
  media = (n1 + n2 + n3 + n4 + n5) / 5;
  if(n1 > media)
  alunos++;
  if(n2 > media)
  alunos++;
  if(n3 > media)
  alunos++;
  if(n4 > media)
  alunos++;
  if(n5 > media)
  alunos++;
  prinf("Alunos acima da media = %d", alunos);
  
  return 0;
  }


                    COM O USO DE VETORES 
  int main(){
  int n[5],media = 0, alunos = 0, cont;
  for (cont = 0; cont < 5; cont++){
  scanf("%d", &n[cont]);      
  //cont ->Variável de controle
  // n[cont] -> É a posição do vetor
  // n ->Indice
  media = media + n[cont];
  }
  media = media /cont;
  for(cont = 0; cont < 5; cont++){
    if(n[cont] > media){
    alunos++;
    }
  }
  printf("Alunos acima da media = %d", alunos);
  return 0;

                      Exemplos
-Criar um vetor de valores inteiros com 1.000 posições, inicializar os valores de forma decrescente e depois imprimir os valores lidos
-Exemplo:1ª posição do vetor 1.000, 2ª posição tem um valor 999...
-Implementar utilizando todas as outras estruturas de repetição que vimos até agora(while;do... while).Exemplo abaixo utiliza estrutura for

  int main(){
  int vet[1000],cont;
  for(cont = 0; cont < 1000; cont++){
  vet[cont] = 1000 - cont;
  }
  for(cont = 0; cont < 1000; cont++){
  printf("%d", vet[cont]);
  }
  return 0;
  }

Exemplos
-Faça um algoritmo que leia 1.000 elementos.Ao final do algoritmo, apresente a soma de todos os elementos que sejam pares.
-Implementar utilizarndo todas as outras estruturas de repetição que vimos até agora (while; for). Exemplo abaixo utiliza estrutura do... while:

int main(){
  int vetorzao[ 1000], cont, soma = 0;
  cont = 0;
  do{
    scanf("%d", &vetorizao[cont]);
    if((vetorzao[cont])%2) == 0{
      soma = soma + vertorzao[cont];
    }
    cont++
  }while(cont < 1000);
      printf("Soma de pares = %d", soma);
  return 0;
  }
*/



/*
#include <stdio.h>

int main(){
  int vet[1000],cont;
  for(cont = 0; cont < 1000; cont++){
  vet[cont] = 1000 - cont;
  }
  for(cont = 0; cont < 1000; cont++){
  printf("%d", vet[cont]);
  }
  return 0;
  }
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese" );

    int vet[1000], cont;

    for(cont = 0; cont < 1000; cont ++){
        vet[cont] = 1000 - cont;
    }
    for(cont = 0; cont < 1000; cont ++){
     // Tabe é um \t
     printf("%d\t", vet[cont]);
    }
    return 0;
    }
    */


   /*
    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

   int main(){

    setlocale(LC_ALL, "Portuguese" );

    int vet[1000], cont = 0;

    while(cont < 1000){
         vet[cont] = 1000 - cont;
         cont++;
    }

    cont = 0;
    while(cont < 1000){
         printf("%d\t", vet[cont]);
         cont++;
    }
    return 0;
    }
    */
    //while executa o programa no início
    // do... while executa o programa no final

    /*
    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main(){

    setlocale(LC_ALL, "Portuguese" );

    int vet[1000], cont = 0;

    do{
         vet[cont] = 1000 - cont;
         cont++;

    }while(cont < 1000);
         vet[cont] = 1000 - cont;
         cont++;


    cont = 0;
    do{
        printf("%d\t", vet[cont]);
        cont++;

    }while(cont < 1000);

    return 0;
    }

    */

    /*
    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main(){

    setlocale(LC_ALL, "Portuguese" );

    int vet[10], cont = 0, soma = 0;

    for(cont = 0; cont < 10; cont++ ){
        printf("Informe o elemento do índice %d: ", cont);
        //Leitura
        scanf("%d", &vet[cont]);
    }

    for(cont = 0; cont < 10; cont++){
        if(vet[cont] % 2 == 0){
        soma += vet[cont];
        }
    }
    printf("A soma dos elementos pares é: %d\n", soma);

    return 0;
    }

    */

    /*
    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main(){

    setlocale(LC_ALL, "Portuguese" );

    int vet[10], cont = 0, soma = 0;

    for(cont = 0; cont < 10; cont++ ){
        printf("Informe o elemento do índice %d: ", cont);

        //Leitura
        scanf("%d", &vet[cont]);
        if(vet[cont] % 2 == 0){
        soma += vet[cont];
        }
    }

    printf("A soma dos elementos pares é: %d\n", soma);

    return 0;
    }

    */
    /*
    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main(){

    setlocale(LC_ALL, "Portuguese" );

    int vet[10], cont = 0, soma = 0;

    while(cont < 10){
             printf("Informe o elemento do índice %d: ", cont);
        //Leitura
        scanf("%d", &vet[cont]);

        if(vet[cont] % 2 == 0){
        soma += vet[cont];
        }
        cont++;
    }

    printf("A soma dos elementos pares é: %d\n", soma);

    return 0;
    }

    */

    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main(){

    setlocale(LC_ALL, "Portuguese" );

    int vet[10], cont = 0, soma = 0;

    do{
             printf("Informe o elemento do índice %d: ", cont);
        //Leitura
        scanf("%d", &vet[cont]);

        if(vet[cont] % 2 == 0){
        soma += vet[cont];
        }


        cont++;
    }while(cont < 10);

    printf("A soma dos elementos pares é: %d\n", soma);

    return 0;
    }



