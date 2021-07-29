#include <stdio.h>


int main()
{
	printf("AAA\n");
	goto blah;
	printf("BBB\n");

blah:
	printf("CCC\n");
	return 0;
}
