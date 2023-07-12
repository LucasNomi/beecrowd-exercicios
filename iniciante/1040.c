#include <stdio.h>

int main(void) {
  float n1, n2, n3, n4;
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  float mean = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / (2 + 3 + 4 + 1);

  printf("Media: %.1f\n", mean);

  if (mean < 5.0)
    puts("Aluno reprovado.");
  else if (mean >= 7.0)
    puts("Aluno aprovado.");
  else {
    puts("Aluno em exame.");
    scanf("%f", &n1);
    printf("Nota do exame: %.1f\n", n1);
    mean = (mean + n1) / 2;
    if (mean >= 5.0)
      puts("Aluno aprovado.");
    else
      puts("Aluno reprovado.");
    printf("Media final: %.1f\n", mean);
  }

  return 0;
}
