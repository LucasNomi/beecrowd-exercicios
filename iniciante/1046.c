#include <stdio.h>

int main() {
  int initialTime, finalTime;
  scanf("%d %d", &initialTime, &finalTime);

  if (finalTime <= initialTime)
    finalTime += 24;

  int duration = finalTime - initialTime;

  printf("O JOGO DUROU %d HORA(S)\n", duration);
  return 0;
}
