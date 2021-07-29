#include <stdio.h>


int main()
{
	char ch = fgetc(stdin);
	printf("After fgetc(),  ch=%c\n",ch);
	ch = fgetc(stdin);
	printf("After fgetc() again, ch=%c\n", ch);
}
