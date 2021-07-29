#include <stdio.h>
#include <stdbool.h>


int main()
{
	bool pizzahealthy = true;
	int temp;
	printf("Do you believe in the health benefits of Pizza(1 is true and 0 is false)");
	scanf("%d",&temp);
	pizzahealthy = temp;


	if(pizzahealthy)
	{
		printf("Welcome to my Pizza app.\n");

	}

}
