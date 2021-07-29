#include <stdio.h>


int main()
{
	printf("%c", 'a');
	fputc('b', stdout);
	putc('c', stdout);
	putchar('\n');


	printf("AAA");
	puts("");
	fputs("BBB", stdout);
	puts(" ");
	puts("CCC");
}
