#include <stdio.h>


int main()
{
	goto apple;
apple:
	printf("A is for apple\n");
	goto boy;
boy:
	printf("B is for boy.\n");
	goto champion;
champion:
	printf("C is for champion.\n");
	return 0;
	goto apple;
}
