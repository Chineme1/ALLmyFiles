#include "prog4.h"
#include <stdio.h>

int main()
{


	int highest = 0, retval = 0;
	retval = parseForHighest("values1.txt", &highest);
	printf("retval: %d\n", retval);
	printf("highest: %d\n", highest);
	retval = parseForHighest(NULL, &highest);
	printf("retval: %d\n", retval);
	retval = parseForHighest("values1.txt", NULL);
	printf("retval: %d\n", retval);
/*	int highest = -1;

	char str1[] = "5;83;22;42";
	int retval = parseForHighest(str1, &highest);
	printf("retval=%d\n", retval);
	printf("highest=%d\n", highest);


	char str2[] = " 87 ; 92; 94 ; -5 ; 13";
	retval = parseForHighest(str2, &highest);
	printf("===\nretval=%d\n", retval);
	printf("highest=%d\n", highest);


	char str3[] = "500;600; 700   ";
	retval = parseForHighest(str3, &highest);
	printf("===\nretval=%d\n", retval);
	printf("highest=%d\n", highest);

	return 0;*/
}
