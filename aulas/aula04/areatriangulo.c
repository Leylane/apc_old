#include <stdio.h>
int main(){


  int base = 0;
  int altura = 0;
  printf("\n\n\x1b[35m_______________________________________\n");
  printf("    Cálculo da Área do Triângulo    \n");
  printf("_______________________________________\x1b[0m\n\n");
  printf("\n Informe aqui a área da base do triangulo: ");
  int deu_certo = scanf("%i", &base);
  printf("\n Informe a area da altura do triangulo: ");
  deu_certo = scanf("%i", &altura);

  printf("\nA área do triangulo é: %i\n\n", base*altura/2);

  return 0;
}