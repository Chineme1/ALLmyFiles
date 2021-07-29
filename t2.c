#include <stdio.h>

void print2dArr(char*** arr, unsigned nr, unsigned nc)
{
	for(unsigned int r = 0; r< nr; ++r)
	{
		for(unsigned int c = 0; c<nc; ++c)
		{
			printf("%s ", arr[r][c]);
		}
		printf("\n");
	}
}
int main(int argc, char* argv[])
{
	printf("The name of this program is %s.\n", argv[0]);
	printf("The first command-line argument is %s.\n", argv[1]);

/*	char* row1[] = {"hi","there","what's"};
	char* row2[] = {"hello"};
	char* row3[] = {"blah"};
	char** rows[] = {row1, row2, row3};
	print2dArr(rows, 3, 3);*/
}
