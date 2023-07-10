#include <stdio.h>
#include <stdlib.h>

int main(void){

	int totalDist;
	float totalGas;

	scanf("%d", &totalDist);
	scanf("%f", &totalGas);

	float meanConsume = totalDist / totalGas;
	printf("%.3f km/l\n", meanConsume);

	return 0;
}
