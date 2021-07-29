#include <stdio.h>

float bar(char a, int b)
{
	if(a=='X')
		return 2.3;
	if(b==5)
		return 6.28;
	return 4.2;
}
int main()
{
	printf("%10f\n", bar('z',5));
	printf("%-10f\n", bar('X', 5));
	printf("%50f\n", bar('%', 3));

}
