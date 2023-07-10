#include <stdio.h>
#include <stdlib.h>

int main(void){

	int dist;
	scanf("%d", &dist);

	int time = 60 * dist / 30;
	printf("%d minutos\n", time);
	
	return 0;
}
