#include <stdio.h>

int main(void){

	int hours, km;
	scanf("%d", &hours);
	scanf("%d", &km);

	int dist = km * hours;
	float liter = dist / 12.0;

	printf("%.3f\n", liter);
	return 0;

}
