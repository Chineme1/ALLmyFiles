#include <stdio.h>
#include <string.h>

int main()
{
	char c[50];
	printf("Input your favorite food?:  ");
	scanf("%49s",c);
	printf("%s\n",c);

	int charCount=strlen(c);
	//while(c[charCount]!='\0')
	////{
	//	charCount++;

	//}
	printf("The character count is %d\n", charCount);

}
