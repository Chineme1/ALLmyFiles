#include <stdio.h>

#include "prog3.h"

int main()
{
	int num = getNumBackwards("abracadabra", "arb");
	printf("%d\n", num);
	num = getNumBackwards("apple", "pa");
	printf("%d\n", num);
}
