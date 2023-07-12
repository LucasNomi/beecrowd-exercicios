#include <stdio.h>

int main(void) {
  int cod, qtd;
	float preco;
  scanf("%i %i", &cod, &qtd);

  switch (cod) {
  case 1:
    preco = qtd * 4.00;
    break;
  case 2:
    preco = qtd * 4.50;
    break;
  case 3:
    preco = qtd * 5.00;
    break;
  case 4:
    preco = qtd * 2.00;
    break;
  case 5:
    preco = qtd * 1.50;
    break;
  default:
    break;
  }

	printf("Total: R$ %.2f\n", preco);

  return 0;
}
