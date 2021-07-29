#include <stdio.h>

int main()
{
	printf("Choose a menu option 1-4:\n");
	printf("1. Add a patient\n");
	printf("2. View a patient\n");
	printf("3. Search patiens\n");
	printf("4. exit\n");



	//start of the else if
	int input;
	scanf("%d",&input);
	if(input ==1)
	{
		printf("Adding a patient\n");
		
	}
	else if(input==2)
	{
		printf("We are viewing a patient\n");
	}
	else if(input==3)
	{
		printf("We are searching patients\n");
	}
	else
	{
		printf("We are exiting.\n");
	}

}
