#include <math.h>
#include <stdio.h>


int main()
{
	double a;
	double b;
	scanf("%lf\n", &a);
	scanf(" %lf\n", &b);

	double c = sqrt((a*a +b*b));
	printf("The hypotenuse is: %f\n", c);
	return 0;

}
