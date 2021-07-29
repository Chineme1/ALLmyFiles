#include <stdio.h>

int main()
{
	printf("How many books do you have?: ");
	double d;
	scanf("%lf",&d);


	printf("%f\n%e\n%g\n", d,d,d);
}
