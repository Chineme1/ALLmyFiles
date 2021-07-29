#include <stdio.h>


int main()
{
	char ch = ' ';
	scanf("%c", &ch);
	printf("After scanf(), ch=%c\n", ch);
	scanf(" %c", &ch);
	printf("After scanf() again, we get ch=%c\n", ch);
}
