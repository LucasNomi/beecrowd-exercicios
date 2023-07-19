#include <math.h>
#include <stdio.h>

void sort(float *arr, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] < arr[j]) {
        float temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main(void) {
  float triangule[3];
  scanf("%f %f %f", triangule, triangule + 1, triangule + 2);

  int size = sizeof triangule / sizeof triangule[0];

  sort(triangule, size);

  if (triangule[0] >= triangule[1] + triangule[2])
    printf("NAO FORMA TRIANGULO\n");
  else {
    float sqA = powf(triangule[0], 2);
    float sqB = powf(triangule[1], 2);
    float sqC = powf(triangule[2], 2);
    if (sqA == sqB + sqC) {
      printf("TRIANGULO RETANGULO\n");
    } else if (sqA > sqB + sqC) {
      printf("TRIANGULO OBTUSANGULO\n");
    } else {
      printf("TRIANGULO ACUTANGULO\n");
    }

    if (triangule[0] == triangule[1] && triangule[0] == triangule[2])
      printf("TRIANGULO EQUILATERO\n");
    else if (triangule[0] == triangule[1] || triangule[0] == triangule[2] ||
             triangule[1] == triangule[2])
      printf("TRIANGULO ISOSCELES\n");
  }

  return 0;
}
