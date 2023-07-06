#include <stdio.h>
#include <stdlib.h>

int main(){

  int number;
  float hoursWorked;
  float paymentPerHour;

  scanf("%d", &number);
  scanf("%f", &hoursWorked);
  scanf("%f", &paymentPerHour);

  float salary = hoursWorked * paymentPerHour;
  printf("NUMBER = %d\n", number);
  printf("SALARY U$ = %.2f\n", salary);

  return 0;
}
