/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%
*/

#include <stdio.h>

int main(){

  const float preco_inicial = 100.0f;
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;
  const float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;
  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor_pis_pasep = preco_inicial * PIS_PASEP;
  
  
  printf("O preço inicial do produto é R$%.2f\n", preco_inicial);
  printf("O preço final do produto é R$%.2f\n", preco_final);
  printf("O valor do ICMS é R$%.2f\n", valor_icms);
  printf("O valor do COFINS é R$%.2f\n" , valor_cofins);
  printf("O valor do PIS/PASEP é R$%.2f\n" , valor_pis_pasep);
    
  return 0;
}

