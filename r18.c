#include <stdio.h>

int main()
{
	char ch = ' ';
	do 
	{
		printf("Enter Character: ");
		scanf(" %c", &ch);
		printf("This might be the last one: %c\n", ch);
	}while(ch != 'X');
}
