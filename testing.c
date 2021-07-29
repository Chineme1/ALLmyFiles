#include <stdio.h>

void sum(char* str1, char* str2)
{
	char x1[] = "abcd";
	//char* x2[] = str1;
	//char* x4[] = str2;
	//char x3[sizeof(str2)];
	//char x4[sizeof(str2)];
//	int string_length(char* str1)
/*	{
		int c=0;
		while(str1[c] != '\0')
			c++;
		printf("%d\n", c);
	}*/
	//char* x4[] = str2;
	int s_l(char* str1)
	{
		int c=0;
		while(str1[c] != '\0')
			c++;
		printf("%d\n",c);
		if(c == 0)
		{
			printf("I think it works\n");
		}
		return c;

	}
	
	
	int s_l2(char* str2)
	{
		int d =0;
		while(str2[d] != '\0')
			d++;
		return d;
	}
//	printf("If this works. I'll be pissed %ld\n", sizeof(x4));
	printf("This should work 1: %d\n", s_l(str1));
	printf("This should work 2: %d\n", s_l2(str2));
	/*if(str1[0]==str2[1])
	{
		printf("It's the same.\n");
	}*/
	//char x5[] = x4;
	char x3[s_l2(str2)];
	//printf("The size of index 1 is : %ld\n", sizeof(x4));
	for(int i =0; i <= (s_l2(str2)); i++)
	{
		if(i==(s_l2(str2)))
		{
			x3[i]='\0';
			break;
		}
		x3[i]= str2[s_l2(str2)-1-i];
	}
	printf("This is the first reverse %c\n", x3[1]);
	int count=0;
	int sum=0;
	
	for(int i =0; i<=(s_l(str1)-sizeof(x3)); i++)
	{
		printf("The %d print %c\n",i, x3[i]);
		if(str1[i]==x3[0])
		{
			printf("The second print x2[%d] is %c\n", i, str1[i]);
			for(int j=0;j<=(sizeof(x3)-1); j++)
			{
				if((str1[j+i]) != (x3[j]))//I'm not sure why there is doub
				{	
				//printf("The x2 before break is: %d %c\n",j+i, x2[j
					printf("The x3 before break is: %c\n", x3[j]);	
					printf("I'm about to break\n");
					break;
					printf("I'm at least in\n");
					break;
				}
			//	printf("%c\n", str1[i+j]);
			//	printf("%c\n", x3[j]);
			//	printf("%ld\n", sizeof(x3));
				/*if((str1[j+i]) == (x3[j]))//I'm not sure why there is double counting.
				{	
				//	printf("The x2 before break is: %d %c\n",j+i, x2[j+i]);
					printf("The x3 before break is: %c\n", x3[j]);	
					printf("I'm about to break\n");
				}*/
				if(str1[i+j] == x3[sizeof(x3)-1])
				{	
					printf("I got read. Yey\n");
					count+=1;
					break;
				}	
				
			}
		}
	}
	/*for(int i=10; i>0; i--)
	{
		for(int j = 0; j<= i; j++)
		{
			printf("%d ", j);
			if(j ==i)
			{
				break;
			}
		}
		printf("%d\n", i);
	}*/
	printf("The element in x3 is %c\n", x3[1]);
//	printf("%c\n", x4[0]);
	printf("The sum is %d\n", sum);
	printf("The count is %d\n", count);
	printf("%s\n", x3);
	printf("The size is %ld", sizeof(x3)-1);
//	printf("%ld\n", sizeof(x4));
}

int main()
{
	char x[] ="";
	char y[] = "";
	sum(x, y);
}
