#include <stdio.h>

int main()
{
	int x =0;
	scanf("%d", &x);
	if(x<10)
	{
		printf("You entered something less than 10.\n");
		if(x==3)
			printf("You entered 3.\n");
	}
	return 0;
}
