/*
7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°
*/

#include <stdio.h>
#include <math.h>

int main() {

  const int angulo = 45;
  int distancia;

  printf("Entre com a distância percorrida: ");
  int deu_certo = scanf("%i", &distancia);

  const double PI = 3.1416;
  double seno_angulo = sin(angulo * (PI/180));
  double altura = seno_angulo * distancia;
  printf("A altura alcançada é %f\n", altura);
  

  return 0;
}