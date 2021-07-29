#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>


int main()
{
	srand(time(NULL));
	int maxV = 5;
	int randomNumber = rand() % maxV;
	int guess;
	
	printf("Please pick a number from 0 -%d\n",maxV);
	printf("Guess wrong and face your fate.");

	scanf("%d",&guess);

	if(guess == randomNumber)
	{
		printf("You win. You got the number %d\n", guess);
	}
	else
	{	
		printf("You lost. The number is %d\n",randomNumber);
	}
	printf("Thank you for playing.\n");

}
