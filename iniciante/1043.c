#include <stdio.h>

int main(void) {
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);

  if (a >= b + c)
    printf("Area = %.1f\n", (a + b) * 0.5 * c);
  else if (b >= a + c)
    printf("Area = %.1f\n", (a + b) * 0.5 * c);
  else if (c >= b + a)
    printf("Area = %.1f\n", ((a + b) * 0.5) / c);
  else
    printf("Perimetro = %.1f\n", a + b + c);

  return 0;
}
