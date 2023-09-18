#include <stdio.h>
#include <math.h>
int main()
{
	double x = -2.9;
	double y = 15.5;
	double z = 1.5;
	double a;
	double b;
	double p;
	double f;
	double i;
	p = (x + z) / x;
	a = sqrt(pow(x, 2) + y) - pow(y, 2) * pow(sin(p), 3);
	f = sqrt(pow(z, 2) + pow(y, 2));
	i = cos(pow(x, 3));
	b = pow(i, 2) - x / f;
	printf("a=%lf", a);
	printf("b=% lf",b);
	return 0;
}