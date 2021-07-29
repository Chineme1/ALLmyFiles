#include <stdio.h>


int main()
{
	int myGrade[]= {90, 95, 97};
	int col= 3;

	int grades[2][3] = 
	{
		{12, 23, 45},
		{64, 78, 89}

	};
	//printf("%d\n", grades[1][2]);
	//grades[1][2]=98;
	//printf("%d\n", grades[1][2]);

	for(int i=0;i<2; i++)
	{
		for(int g=0; g<3; g++)
		{
			printf("%d  ",grades[i][g]);
		}
		printf("\n");
	}
}
