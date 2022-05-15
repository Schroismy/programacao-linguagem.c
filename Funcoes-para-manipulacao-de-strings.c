
/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//->Exemplo1

//Contabiliza a quantidade de caracteres ->strlen()
int main(void) {
  char frase[30];
  int cont, contCaracteres = 0;

  printf("Informe uma frase: ");
  gets(frase);
  
//for( cont= 0; frase[cont] != '\0'; cont++){
//   contCaracteres++;}

   contCaracteres = strlen(frase);
  
  setlocale(LC_ALL, "Portuguese");
  
  printf("A quantidade de caracteres é: %d\n", contCaracteres);
  return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//->Exemplo2

//Comparar duas strings --> strcmp()
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  char frase1[30] ="Teste";
  char frase2[30] ="Teste1";
  int comparador;

  printf("Informe a primeira frase: ");
  gets(frase1);

  printf("Informe a segunda frase: ");
  gets(frase2);
  
  comparador = strcmp(frase1, frase2);

  printf("O valor de comparador: %d\n", comparador);
  
  if(comparador == 0){
      printf("Strings iguais\n");
  }
   else{
      printf("Strings diferentes\n");
   }
     
  return 0;
}

*/

/*
//->Exemplo2.1

//Comparar duas strings --> strcmp()
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  char frase1[30] ="Teste";
  char frase2[30] ="Teste1";
 

  printf("Informe a primeira frase: ");
  gets(frase1);

  printf("Informe a segunda frase: ");
  gets(frase2);
  
  
  if( strcmp(frase1, frase2) == 0){
      printf("Strings iguais\n");
  }
   else{
      printf("Strings diferentes\n");
   }
     
  return 0;
}
*/

/*
//->Exemplo3

//Concatenar ou seja juntar strings --> strcat()
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  char frase1[30];
  char frase2[30];
 

  printf("Informe a primeira frase: ");
  gets(frase1);

  printf("Informe a segunda frase: ");
  gets(frase2);

//Junta a frase1 com a frase2 e guardaria o resultado na frase1
  strcat(frase1, frase2);
  
  puts(frase1);
     
  return 0;
}
 
*/

/*
//->Exemplo3.1

//Concatenar ou seja juntar strings --> strcat()
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  char frase1[30];
  char frase2[30];
 

  printf("Informe a primeira frase: ");
  gets(frase1);

  printf("Informe a segunda frase: ");
  gets(frase2);

 // As "" servem para indicar o espaço
  strcat(frase1," ");
  strcat(frase1, frase2);
  
  puts(frase1);
     
  return 0;
}
 
*/

/*
//->Exemplo3.2

//Concatenar ou seja juntar strings --> strcat()
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  char frase1[30];
  char frase2[30];
  char frase3[30];

  printf("Informe a primeira frase: ");
  gets(frase1);

  printf("Informe a segunda frase: ");
  gets(frase2);

   printf("Informe a terceira frase: ");
  gets(frase3);

 // As "" servem para indicar o espaço
  strcat(frase1, " ");
  strcat(frase1, frase2);
  strcat(frase1, " ");
  strcat(frase1, frase3);
  
  puts(frase1);
     
  return 0;
}
 */

//->Exemplo4

//Fazer uma cópia de uma string  para outra --> strcpy()
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  char frase1[30];
  char frase2[30];
  
  printf("Informe a primeira frase: ");
  gets(frase1);

  strcpy(frase2, frase1);

  puts(frase2);

  
  
  

 

  
  puts(frase1);
     
  return 0;
}
 
