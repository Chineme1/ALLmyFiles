#include <stdio.h>
#include "prog3.h"

int main()
{
	int arr[] = {17, 11, 14, 17, 19, 11, 15, 17};
	int x = getNthOccurrence(arr, 8, 17, 1);
	printf("%d\n", x);
	x = getNthOccurrence(arr, 8, 17, 3);
	printf("%d\n", x);
	x = getNthOccurrence(arr, 8, 11, 1);
	printf("%d\n", x);
	x = getNthOccurrence(arr, 8, 14, 2);
	printf("%d\n", x);
}
