#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	int input=269;
	int isPrime = true;

	for(int i=sqrt(input);i>1;i--)
	{
		if (input%i==0)
		{
			isPrime =false;

		}
		printf("%d\n",i);
	}
	if(isPrime)
	{
		printf("Is Prime\n");
	}
	else
	{
		printf("Not Prime\n");
	}



}
