#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void){

  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);

  double trianArea = a * c * 0.5;
  double circArea = PI * (c * c);
  double trapArea = 0.5 * (a + b) * c;
  double quadArea = b * b;
  double rectArea = a * b;

  printf("TRIANGULO: %.3lf\n", trianArea);
  printf("CIRCULO: %.3lf\n", circArea);
  printf("TRAPEZIO: %.3lf\n", trapArea);
  printf("QUADRADO: %.3lf\n", quadArea);
  printf("RETANGULO: %.3lf\n", rectArea);

  return 0;
}
