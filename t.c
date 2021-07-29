#include <stdio.h>
#define X_LEN 6
#define Y_LEN 4

unsigned getInts(int *arr, unsigned maxInts)
{
	for (unsigned i =0; i< maxInts; ++i)
	{
		int success = scanf("%d", &arr[i]);
		if (success == 0)
			return i;
	}
	return maxInts;
}


int main()
{
	int x[X_LEN];
	getInts(x, 3);
	for(unsigned i =0; i< X_LEN; ++i)
		printf("x[ %d ] is %d\n", i, x[i]);
	printf("====\n");
	int y[Y_LEN];
	getInts(y, 4);
	for(unsigned i =0; i< Y_LEN;++i)
		printf("y[%d] is %d\n", i, y[i]);
//	printf(msg, num);
	/*printf("sizeof(int) = %lu\n", sizeof(int));
	int a = INT_MAX;
	a+=1;
	if (a < 0)
		printf("a is negative due to overflow\n");
	int64_t b = INT_MAX;
	b += 1;
	if(b<0)
		printf("b is negative due to overflow\n");
	return 0;*/
}
