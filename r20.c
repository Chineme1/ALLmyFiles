#include <stdio.h>


int main()
{
	int x = 10;
	while(x< 22)
		for(int i=2; i<5;++i)
		{
			printf("%d\n", x+i);
			x+=2;
		}
}
