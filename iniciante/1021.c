#include <stdio.h>

int main(void){
	double din;
	int integerPart, decimalPart, hundred, fifty, twenty, ten, five, two, one;

	scanf("%lf", &din);
	integerPart = din;
	decimalPart = 100 * (din - integerPart);
	
	puts("NOTAS:");
	hundred = integerPart / 100;
	integerPart %= 100;
	printf("%d nota(s) de R$ 100.00\n", hundred);

	fifty = integerPart / 50;
	integerPart %= 50;
	printf("%d nota(s) de R$ 50.00\n", fifty);
	
	twenty = integerPart / 20;
	integerPart %= 20;
	printf("%d nota(s) de R$ 20.00\n", twenty);

	ten = integerPart / 10;
	integerPart %= 10;
	printf("%d nota(s) de R$ 10.00\n", ten);

	five = integerPart / 5;
	integerPart %= 5;
	printf("%d nota(s) de R$ 5.00\n", five);

	two = integerPart / 2;
	integerPart %= 2;
	printf("%d nota(s) de R$ 2.00\n", two);

	puts("MOEDAS:");

	one = integerPart;
	printf("%d moeda(s) de R$ 1.00\n", one);

	fifty = decimalPart / 50;
	decimalPart %= 50;
	printf("%d moeda(s) de R$ 0.50\n", fifty);

	twenty = decimalPart / 25;
	decimalPart %= 25;
	printf("%d moeda(s) de R$ 0.25\n", twenty);

	ten = decimalPart / 10;
	decimalPart %= 10;
	printf("%d moeda(s) de R$ 0.10\n", ten);

	five = decimalPart / 5;
	decimalPart %= 5;
	printf("%d moeda(s) de R$ 0.05\n", five);

	one = decimalPart;
	printf("%d moeda(s) de R$ 0.01\n", one);

	return 0;
}
