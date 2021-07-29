#include <stdio.h>


int main()
{
	printf("Enter your first name: ");
	char firstname[30];
	scanf("%s", firstname);
	printf("Enter your last name: ");
	char lastname[30];
	scanf("%s", lastname);
	printf("Hello %s %s!\n", firstname, lastname);
}
