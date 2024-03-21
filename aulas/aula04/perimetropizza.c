#include <stdio.h>
int main(){

  int raio = 0;
  const float PI = 3.14;
  
  printf("\n\n\x1b[43m\x1b[1m_______________________________________\n");
  printf("    Cálculo do Perímetro de uma Pizza    \n");
  printf("_______________________________________\x1b[0m\n\n");

  printf("Informe o valor do raio da pizza: ");
  int deu_certo=scanf("%i", &raio);

  printf("O perímetro da pizza é: %.2f\n", 2*PI*raio);
  
  return 0;
}