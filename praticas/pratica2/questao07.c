/*
7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/

#include <stdio.h>
int main(){
  float valor_hora_trabalho = 150.00f;
  float horas_trabalhadas = 100;
 
  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_hora_trabalho * horas_trabalhadas;
  float imposto_ir = salario_bruto * IR;
  float imposto_INSS = salario_bruto * INSS;

  float salario_liquido = salario_bruto - imposto_ir - imposto_INSS;
  
  printf("\x1b[32m________________________________________\n");
  printf("           C O N T R A C H E Q U E           \n");
  printf("________________________________________\x1b[0m\n");
  printf("Salario Bruto.............: R$ %8.2f\n", salario_bruto);
  printf("Imposto IR................: R$ %8.2f\n", imposto_ir);
  printf("Importo Previ.............: R$ %8.2f\n", imposto_INSS);
  printf("Salario Liquido...........: R$ %8.2f\n", salario_liquido);
  
  return 0;
}