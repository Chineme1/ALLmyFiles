#include <stdio.h>


int main()
{
	char ch = ' ';
	printf("Enter character: ");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a':
			printf("Entered a!\n");
			break;
		case 'b':
			printf("Entered b!\n");
		case 'c':
			printf("Entered c!\n");
			break;
	}
	

}
