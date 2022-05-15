/*
    Cadeia de caracteres


->string é um vetor de char ou veor de caracteres  e diferentes dos outros vetores

-> Uma string(ou cadeia de caracteres) na linguagem C é um vetor de caracteres em que o carcter nulo('\0') é imterpretado como fim da pare relevante do vetor.

->Para especificar um vetor para armazenar uma cadeia deve-se sempre reservar um espaço para este caráter. 
->Por exemplo, para armazenar uma cadeia de 40 caracteres deve-se reservar um vetor de 41 caracteres.


char nome[20];
nome[0] ='A';
nome[1] ='N';
nome[2] ='A';
nome[3] ='\0';
nome[4] =?
nome[5] =?

Exemplo

#include <stdio.h>

int main(void) {

  char nome[20] = "Gilseone Moraes";
  printf("%s", nome);
  
  return 0;
}



 //Exemplo 2
#include <stdio.h>

int main(void) {

  char nome[20] = "Gylseone Moraes";
  nome[1] = 'i';
  
  printf("%s", nome);
  
  return 0;
}


//exemplo3
#include <stdio.h>

int main(void) {

  char nome[20] = "Gylseone Moraes";
  nome[1] = 'i';
  
  printf("%s\n", nome);
  printf("%c\n", nome[7]);
  
  return 0;
}

//Exemplo4
#include <stdio.h>

int main(void) {

  int vet[10] ={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  char nome[10] = {'G','i','l','s','e','o','n','e','\0'};
  nome[1] = 'i';
  
  printf("%s\n", nome);
 
  
  return 0;
}
*/

#include <stdio.h>

int main(void) {

  
  //Declarar cadeia de caracteres 
char nome[20];

  printf("Informe o seu nome: ");
  //Lê até o primeiro espaço
  //scanf("%s", &nome);

  //Lê o nome inteiro com espaço
  gets(nome); // O scanf pega até o primeiro espaço lido

 // printf("O nome lido é %s\n", nome); Não consegue fazer o %s\n no puts
  
  //Mosra na tela o nome completo
  puts(nome);
  
  return 0;
}
