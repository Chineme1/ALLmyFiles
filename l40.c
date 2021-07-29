#include <stdio.h>

int factorial(int y)
{
	int x=1;
	while(y>1)
	{
		x*=y;
		y--;
	}
	return x;
}
void outputFactorial(int input)
{
	printf("The factorial of %d is %d.\n", input, factorial(input));
}

int main()
{
	/*printf("%d\n", factorial(5));
	printf("%d\n", factorial(8));

	printf("%d\n",factorial(factorial(4));*/
	outputFactorial(5);


}
