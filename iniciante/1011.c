#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main(void) {

  double radius;
  scanf("%lf", &radius);
  
  double volume = (4.0/3) * PI * pow(radius, 3);

  printf("VOLUME = %.3lf\n", volume);
  return 0;
}
