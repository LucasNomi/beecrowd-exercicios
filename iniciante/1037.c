#include <stdio.h>

int main(void){
	double value;
	scanf("%lf", &value);

	if(value < 0 || value > 100) puts("Fora do intervalo");
	else if(value <= 25.0)
		puts("Intervalo [0,25]");
	else if(value > 25.0 && value <= 50.0)
		puts("Intervalo (25,50]");
	else if(value > 50.0 && value <= 75.0)
		puts("Intervalo (50,75]");
	else
		puts("Intervalo (75,100]");
	
	return 0;
}
