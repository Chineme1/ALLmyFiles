#include <stdio.h>
#include <math.h>


int main()
{
	int a;
	int b;
	printf("This will calculate the length of the hypotenuse");
	printf("Enter the sides of the triangle");
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	//a *=a;
	//b *=b;
	int c = sqrt(a+b);
	printf("The hypotenuse is: %d\n", c);
	return 0;
}

