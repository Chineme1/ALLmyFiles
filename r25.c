#include <stdio.h>

int main()
{
	char c1 = 'A';
	printf("%c: %d\n", c1, c1);
	c1 = 'g';
	printf("%c: %d\n", c1, c1);
	c1+= 2;
	printf("%c: %d\n", c1, c1);
	int x = 65;
	printf("%c: %d\n", x, x);
	x= 3048;
	printf("%c: %d\n", x, x);
}
