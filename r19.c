#include <stdio.h>


int main()
{
	int x = 5;
	while (x<20)
	{
		if (x==11)
		{
			x+=1;
			continue;
		}
		printf("%d\n",x);
		x+=3;
	}
}
