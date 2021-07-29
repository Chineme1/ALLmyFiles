#include <stdio.h>
#include <stdlib.h>
#include "prog5.h"

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("You did not pass a command-line argument to this executable.\n");
		return 1;
	}
	int caseNum = atoi(argv[1]);
	int retval1 = -1, result1 = -1, retval2 = -1, result2= -1;
	int row11[] = {5, 3, 4, -1, 2};
	int row12[] = {13, -8, 0, 14, 2};
	int row13[] = {19, 21, 18, 4, 3};
	int *arr1[] = {row11, row12, row13};
	int row21[] = {1, 2, 3};
	int row22[] = {4, 5, 6};
	int *arr2[] = {row21, row22};
	switch(caseNum)
	{
		case 1:
			retval1 = sumSubrectangle(arr1, 3, 5, 0, 1, 1, 3, &result1);
			retval2 = sumSubrectangle(arr1, 3, 5, 0, 2, 0, 4, &result2);
			break;
		case 2:
			retval1 = sumSubrectangle(arr2, 2, 3, 0, 1, 0, 1, &result1);
			retval2 = sumSubrectangle(arr2, 2, 3, 0, 0, 2, 2, &result2);
			break;
		case 5:
			retval1 = sumSubrectangle(arr1, 3, 5, 0, 1, 1, 3, &result1);
			retval2 = sumSubrectangle(arr1, 3, 5, 0, 1, 1, 3, NULL);
			break;
		case 6:
			retval1 = sumSubrectangle(arr1, 3, 5, 0, 1, 1, 3, &result1);
			int row61[] = {5, 1, 2, 3, 9};
			int row63[] = {18, 12, 13, 15, 2};
			int *arr6[] = {row61, NULL, row63};
			retval2 = sumSubrectangle(arr6, 3, 5, 0, 1, 1, 3, &result2);
			break;
		case 8:
			retval1 = sumSubrectangle(arr2, 2, 3, 0, 1, 0, 1, &result1);
			retval2 = sumSubrectangle(arr2, 2, 3, 1, 0, 0, 1, &result2);
			break;
		case 10:
			retval1 = sumSubrectangle(arr2, 2, 3, 0, 1, 0, 1, &result1);
			retval2 = sumSubrectangle(arr2, 2, 3, 0, 1, 0, 3, &result2);
			break;
		default:
			fprintf(stderr, "Invalid case number.\n");
			return 2;
	}	

	printf("=== Results from first call ===\n");
	printf("Return value: %s\n", retval1 ? "true" :"false");
	if (retval1)
		printf("Result: %d\n", result1);
	printf("=== Results from second call ===\n");
	printf("Return value: %s\n", retval2 ? "true": "false");
	if(retval2)
		printf("Result: %d\n", result2);
	return 0;

	/*
	unsigned n = 0;
	switch(caseNum)
	{
		case 1:
			n = 15;
			break;
		case 2:
			n = 22;
			break;
		case 3:
			n =100;
			break;
		default:
			printf("Invalid case number.\n");
			break;
	}
	printf("Calling enterUntilN()...\n");
	unsigned numValsEntered = enterUntilN(n);
	printf("Finished call to enterUntilN()...\n");
	printf("Return value of enterUntilN(): %d\n", numValsEntered);*/
}
