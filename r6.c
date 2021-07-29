#include <stdio.h>



int main()
{
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	if( num <0)
	{
		printf("%d is a negative number.\n", num);
	}
	else if(num<=0)
	{
		printf("%d is zero.\n", num);
	}
	else
	{
		printf("%d is positive number.\n", num);
	}

}
