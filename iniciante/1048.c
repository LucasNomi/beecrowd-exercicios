#include <stdio.h>

int main() {
  float salary;
  scanf("%f", &salary);

  float adjustment;
  int perc;

  if (salary <= 400.0) {
    perc = 15;
  } else if (salary >= 400.01 && salary <= 800.0) {
    perc = 12;
  } else if (salary >= 800.01 && salary <= 1200.0) {
    perc = 10;
  } else if (salary >= 1200.01 && salary <= 2000.0) {
    perc = 7;
  } else {
    perc = 4;
  }

  adjustment = (salary * perc) / 100;
  salary += adjustment;
  printf("Novo salario: %.2f\n", salary);
  printf("Reajuste ganho: %.2f\n", adjustment);
  printf("Em percentual: %d %%\n", perc);

  return 0;
}
