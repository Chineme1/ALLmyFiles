#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Date
{
	char* month;
	int day;
	int year;
};

void printDate(struct Date* dateobj)
{
	if(!strcmp(dateobj->month,"January"))
	{
		printf("It works(cc)\n");
	}
	/*if(dateobj->month == "October" && dateobj->month =="January")
	{
		printf("It works in October.\n");
	}*/
	if(dateobj->day == 31)
	{
		printf("I got another(ic)\n.");
	}
	else if(dateobj->day >= 1)
	{
		printf("I smell triple.\n");
	}
	if(dateobj-> year ==2000)
	{
		printf("The comparison should work.\n");
	}
}
char* getMonth(struct Date*p)
{
/*	p->month= realloc(p->month, (strlen(p->month)+1) *sizeof(char));
	strcpy( p->month);*/
	struct Date* c = malloc(sizeof(struct Date));
	const char* ntC = p->month;
	c->month =malloc((strlen(ntC)+1) *sizeof(char));
	strcpy(c->month,ntC);
	//c->month = p->month;
	//c->day ='\0';
	//c-> year = '\0';
	return c->month;
}
int main()
{

	struct Date d1 = {"February", 29, 1993};
	struct Date d2 = {"October", 31, 2000};
	struct Date d3 = {"January", 1, 1970};
	printDate(&d1);
	printDate(&d2);
	printDate(&d3);
	char* m = getMonth(&d2);
	printf("%s\n", getMonth(&d1));
	free(m);
	/*if("ab" == "ab")
	{
		printf("They are the same.\n");
	}*/
	/*
	for(int i = 0; i<=10; i++)
	{
		for(int j = 0; j<= 10; j++)
		{
			if(i == j)
			{
				continue;
			}
			else
			{
				printf("%d ", j);
			}
		}
		printf("\n");
	}*/
}
