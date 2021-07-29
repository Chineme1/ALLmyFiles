#include <stdio.h>
//
#include <stdlib.h>


char arr(char* arr, int l, int w)
{
//	char* arr[l+2][w+2] = malloc(l*w*sizeof(char));//[l+2][w+2];
//	char arr[l+2][w+2];
//	char *arr[l+2][w+2];
	for(int i= 0; i<= l+1; i++)
	{
		for(int j =0; j<=w+1; j++)
		{
			if(i==0)
			{
				*arr[i][j] = '*';
				continue;
						}
			if(j==0)
			{
				*arr[i][j] = '*';
				continue;
			}
			if(i==l+1)
			{
				*arr[i][j] = '*';
				continue;
			}

			if(j==w+1)
			{
				*arr[i][j] = '*';
				//continue;
			}
			else
			{
				*arr[i][j] =' ';
			}
		}
	}
	//return *arr;
}
/*
char drawBuilding(char* arr,int a, int b)
{
	for(int i =a; i< a+4; i++)
	{
		for(int j=b; j<b+6; j++)
		{
			if(i == a+2&& j == b+2)
			{
				arr[i][j]= '&';
						}

			if(i == a+2&& j == b+3)
			{
				arr[i][j]= '&';
			}
			if(i == a+3&& j == b+2)
			{
				arr[i][j]= '&';
			}
			if(i == a+3&& j == b+3)
			{
				arr[i][j]= '&';
			}
			else
			{
				*arr[i][j] ='-';
			}

		}
	}
}*/
int playGame(const char* filename)
{
	FILE* fp = fopen(filename, "r");
	char buf[100];
	//char c[];
	if(!fp)
	{
		fclose(fp);
		return 0;
	}
	int i =1;
	while(fgets(buf, 100, fp))
	{
		if(i==1)
		{
			int a,b;
			sscanf(buf, "%d %d", &a, &b);
			printf("%d\n", a);
			printf("%d\n", b);
			char c[a+2][b+2];
			/*char* p[] =*/char* p[a+2][b+2];
			arr(c,a, b);
			//I've gotten a and b. I think.
			
		}


		i++;
	}	
}

int main()
{

	playGame("values.txt");
}
