#include <stdio.h>


int main()
{
	int x = 2147483647;
	printf("x=%d\n",x);
	x+=1;
	printf("x=%d\n", x);
	x-=1;
	printf("x=%d\n", x);
	x-=1;
	printf("x=%d\n", x);
}
