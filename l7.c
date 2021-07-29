#include <stdio.h>

int main()
{
	char x;
	printf("Please enter a character: ");
	scanf("%c",&x);
	printf("%i\n",x);

	int integer;
	printf("Enter anumber between 0-127: ");
	scanf(" %i",&integer);
	printf("%c\n", integer);
	

	// I'm going to work on ASCII
	char mathz = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n",mathz,mathz);
	return 0;

}
