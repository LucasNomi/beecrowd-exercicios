#include <stdio.h>
#include <stdlib.h>

int main(void){

  char name;
  scanf("%s", &name);

  double fixedSalary;
  scanf("%lf", &fixedSalary);

  double totalSells;
  scanf("%lf", &totalSells);

  double finalSalary = fixedSalary + ((totalSells * 15) / 100);
  printf("TOTAL = R$ %.2lf\n", finalSalary);
  return 0;
}
