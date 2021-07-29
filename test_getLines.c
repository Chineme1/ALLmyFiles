#include "prog4.h"
#include <stdio.h>

int main()
{
	char buf[100];
	int retval = getLines(buf);
	printf("retval=%d\n", retval);
	printf("buf=%s\n",buf);
	return 0;
}
