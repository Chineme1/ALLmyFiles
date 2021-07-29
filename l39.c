#include <stdio.h>

int factor(int y)
{

	//int i;          
        //scanf("%d",&i);
        int x =1;
        while(y>1)
        {
        	x=x*y;
        	y--;
        }
	//printf("The factorial is %d \n",x);
	//return x;
}


int main()
{
	int x;
	scanf("%d",&x);
	printf("%d \n", factor(x));

}
