#include <stdio.h>
/*Escreva um algoritmo para ler o número total de eleitores de um município, o
 * número de brancos, nulos e válidos. Calcular e escrever o percentual que cada
 * um representa em relação ao total de eleitores. */

// per ---> Percentuais
int main(void) {

  int totalEleitores, votosBrancos, votosNulos, votosValidos;
  float percVotosBrancos, percVotosNulos, percVotosValidos;


  
  printf("Informe o total de eleitores: ");
  scanf("%d", &totalEleitores);

   printf("Informe a quantidade de votos brancos: ");
  scanf("%d", &votosBrancos);

   printf("Informe a quantidade de votos nulos: ");
  scanf("%d", &votosNulos);

   printf("Informe a quantidade de votos validos: ");
  scanf("%d", &votosValidos);

  // cast ==> conversão explícita 
  percVotosBrancos = ((float)votosBrancos * 100) /(float) totalEleitores;
   //percVotosBrancos = ((float)votosBrancos * 100) /(float) totalEleitores;
  percVotosNulos =  (float)votosNulos * 100 /(float) totalEleitores;
  percVotosValidos = (float)votosValidos * 100 /(float) totalEleitores;
  
  printf("Percentual de votos brancos: %.2f%%\n",percVotosBrancos);
  printf("Percentual de votos nulos: %.2f%%\n",percVotosNulos);
  printf("Percentual de votos válidos: %.2f%%\n",percVotosValidos);

  

  return 0;
}
