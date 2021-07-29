#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int main()//Create a game to guess a number from 0 to 5
{
	int maxValue =50;
	srand(time(NULL));
	int randnum = rand() % maxValue +1;

	printf("%d\n",randnum);
	int User;
	printf("Guess a number 0 - %d: \n", maxValue);
	scanf("%d",&User);

	if(User==randnum)
	{
		printf("You got it, the number is: %d\n", User);
		printf("You win\n");
	}
	else
	{
		printf("You don't win.\n");

	}
}
