#include <stdio.h>

int main()
{
    double r, n = 3.14159;

    scanf("%lf", &r);

    double h = (r * r) * n;

    printf("A=%.4lf\n", h);

    return 0;
}