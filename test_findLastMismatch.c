#include "prog4.h"
#include <stdio.h>

int main()
{
	printf("%d\n", findLastMismatch("abcd","abcd"));
	printf("%d\n", findLastMismatch("abc","abcd"));
	printf("%d\n", findLastMismatch("abcd","abc"));
	printf("%d\n", findLastMismatch("abcd",NULL));
	printf("%d\n", findLastMismatch("","abc"));
	printf("%d\n", findLastMismatch("abd","abc"));
	printf("%d\n", findLastMismatch("xyzaxyz","abcaxyz"));
	printf("%d\n", findLastMismatch("$@&*","%@#$"));


}
