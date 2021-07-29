#include <stdio.h>



int main()
{
	printf("Choose a menu option 1-4:\n");
	printf("1. add a patient\n");
	printf("2. View a patient\n");
	printf("3. Search patients\n");
	printf("4. Exit\n");
	
	int opt;
	scanf("%d",&opt);

	if(opt==1)
	{
		printf("Adding a patient.\n");

	}
	else if(opt ==2)
	{
		printf("Viewing a patient.\n");
	}
	else if (opt ==3)
	{
		printf("Searching for a patient.\n");
	}
	else
	{
		printf("Exiting...\n");
		printf("Do you want to save?(Y/N) \n");
		char q;
		getchar();
		scanf("%c",&q);

		if(q=='Y'|| q == 'y')
		{
			printf("Saving changes\n");
		}
		else if(q=='N'||q=='n')
		{
			printf("Fine whatever.\n");
		}
		else
		{
			printf("Haxing detected, self destructing 5...4...3...2...1...KABBOOM\n");
		}

	}










}
