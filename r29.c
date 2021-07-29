#include <stdio.h>


int main()
{
	char ch = 127;
	ch+=1;
	if(ch==-128)
		printf("char is signed.\n");
	if(ch== 128)
		printf("char is unsigned.\n");

}
