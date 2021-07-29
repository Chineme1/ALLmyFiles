#include <stdio.h>

int main()
{
	double money =200;
	double cost=25;
	double lf = cost-money;

	money > cost ? printf("You can afford it!\n"): printf("Sorry bro ... You need %lf more dollars\n", lf);

	/*if(money>cost)
	{
		printf("You can afford it\n");
	}
	else
	{
		printf("I guess you can't. You need %lf more dollars.\n", lf);
	}
	*/



}
