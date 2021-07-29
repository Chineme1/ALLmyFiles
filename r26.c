#include <stdio.h>


int main()
{
	char ch = getchar();

	if('A'<= ch&&ch<='Z')
	{
		printf("You entered a letter between A and Z.\n");
	}
	if(65<=ch&&ch<=90)
	{
		printf("You entered a character from 65 to 90.\n");
	}
}
