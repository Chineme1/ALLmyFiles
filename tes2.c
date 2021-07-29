#include <stdio.h>


int main()
{
	unsigned int a = 4294967295;
	unsigned int b = 4;

	for(int i=32; i>=0; i--)
	{
		if((a>>(i))&0b1)
		{
			printf("beginning a: %d \n", i);
			break;					
		}
	
/*		if((b>>(i))&0b1)                          	
		{                                         	
			printf("beginning: %d ", i);      	
							} 	*/
	}
	for(int i=32; i>=0; i--)
	{
		if((b>>(i))&0b1)
		{
			printf("beginning b: %d \n", i);
			break;
		}
	
/*		if((b>>(i))&0b1)                          	
		{                                         	
			printf("beginning: %d ", i);      	
							} 	*/
	}
	printf("Number: %ld\n", 0b011110110111100000010010000111111000010010000111111011011110000); 

}
