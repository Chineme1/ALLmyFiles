#include <stdio.h>

#include "prog3.h"

int main()
{
	int arr[] = {18, 52, 52, 49, 52, 61};
	int first = 0;
	int num = countOccurrences(arr, 6, 52, &first);
	printf("num: %d\n", num);
	printf("first: %d\n", first);
}
