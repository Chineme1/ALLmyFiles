#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "prog4.h"

int findLastMismatch(const char * s1, const char * s2)
{
	int count(const char* s1)
	{	int c =0;
		while(s1[c] != '\0')
			c++;
		return c;
	}
	if((s1 ==NULL) || (s2 == NULL))
	{
		return -2;
	}

	if((count(s1)==0) || (count(s2)==0))
	{
		return -3;

	}

	if(count(s1) != count(s2))
	{
		return -1;
	}
	if(count(s1) == count(s2))
	{
		int sum =0;
		for(int i=0; i<count(s1); i++)
		{
			if(s1[i] == s2[i])
			{
				sum +=1;
			}
		}
		if(sum ==(count(s1)))
		{
			return -4;
		}
		int sum2=0;
		for(int j = 0; j< count(s2); j++)
		{
			if(s1[j] != s2[j])
			{
				sum2 = j;
			}
		}
		return sum2;
	}
	return 0;
}

int getLongestStretch(const char * s, char ch)
{
	int c(const char *s)
	{
		int c =0;
		while(s[c] != '\0')
			c++;
		return c;
	}
	if(s==NULL)
	{
		return -1;
	}
	int g = 0;
	for(int i =0; i<c(s); i++)
	{
		int sum =0;
		for(int j =0; j<(c(s)-i-1); j++)
		{
			if(s[i+j]== ch)
			{
				sum+=1;
			}
			if(sum > g)
			{
				g = sum;
			}
			if(s[i+j] != ch)
			{
				break;
			}
		}
	}
	return g;
}


int parseForHighest(char * s, int * highest)
{
	if((s == NULL) || (highest == NULL))
	{
		return 0;
	}
	char *tok0 = strtok(s," ;");
	int fir = atoi(tok0);
	int i =1;
	while(i<sizeof(s))
	{
		char* toki = strtok(NULL, " ;");
		i++;
		if(toki == NULL)
		{
			*highest = fir;
			return 1;
		}
		int a = atoi(toki);
		if(a > fir)
		{
			fir = a;
		}

	}
	return 1;
}

int getLines(char * lines)
{
	if(lines == NULL)
	{
		return 0;
	}
	//char* lines;//
	char x[100];
	char cat[100];
	printf("Enter: ");
	fgets(x, 100, stdin);
	char * tok0 = strtok(x, "\n");
	strcpy(cat, tok0);
	strcpy(lines, tok0);//
	int i =1;
	while(i != 0)
	{
		printf("Enter: ");
		fgets(x, 100, stdin);
		for(int i =0; i< strlen(x); i++)
		{
			if(x[i] == 'x')
			{
				//char * lines = cat;
				return 1;
			}
			if(x[i] == 'y')
			{	
				//char * lines = cat;
				return 1;
			}

			if(x[i] == 'z')
			{
				//char * lines = cat;
				return 1;
			}
		}
		char* toki =strtok(x, "\n");
		strcat(cat, toki);
		strcat(lines, toki);//
		i++;
	}
	return 0;
}
