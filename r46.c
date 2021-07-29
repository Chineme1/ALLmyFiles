#include <stdio.h>

int main()
{
	char ch = 'x';
	int x = 18;
	int y = 72;
	short z = 52;
	float f = 3.8;
	printf("=== Locals ===\n");
	printf("Address of ch: %p\n", &ch);
	printf("Address of x: %p\n", &x);
	printf("Address of y: %p\n", &y);
	printf("Address of z: %p\n", &z);
	printf("Address of f: %p\n", &f);
	printf("===Globals ===\n");
	
}
