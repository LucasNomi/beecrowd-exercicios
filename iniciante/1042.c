#include <stdio.h>

int main() {
  int val[3];
  int oldVal[3];
  int size = sizeof(val) / sizeof(val[0]);
  scanf("%d %d %d", &val[0], &val[1], &val[2]);

  for(int i = 0; i < size; i++){
    oldVal[i] = val[i];
  }

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j <= size - i; j++) {
      if (val[j] < val[i]) {
        int temp;
        temp = val[i];
        val[i] = val[j];
        val[j] = temp;
      }
    }
    printf("%d\n", val[i]);
  }

  printf("\n");

  for (int i = 0; i < size; i++) {
    printf("%d\n", oldVal[i]);
  }

  return 0;
}
