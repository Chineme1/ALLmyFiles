#include <stdio.h>

void sum(int x1, int x2, int * val)
{
	int x3 = x1 +x2;
	*val = x3;
}
int num(char* str, char* str2)
{
	int x = sizeof(str2) -1;
	int x2 = sizeof(str) -1;

	char x3[sizeof(str2)];
	for(int i = 0; i<=(sizeof(str2)-1); i++)
	{
		if(i==(sizeof(str2)-1))
		{
			x3[i] = '\0';
			break;
		}
		x3[i] = str2[sizeof(str2)-i-2]; 
	}




	/*char x3[sizeof(str2)];
	for(int i =0; i<=(sizeof(str2)-1); i++)
	{
		if(i ==(sizeof(str2)-1))
		{
			x3[i]='\0';
			break;
		}
		x3[i] = str2[sizeof(str2)-i-2];
	}*/

	int count=0;
	for(int i =0; i< (x2-x); i++)
	{
		if(str[i] ==x3[0])
		{
			for(int j=0; j<x; j++)
			{
				if(str[i+j] != x3[j])
				{
					//break;
					/*if(str[i+j] == x3[x-1])
					{
						count+=1;
					}*/
				}
				if(str[i+j]==x3[x-1])
				{
					count+=1;
				}

			}
		}
		else
		{
			continue;
		}

	}
	return x3[0];
}
struct Person
{
	char* firstName;
	char* lastName;
	int age;
};
void sayHi(struct Person* p)
{
	printf("%s %s says hello to you.\n", p->firstName, p->lastName);
}
int main()
{

	FILE* fp = fopen("values.txt","r");
	char x[100];
	int i =1;
	int j;
	int c;
	while(fgets(x, 100, fp))
	{
		int a, b;
		if(i==1)
		{
			j=sscanf(x, "%d %d %d", &a, &b, &c);
			printf("a: %d, b: %d, j = %d", a, b, j);


		}
		i++;

	}	
	char x1[] = "abca";
	char x2[] = "ac";
	struct Person p = {"Yugi", "Moto", 16};
	p.firstName = "Ash";
	p.age = -8;
	sayHi(&p);
	//char x3[sizeof(x1)];
	/*for(int i = 0; i<=(sizeof(x2)-1); i++)
	{
		if(i==(sizeof(x2)-1))
		{
			x3[i] = '\0';
			break;
		}
		x3[i] = x2[sizeof(x2)-i-2]; 
						}*/
	char s = num(x1, x2);
	//char s[] ="Think Apple";
	//int size = sizeof(s);
	printf("%c\n", s);
	//printf("%ld\n",sizeof(x2));
	//int a;
	//sum(2,3,&a);
	//printf("The value is: %d\n", a);

	/*printf("Enter a character: ");
	char x = getchar();
	int x2 = x;
	if(41<=x2&&x2<=59)
	{
		printf("You've entered a single digit number.\n");
	}
	else if(65<= x2&&x2 <= 90)
	{
		printf("You entered a Capital letter.\n");
	}
	else if(91<= x2&&x2<= 122)
	{
		printf("You inputted a lowercase.Geez I hope this works.\n");
	}
	else
	{
		return 0;
	}
	int x1 =121;
	int x4=122;
	printf("%c and %c\n",x1,x4);
*/
}
