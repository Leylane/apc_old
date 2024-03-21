#include <stdio.h>

int main() {

  char nome[31];
  int quantidade;
  float valor;
  
  printf ("Entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);
  
  printf ("Entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &quantidade);
  
  printf ("Entre com o valor do produto: ");
  deu_certo = scanf( "%f", &valor);
  
  printf("\x1b[32m________________________________________\n");
  printf("           N O T A  LE G A L           \n");
  printf("________________________________________\x1b[0m\n");
  printf("ITEM                 QTD           VALOR   \n");
  printf("%-13s %10i %15.2f\n", nome, quantidade, valor);
  printf("\x1b[32m----------------------------------------\x1b[0m\n");
  
return 0;
}

