#include <stdio.h>
#include <ctype.h>
#include <limits.h>


int g;
void foo()
{
	g++;
	int x = 30;
	printf("x=%d\n", x);
	x++;
}
void goo()
{
	printf("g=%d\n",g);
	g++;
}

void bar()
{
	int g = 8;
	printf("g=%d\n", g);
	g++;
}
int main()
{
	int y =0;
	printf("NEWLINE\n");
	goo();
	goo();
	goo();
	printf("NEWLINE\n");
	foo();
	foo();
	foo();
	printf("NEWLINE\n");
	bar();
	bar();
	printf("NEWLINE\n");
	goo();
}
