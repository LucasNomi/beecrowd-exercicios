#include <stdio.h>

int main(void) {
  float x, y;
  scanf("%f %f", &x, &y);

  if (x > 0.0) {
    if (y > 0.0)
      puts("Q1");
    else if (y < 0.0)
      puts("Q4");
    else
      puts("Eixo X");
  } else if (x < 0.0) {
    if (y > 0.0)
      puts("Q2");
    else if (y < 0.0)
      puts("Q3");
    else
      puts("Eixo X");
  } else {
    if (y > 0.0)
      puts("Eixo Y");
    else if (y < 0.0)
      puts("Eixo Y");
    else
      puts("Origem");
  }

  return 0;
}
