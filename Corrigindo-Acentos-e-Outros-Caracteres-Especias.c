#include <stdio.h>
#include <stdalign.h>
#include <locale.h> // serve para aceitar  a nossa acentuação da lingua Portuguesa.


int main() 
{ // Este exemplo funciona tam bém para Code Block
  
  setlocale (LC_ALL, "Portuguese");// ou setlocale (LC_ALL, "");

  printf("Olá, aqui é um exemplo de acentuação\n");
  
  
  return 0;
}
