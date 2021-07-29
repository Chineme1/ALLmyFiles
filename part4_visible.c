#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog5.h"

#define SIZE_TO_CLEAR 10000

static void overwriteRecentStackUsage(void)
{
	char recent[SIZE_TO_CLEAR];
	memset(recent, 0, SIZE_TO_CLEAR);
}

static void overwriteRecentHeapUsage(void)
{
	void* recent = malloc(SIZE_TO_CLEAR);
	memset(recent, 0, SIZE_TO_CLEAR);
	free(recent);
}

int main(int argc, char* argv[])
{
	if(argc< 2)
	{
		printf("You did not pass a command-line argument to this executable.\n");
		return 1;
	}
	int caseNum = atoi(argv[1]);
	int** rows = calloc(10, sizeof(int *));
	int* rowWidths = calloc(10, sizeof(int));
	int numRows = -1;
	int row11[] = {5, 8, 3};
	int row12[] = {9, 2};
	int row13[] = {4, -2, 1, 8, 9};
	int row21[] = {20, 30, 50, -10, 100};
	int row22[] = {1, 2, 3};
	int row23[] = {5};
	int row24[] = {1, 1, 1, 1};
	int row25[] = {10, 10, 10, 10, 20, 20};
	switch(caseNum)
	{
		case 1:
			numRows = 3;
			rows[0] = row11;
			rowWidths[0] = 3;
			rows[1] = row12;
			rowWidths[1] =2;
			rows[2] = row13;
			rowWidths[2] = 5;
			break;
		case 2:case 6:
			numRows = 5;
			rows[0] = row21;
			rowWidths[0] = 5;
			rows[1] = row22;
			rowWidths[1] = 3;
			rows[2] = row23;
			rowWidths[2] = 1;
			rows[3] = row24;
			rowWidths[3] = 4;
			rows[4] = row25;
			rowWidths[4] = 6;
			break;
		case 4:
			numRows = 3;
			rows[0] = row11;
			rowWidths[0] = 3;
			rows[2] = row13;
			rowWidths[2] = 5;
			break;
		default:
			printf("Invalid case number.\n");
			break;
	}
	overwriteRecentStackUsage();
	overwriteRecentHeapUsage();
	int* sums = calculateRowSums(rows, numRows, rowWidths);
	if(sums)
		for(int i = 0; i< numRows; ++i)
			printf("sums[%d]=%d\n", i, sums[i]);
	else
		printf("sums is NULL.\n");
	free(sums);
	if (caseNum == 4)
	{
		int rowWidths4[] = {3};
		sums = calculateRowSums(rows, 1, rowWidths4);
		if(sums)
			for(int i = 0; i< numRows; ++i)
				printf("sums[%d]=%d\n", i, sums[i]);
		else
			printf("sums is NULL.\n");
		free(sums);
	}
	free(rows);
	free(rowWidths);
	return 0;

}
