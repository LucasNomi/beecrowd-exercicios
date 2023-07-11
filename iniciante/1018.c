#include <stdio.h>

int main(void){

	int din, hundred, fifty, twenty, ten, five, two, one;
	scanf("%d", &din);

	printf("%d\n", din);
	hundred = din / 100;
	din %= 100;
	printf("%d nota(s) de R$ 100,00\n", hundred);
	fifty = din / 50;
	din %= 50;
	printf("%d nota(s) de R$ 50,00\n", fifty);
	twenty = din / 20;
	din %= 20;
	printf("%d nota(s) de R$ 20,00\n", twenty);
	ten = din / 10;
	din %= 10;
	printf("%d nota(s) de R$ 10,00\n", ten);
	five = din / 5;
	din %= 5;
	printf("%d nota(s) de R$ 5,00\n", five);
	two = din / 2;
	din %= 2;
	printf("%d nota(s) de R$ 2,00\n", two);
	one = din;
	printf("%d nota(s) de R$ 1,00\n", one);

	return 0;

}
