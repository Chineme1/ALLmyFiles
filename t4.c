#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_SIZE 100

int*highest(int* arr)
{
	int* highest = malloc(5*sizeof(int));
	for(int i=0; i< 5; i++)
	{
		highest[4-i] =arr[i];
		printf("%d\n", highest[4-i]);
	}
	return highest;
	
	
}
int* c(int** val, int numRows, int* rowidths)
{	
	int* highest = malloc(numRows*(sizeof(int)));
	for(int i = 0; i< numRows; i++)
	{
		int count =0;
		for(int j =0; j<rowidths[i]; j++)
		{
			count += val[i][j];
		}
		highest[i] = count;
	}
	return highest;

}
int testTransform1(char* str)
{
	if(!strcmp(str, "abc")) return 0;
	else if (!strcmp(str, "def")) return 1;
	else return 2;
}
int *a(char**arr, int num,int (*transform)(char*) )
{
	int*highest = malloc(num*sizeof(int));
	for(int i =0; i<num; i++)
	{
		highest[i]=transform(arr[i]);
	}
	return highest;
}
int main()
{
	/*int***p = NULL;
	printf("%p", p);
	switch(x)
	{
		case 10: case 20:
			printf("A\n");
		case 30:
			printf("B\n");
			break;

		case 40:
			printf("C\n");
			break;
	}*/
	{
		int len =4;
		char* terms[] = {"abc", "def", "ghi", "def"};
		int* arr = a(terms, len, testTransform1);
		for(int i = 0; i < len; i++)
			printf("arr[%d]=%d\n", i, arr[i]);
		free(arr);
	}
	{
		int len =4;
		char* terms[] = {"abc", "def", "ghi", "def"};
		int* arr = a(terms, len, testTransform1);
		for(int i = 0; i < len; i++)
			printf("arr[%d]=%d\n", i, arr[i]);
		free(arr);
	}
	
/*	int row1[] = {5, 8, 3};
	int row2[] = {9, 2};
	int row3[] = {4, -2, 1, 8, 9};
	int rowWidths[] = {3, 2, 5};
	int numRows = 3;
	int*rows[] = {row1, row2, row3};
	int* sums = c(rows, numRows, rowWidths);
	for(int i =0; i <numRows; ++i)
		printf("sums[%d]=%d\n", i, sums[i]);
	free(sums);*/
	/*int* x = malloc(sizeof(int));
	int* y = malloc(sizeof(int));
	*x = 17;
	*y = 25;*/
//	int arr[] = {18, 12, 22, 37, 15};
//	int* higherThan = highest(arr);
//	for(int i =0; i<5; i++)
//		printf("Index %u: %d\n", i, higherThan[i]);
//	free(higherThan);

/*
	FILE* f = fopen("num.txt", "r");
	char buf[MAX_LINE_SIZE];
	int lineCounter =0;*/
//	while(fgets(buf, MAX_LINE_SIZE, f))
//	{

//	}
/*	size_t pos = ftell(f);
	fseek(f, 0, SEEK_END);
	printf("The beginning is %ld\n", pos);
	size_t length = ftell(f);
	printf("Length is %ld", length);
	fseek(f, pos, SEEK_SET);
	void test(FILE* f)
	{
		int i=0;
		int ch;
		while((ch = fgetc(f)) != EOF)
		{
			if(ch != '\0')
			{
				i+=1;
			}
		}
		printf("The length of the file is %d\n", i);
	}
//	test("num.txt");
*/

}
