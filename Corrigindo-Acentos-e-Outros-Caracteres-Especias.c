#include <stdio.h>
#include <stdalign.h>
#include <locale.h> // serve para aceitar  a nossa acentuação da lingua Portuguesa.


int main() 
{ // Este exemplo funciona também para Code Block
  
  setlocale (LC_ALL, "Portuguese");

  printf("Olá, aqui é um exemplo de acentuação\n");
  
  
  return 0;
}
