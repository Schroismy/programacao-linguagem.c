#include <stdio.h>

/* Escreva um algoritmo para ler as dimensões de um retângulo (base e altura),
   calcular e escrever a área do retângulo. Exercício  resolvido está em  verde.
 */

 /*int main(void) {
  float base,  altura,  area;
  printf("Informe o valor da base: ");
  scanf("%f", &base);
  
  printf("Informe o valor da altura: ");
  scanf("%f", &altura);
  
  area = base * altura;
  
  printf("O valor da área é: %.2f\n", area);
  
  scanf("%f", & area);
  return 0;
}
*/

int main(void) {
  float raio;
  float areaDaBase;
  float pi = 3.14159265358979323846 ;
  float metroQuadrado;
  printf("Informe o valor do raio: ");
  scanf("%f", &raio);
  
  //printf("Informe o valor do π (Pi): ");
  //scanf("%f", & pi);
  
  
  areaDaBase = raio * pi;
  metroQuadrado = raio * pi * 100;  
  
  printf("O valor da área da base é: %.2f\n", areaDaBase);
  printf("O valor o metro quadrado é de R$ %.2f\n", metroQuadrado);
  scanf("%f", & metroQuadrado);
  scanf("%f", & areaDaBase, & metroQuadrado );
  
 

  return 0;
}

//Tirar duvida de como se utiliza char. Eu sei //que é para caracter. 
