#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned m(unsigned n)
{
/*	int a;
	printf("Entered: ");
		scanf("%d",&a);
	int sum =1;
	int sum2 =a;*/
	int sum =0;
	int sum2 =0;
	do
	{
		int a;
		printf("Entered: ");
		scanf("%d",&a);
		sum+=1;
		sum2+=a;

	}while((sum2 < n) || (-sum2 < n));
	/*while((-a<n)&&(a<n))
	{
		int b;
		printf("Entered: ");
		scanf("%d", &b);
		sum +=1;
		sum2+=b;
		if((sum2>= n)||(-sum2>=n))
		{
			break;
		}
	

	}*/
	printf("The count is %d\n", sum);
}

int main()
{
	char x[100];
	char cat[100];
	/*fgets(x, 100, stdin);
	char * tok0 = strtok(x, " ");
	printf("tok0=%s\n", tok0);
	printf("The length is %ld\n", strlen(x));
	printf("The string is %s", x);
	strcpy(cat, tok0);*/
	printf("Enter: ");
	fgets(x, 100, stdin);
	char * tok0 = strtok(x, "\n");
	strcpy(cat, tok0);
	int i =1;
	char str2[] = "xyz";
	while(i !=0)
	{
		printf("Enter: ");
		fgets(x, 100, stdin);
		for(int i=0; i<strlen(x); i++)
		{
			if(x[i] == 'x')
			{
				//printf("NO e that I can C\n");
				printf("The size is %ld\n", strlen(cat));
				printf("The string is %s", cat);
				return 1;
			}
			if(x[i] == 'y')
			{
				//printf("There's a y\n");
				printf("The size is %ld\n", strlen(cat));
				printf("The string is %s", cat);
				return 1;
			}
			if(x[i] == 'z')
			{

				//printf("There's a z in this johnson\n");
				printf("The size is %ld\n", strlen(cat));
				printf("The string is %s", cat);
				return 1;
			}
		}
		char* toki = strtok(x, "\n");
		strcat(cat, toki);	    	
		i++;
	}
	printf("The size is %ld\n", strlen(cat));
	printf("The string is %s", cat);
	
/*	char x1[100];
	strcat(x1, "You are about to");
	strcat(x1, "experinece the most");
	strcat(x1, "wonderful time in your life");
*/
	//char s[100];
	
	//printf("%s is the total\n", str);
//	printf("smod = %s", s);
/*	char x[] = "53;84  ;  789   ;  400; 99";
	char * tok0  = strtok(x, " ;");
	int fir = atoi(tok0);
	printf("%d\n", fir);
	int i = 1;
	//int *x1 =0;*/
	/*int count(char* x)
	{
		int c =0;
		while(x[c] != '\0')
			c++;
		return c;
	}*/
	/*printf("The length is %ld\n", sizeof(x));
	if(0<sizeof(x))
	{
		printf("The comparison works\n");
	}
	while(i<sizeof(x))
	{
			
		char* toki = strtok(NULL, " ;");
		printf("Number is %s\n", toki);
		i+=1;
		//char* c[] = toki;
		if(toki == NULL)
		{
			printf("The largest number is %d\n", fir);
			return 1;
		}
		//if(toki != NULL)
		int a  = atoi(toki);
		printf("%d\n", a);
		if(a > fir)
		{
			printf("I'm working\n");
			fir =a;
		}*/
/*		if(a > *x1)
		{
			*x1 = a;
		}*/
		
	//}
	//printf("The largest number is %d\n", fir);
	//m(15);
}






















