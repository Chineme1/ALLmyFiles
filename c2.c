#include <stdio.h>

int main()
{
	char* str = "Hello";
	printf("%10s, there.\n", str);
	printf("%-10s, there.\n", str);
	printf(" %3s, there.\n", str);
	float x= 3.69088;
	printf("float is %f\n",x);
	printf("Float is %.1f\n", x);
	printf("Float is %.2f\n", x);
	printf("Float is %.3f\n", x);
	printf("Float is %.4f\n", x);

	printf("A crash is about to occur.\n");
	char* s = NULL;
	printf("%s\n", s);
	printf("A crash will occur.\n");



}
