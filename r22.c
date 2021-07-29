#include <stdio.h>


int main()
{
	goto label2;
label1:
	printf("Hello\n");
	goto label3;
label2:
	printf("AAA\n");
	return 0;
	goto label1;
	printf("Hi\n");

label3:
	printf("Bye\n");
	return 0;
}

