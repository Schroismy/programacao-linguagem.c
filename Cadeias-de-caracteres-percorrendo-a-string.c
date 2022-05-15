/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char frase[20];


  printf("Informe a frase: ");
  gets(frase);

  for(cont = 0; frase[cont] != '\0' ; cont++){
    printf("%c\n",frase[cont]);
  }
 
  return 0;
}


//Exemplo2
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
setlocale(LC_ALL, "Portuguese");
  
  char frase[50];
  int cont, contCaractere = 0;
  

  printf("Informe a frase: ");
  gets(frase);

  for(cont = 0; frase[cont] != '\0' ; cont++){
    contCaractere++;
  }

  printf("%d\n", contCaractere);
  
  return 0;
}


//Exemplo3
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
setlocale(LC_ALL, "Portuguese");
  
  char frase[50];
  int cont, contCaractereA = 0;
  

  printf("Informe a frase: ");
  gets(frase);

  for(cont = 0; frase[cont] != '\0' ; cont++){
    if(frase[cont] == 'a'|| frase[cont] =='A'){
      contCaractereA++;
      
    }
        
  }

  printf("%d\n", contCaractereA);
  
  return 0;
}
*/
/*
//Exemplo4
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void) {
setlocale(LC_ALL, "Portuguese");
  
  char frase[50];
  int cont, contCaractereA = 0;
  

  printf("Informe a frase: ");
  gets(frase);

  for(cont = 0; frase[cont] != '\0' ; cont++){
    if(tolower(frase[cont]) == 'a'){
      contCaractereA++;
    }
  }

  printf("%d\n", contCaractereA);
  
  return 0;
}
*/

/*
//Exemplo5 
//Converte tudo para minúsculos 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void) {
setlocale(LC_ALL, "Portuguese");
  
  char frase[50];
  int cont;

  printf("Informe a frase: ");
  gets(frase);

  for(cont = 0; frase[cont] != '\0' ; cont++){
      frase[cont] = tolower(frase[cont]);
  }

 puts(frase);
  return 0;
}
*/

//Exemplo6
//Converte tudo para maiusculo 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void) {
setlocale(LC_ALL, "Portuguese");
  
  char frase[50];
  int cont;

  printf("Informe a frase: ");
  gets(frase);

  for(cont = 0; frase[cont] != '\0' ; cont++){
      frase[cont] = toupper(frase[cont]);
  }

 puts(frase);
  return 0;
}
