#include <stdio.h>

int main() {
  int val1, val2;
  scanf("%d %d", &val1, &val2);

  if (val1 == val2)
    printf("Sao Multiplos\n");
  else if (val1 > val2) {
    if (val1 % val2 == 0)
      printf("Sao Multiplos\n");
    else
      printf("Nao sao Multiplos\n");
  } else {
    if (val2 % val1 == 0)
      printf("Sao Multiplos\n");
    else
      printf("Nao sao Multiplos\n");
  }

  return 0;
}
