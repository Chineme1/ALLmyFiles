#include <stdio.h>


int main()
{
	char ch = getchar();
	printf("ch=%c\n", ch);
	ungetc(ch, stdin);
	char ch2 = getchar();
	printf("ch=%c\n", ch);

}
