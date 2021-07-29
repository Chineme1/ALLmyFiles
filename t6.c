#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
	char* firstName;
	char* lastName;
	int age;
};

struct Person* createPerson(const char* firstName, const char* lastName, int age)
{
	struct Person* p = malloc(sizeof(struct Person));
	p-> firstName = malloc((strlen(firstName)+1)* sizeof(char));
	strcpy(p->firstName, lastName);
	p->age = age;
	return p;
}
/*
char* tarr( int a, int b)
{
	char (*array)[b];
	//char *array = malloc(sizeof(char[a][b]));
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			printf("I work %c", arr[i][j]);
			*array[i][j] = arr[i][j];
		}
		printf("\n");
	}
	return array;
}
char changer(char arr,int a, int b)
{
	for(int i =a; i<a+2; i++)
	{
		for(int j=b; j<b+2; j++)
		{
			arr[a][b] ='v';
		}
	}
}*/
/*
char* makearr(int a, int b)
{
	char (*arr)[b] = malloc(sizeof(char[a][b]));
	//char arr[a][b];
	for(int i=0; i < a; i++)
	{
		for(int j=0; j<b; j++)
		{
			if(i==0&&j==0)
			{
				arr[i][j]= '@';
			}
			if(i==a-1&& j==b-1)
			{
				arr[i][j] ='@';
			}
		}
	}
	return *arr;
}*/
void Increment(int *a)
{
	*a+=1;
}
int main()
{
	int a =1;
	char arr[12][22];
	arr[1][1] = 1;
	arr[2][2] = 2;
	arr[3][3] = 3;
	arr[4][4] = 4;
	arr[5][5] = 5;
	arr[6][6] = 6;
	arr[7][7] = 7;
	arr[8][8] = 8;
	arr[9][9] = 9;
//	printf(" %d\n", arr[20]);
	for(int i = 0; i<=11; i++)
	{
	/*	if(i ==0)
		{
			printf("*");
		}
		if(i == 10)
		{
			printf("*");
		}*/
		/*else
		{
			printf(" ");
		}*/
		for(int j = 0; j<= 21; j++)
		{
			if(i==0)
			{
			//	continue;
				printf("*");
				arr[i][j] =1;
				continue;
			}
			if( j==0)
			{
				printf("*");
				arr[i][j] = 1;
				continue;
			}
			if(i==11/*&&j==20*/)
			{
			//	continue;
				printf("*");
				arr[i][j] = 1;
				continue;

			}
			if(j==21)
			{
				printf("*");
				arr[i][j] = 1;
			}
			else
			{
				printf(" ");
				arr[i][j] = ' ';
			}

			//printf("\n");
		}
		printf("\n");
	}
		
	arr[2][3] = 'I';
	arr[3][4] = 'S';
	arr[3][5] = 'E';
	arr[3][6] = 'E';
	arr[4][5] = 'Y';
	arr[4][6] = 'O';
	arr[4][7] = 'U';
	//char* p=tarr(arr, 12, 22);
	//char*p[2][2] = makearr(2,2);
	//printf("TSW %c\n", *p[2][2]);
	arr[10][10] = ')';
	arr[10][10] = ' ';
	arr[10][11]= 'X';
	//arr[10][11] = 'W';
	if(arr[10][11] =='X')
	{
		printf("We hit it\n");
	}
	arr[10][11] ='w';
	arr[10][12] = ')';
	arr[10][12]= 'P';
//	changer(arr,4,6);
	//char *x;
	//int k =6;
	for(int k=8; k>4;k--)
	{
		char x;
		//char x1;
		scanf(" %c", &x);
	/*	if(x== 'q')
		{
			break;
		}*/
		//fgets(x, 2, stdin);
		/*for(int i=2; i >0; i--)
		{
			if(i==2)
			{
			scanf("%c", &x);
			}
		}*/
		//char* tok1 = strtok(x, "\n");
		//sscanf(x, "%c", &x1);
		//arr[k][k]= ' ';
		printf("s = %c\n", x);
		arr[8][k]= x;
		printf("i: %d\n", k);
		if(x== 'q')
		{
			break;
		}
	}//while(1==1);
	for(int i =0; i<=11; i++)
	{	//a+=a;
		//Increment(&a);
		//printf("a: %d", a);
		for(int j =0; j<=21; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

}
