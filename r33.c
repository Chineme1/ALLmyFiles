#include <stdio.h>


int main()
{
	int x = 7384;
	printf("%d\n", x/1000);
	printf("%.3f\n", x/1000);
	printf("%.3f\n", x/1000.0);
	printf("%.3f\n", (float) x/1000);
}
