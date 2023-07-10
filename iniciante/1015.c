#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float MeanDist(float x1, float y1, float x2, float y2);

int main(void){

	float x1,y1;
	scanf("%f %f", &x1, &y1);

	float x2,y2;
	scanf("%f %f", &x2, &y2);

	printf("%.4f\n", MeanDist(x1,y1,x2,y2));

	return 0;
}

float MeanDist(float x1, float y1, float x2, float y2){

return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
