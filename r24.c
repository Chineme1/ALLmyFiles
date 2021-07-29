#include <stdio.h>
#include <limits.h>


int main()
{
	printf("Below are the size/ranges of values for each integer type on my machine:\n");
	printf("char (%ld bytes): %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("short (%ld bytes): %d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("(signed) int (%ld bytes): %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("unsigned int (%ld bytes): %u to %u\n", sizeof(unsigned), 0,UINT_MAX);
	printf("long (%ld bytes): %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("long long (%ld bytes): %lld to %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
}
