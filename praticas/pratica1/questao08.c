/*
  8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>
#include <math.h>

int main() {
float segundos;

printf ("entre com o valor do tempo em segundos: ");
int deu_certo = scanf ("%f", &segundos);

float minutos = (60 / segundos);
float horas = (3600 / segundos);

  printf("O tempo é de %f\n segundos", segundos);
  printf("%f\n minutos", minutos);
  printf("e %f\n horas", horas);

return 0;
}