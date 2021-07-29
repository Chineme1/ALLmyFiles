#include <stdio.h>


int main()
{	
/*	int x = 38;
	float y =92.47;
	int *pX =&x;
	*pX +=2;
	printf("%d %d\n", *pX, x);

*/

	// New line
	int x = 37;
	int* y= &x;
	int**z = &y;
	int ***a = &z;
	printf("%d\n", *y);
	printf("%d\n", **z);
	printf("%d\n", ***a);


}

