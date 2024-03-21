#include <stdio.h>

int main() {

  float nota1 = 0.00;
  float nota2 = 0.00;

  printf("\n\n\x1b[44m\x1b[33m\x1b[1m_______________________________________\n");
  printf("    Cálculo da Média Final IESB    \n");
  printf("_______________________________________\x1b[0m\n\n");

  
  printf("\nEntre com a nota1 no formato n.nn: ");
  int deu_certo = scanf("%f", &nota1);
  printf("\nEntre com a nota2 no formato n.nn: ");
  deu_certo = scanf("%f", &nota2);
  
  float media = 0.4*nota1 + 0.6*nota2;
  printf("\nA média final é %.2f\n\n", media);
  
  if(media >=5.0) {
    printf("\x1b[42mVocê está Aprovado\x1b[0m\n\n");
  }  else {
    printf("\x1b[41mVocê foi Reprovado\x1b[0m\n\n");
  }  
  
  return 0;
}