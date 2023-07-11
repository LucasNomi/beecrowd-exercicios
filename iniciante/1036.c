#include <stdio.h>
#include <math.h>

int main(void){
	double a,b,c;
	scanf("%lf %lf %lf", &a, &b, &c);

	double delta = pow(b,2) - 4 * a * c;

	if(delta < 0 || a == 0) puts("Impossivel calcular");
	else
		{
			double x1, x2;
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			
			printf("R1 = %.5lf\n", x1);
			printf("R2 = %.5lf\n", x2);
		}

	return 0;
}
