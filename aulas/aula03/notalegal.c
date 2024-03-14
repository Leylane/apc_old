#include <stdio.h>
int main() {
  printf("\x1b[32m________________________________________\n");
  printf("           N O T A  LE G A L           \n");
  printf("________________________________________\x1b[0m\n");
  printf("ITEM                 QTD           VALOR   \n");
  printf("%-13s %10i %15.2f\n", "Banana Nanica", 1, 15.00);
  printf("%-13s %10i %15.2f\n", "Maca Fuji", 10, 50.00);
  printf("%-13s %10i %15.2f\n", "Uva Globo", 5, 26.00);
  //printf("Banana Nanica            1      R$ 15,00\n");
  //printf("Maca Fuji               10      R$ 50,00\n");
  //printf("Uva globo                5      R$ 26,00\n");
  printf("\x1b[32m----------------------------------------\x1b[0m\n");
  printf("\x1b[31mTOTAL .....................: R$ %8.2f\x1b[0m\n", 91.00);
    return 0;
}