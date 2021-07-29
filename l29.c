#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool isPrime(int input)
{

	//int isPrime = true;
	int j;
	int k=0;
	int isPrime = true;
	for(int i =sqrt(input); i>1;i--)
	{		
		//printf("%d",i);
		if(input % i ==0)
		{
			return  false;
		}
	}
	return true;
					
        //int input = 17;
}
int main()
{
	int input;
	scanf("%d", &input);

	for(int i = input; i> 1;i--)
	{
		bool prime = isPrime(i);
		if (prime)                           	
		{                                         //int input = 17;
			printf("%d Is Prime!\n", i);     	//int j;
		}                                    	//int k=0;
		
	}	
	//{
/*	bool prime = isPrime(25);
	if (prime)
	{
		printf("\nIs Prime!\n");
	}
	else
	{
		printf("\n Is not Prime\n");

	*/
	/*for(j =i; i>1; i--)
	{
		if(i%j!=0)
		{
			IsPrime=true;
			for(int g =i-1,i>1;i--)
			{
				if(g%i !=0)
				{
					int
				}
			}

		}
		else
		{
			//int isPrime = false;

		}
		for( ;;)
		{
		}


}	}*/

}
