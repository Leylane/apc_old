#include <stdio.h>

int main() {
  float nota1 = 0.0;
  float nota2 = 0.0;

  printf("\nEntre com a nota1: ");
  scanf("%f", &nota1);
  
  printf("\nEntre com a nota2: ");
  scanf("%f", &nota2);

  float media = 0.4*nota1 + 0.6*nota2;

  printf("\nA média final é %.1f\n\n", media);

  if(media >=5.0) {
    printf("Aprovado\n\n");
  }  else {
    printf("Reprovado\n\n");
  }
  return 0;

}

