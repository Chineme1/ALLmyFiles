#include <stdio.h>


int main()
{
	int x = -1;
	scanf("%d", &x);
	if ((10<x && x <20) || (35< x && x<45))
		printf("X is either between 10 and 20 or is between 35 and 45\n");
	else
		printf("Nope.\n");
}
