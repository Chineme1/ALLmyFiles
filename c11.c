#include <stdio.h>

int main()
{	
	short a[3] = {10, 20, 30};
	short b[2] = {40, 50};
	b[3] =-1;

	for (unsigned i = 0; i<3; ++i)
		printf("a[%u] is %d\n", i, a[i]);
	for (unsigned i =0;i<2; ++i)
		printf("b[%u] is %d\n", i, b[i]);





}
