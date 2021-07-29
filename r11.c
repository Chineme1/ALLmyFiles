#include <stdio.h>


int main()
{
	int x=0;
	scanf("%d", &x);

	switch(x)
	{
	case 50:
		printf("X is 50\n");
		break;
	case 8:
		printf("X is 8\n");
		break;
	default:
		printf("x is none of those values\n");
		break;
	}

}
