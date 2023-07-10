#include <stdio.h>
#include <stdlib.h>

int Maior(int a, int b);

int main(void){

	int a,b,c;

	scanf("%d %d %d", &a, &b, &c);

	int middle = Maior(a,b);
	int greater = Maior(middle,c);

	printf("%d eh o maior\n",greater);
	return 0;
}

int Maior(int a, int b){

	return (a + b + abs(a - b)) / 2;
	
}
