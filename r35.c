#include <stdio.h>


int main()
{
	int val = 0;
	scanf("%d", &val);
	if (++val==16 || ++val==17)
		printf("The number you entered was 15. I know.\n");
	printf("val=%d\n", val);
}
