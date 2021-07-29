#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* x = malloc(sizeof(int));
	int* y = malloc(sizeof(int));
	*x = 17;
	*y =25;
	printf("%d\n", *x);
	printf("%d\n", *y);
}
