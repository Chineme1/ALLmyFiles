#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* pon(int** arr)
{
	//int sum =0;
	int* sums = malloc(3*sizeof(int));
	for(int i = 0; i<= 2; i++)
	{
		if(arr[i] !=NULL)
		{
			printf("I'm tired\n");
		}
		continue;
	}
	for(int r = 0; r<= 2 ; r++)
	{	
		int sum =0;
		if(arr[r])	
		{

			printf("It works. I think.\n");
			printf("First Row\n");
			for(int c = 0; c < 3; c++)
			{
				if(arr[r][c])
				{
					sum+=(arr[r][c]);
					printf("%d\n", (arr[r][c]));
				}
				else
				{
					break;
				}
			}
			sums[r] = sum;
			//*highest
			printf("Sum[%d] is %d\n", r, sum);

		}
		else
		{
			sums[r] = 0;
		}
	}
//	printf("sum[1] is %ls\n", arr[1]);
	//printf("The sum is %d\n", sum);
	for(int i =0; i <3; i++)
	{
		printf("The array arr[%d] is: %d\n", i, sums[i]);
	}
	return sums;
}


int main()
{

	/*if(2>1)
	{
		printf("It works.\n");
		//return false;
	}*/
	int row1[] = {-2, 6, 1};
	int row2[] = {-5, 3, 9};
	int* row4[] = {row1, NULL, row2};
	int* row5 = pon(row4);
	for(int i =0; i<3; i++)
	{
		printf("The row5[%d] is %d\n", i, row5[i]);
	}
	free(row5);
	//printf("%ld\n", sizeof(row5));
}
