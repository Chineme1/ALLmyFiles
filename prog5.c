#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int sumSubrectangle(int** arr, int numRows, int numCols, int rowStart, int rowEnd, int colStart, int colEnd, int*result)
{
//	int* arr[] = malloc(numRows*(sizeof(int)));
	if(arr == NULL)
	{
		return false;
	}
	if(result == NULL)
	{
		return false;
	}
	if(rowStart > rowEnd)
	{
		return false;
	}
	if(colStart > colEnd)
	{
		return false;
	}
	/*if(numRows != (sizeof(numRows)/4))
	{
		return false;
	}
	if(numCols != (sizeof(numCols)/4))
	{
		return false;
	//}*/
	if(rowEnd >= numRows)
	{
		return false;
	}
	if(colEnd >= numCols)
	{
		return false;
	}
	int sum= 0;
	for(int i =rowStart; i<=rowEnd; i++)
	{
		int inval=0;
		if(arr[i] !=NULL)
		{
			for(int j = colStart; j<=colEnd; j++)
			{
				if(arr[i][j] == '\0')
				{
					inval+=1;
				}
				sum += arr[i][j];
				if(inval == numCols)
				{
					return false;
				}
			}
		//	*result = sum;
		}
		//*result = sum;
		else
		{
			return false;
		}
		*result = sum;
	}
	return true;
}


int parseForHighest(char* filename, int* highest)
{
	/*if (fopen("filename","r")==NULL)
	{
		return -2;
					}*/
	if(filename == NULL)
	{
		return -1;
	}
	if(!highest)
	{
		return -1;
	}

	/*if (fopen(filename,"r")==NULL)
	{
		fclose(fp);
		return -2;
	}*/


	FILE* fp = fopen(filename, "r");
	if (fp==NULL)
	{
		fclose(fp);
		return -2;
	}


	char buf[100];
	int lineCounter =0;
	//int i =0;
	char* tok0 = strtok(fgets(buf, 100, fp), "\n");
	int b = atoi(tok0);
	while(fgets(buf, 100, fp))
	{
		lineCounter+=1;
		char* toki = strtok(buf, "\n");
		int a = atoi(toki);
		if(a > b)
		{
			b = a;
		}
	
	}
	*highest = b;
	fclose(fp);
//	free(fp);
	return 0;
}



int* getAllHigherThan(int* arr, unsigned arrlen, int threshold, unsigned* newArrlen)
{
	int* highest= malloc(arrlen*(sizeof(int)));
	if(arr ==NULL)
	{
		return NULL;
	}
	if(newArrlen == NULL)
	{
		return NULL;
	}
	int count=0;
	for(int i= (arrlen-1); i>= 0; i--)
	{
		if(arr[i] > threshold)
		{	highest[count] = arr[i];
			count+=1;
		}
	}
	*newArrlen = count;
	return highest;


}

int* calculateRowSums(int** vals, int numRows, int* rowWidths)
{
	int* highest = malloc(numRows*(sizeof(int)));
	if(vals == NULL)
	{
		return NULL;
	}
	if(rowWidths == NULL)
	{
		return NULL;
	}
	if(numRows ==0)
	{
		return NULL;
	}
	//int* highest = malloc(numRows*(sizeof(int)));
	for(int i = 0; i < numRows; i++)
	{
		/*for(int k =0; k< numRows; k++)
		{
			if(vals[k] ==NULL)
			{
				return NULL;
			}
		}*/
		long count = 0;
		int c =0;
		if(vals[i] != NULL)
		{	
			for(int j =0; j <rowWidths[i]; j++)
			{
				if(vals[i] != NULL)
				{
					count += vals[i][j];
					if(vals[i][j] =='\0')
					{
						c+=1;
					}
				//if(c == rowWidths[i])
				//{
				//	return NULL;
				//}
				}
				else
				{
					break;
				}

			}
			highest[i] = count;
		}
		else
		{
			return NULL;
		//	printf("It works\n");
			highest[i] = 0;
			//return NULL;
			//int de=0;
			/*if(vals[i+1] != NULL)
			{
				for(int k = 0; k< rowWidths[i+1]; k++)
				{
					de += vals[i+1][k];

				}
				highest[i+1] = de;
			}*/
		}

	}
	return highest;
}

int* applyTransformation(char **strings, int numStrings, int (*transform)(char*))
{

	int *highest= malloc(numStrings * (sizeof(int)));
	for(int i = 0; i< numStrings; i++)
	{
		highest[i] = transform(strings[i]);
	}
	return highest;

}
