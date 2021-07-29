#include <stdio.h>
void foo(int y)
{
	y+=2;
}
int main()
{
	int x = 7384;
	foo(x);
	printf("x = %d\n", x);
}
