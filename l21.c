#include <stdio.h>

int main()
{
	int slices;
	printf("Pick a slice of pizza: \n");
	scanf("%d",&slices);
	int calories = 250 *slices;

	switch(slices)
	{
		case 1:
			printf("You did a great job!\n");
			
		case 2:
			printf("You did an ok job\n");
	
		case 3:
			printf("You did a bad job! Try to eat  2 next time\n");
			
		case 4:
			printf("You're a dissapointment\n");
		
		default:
			printf("You really need to eat less pizza. Enjoy Heart Disease.\n");
		
	
	}
	printf("You have eaten %d calories\n",calories);

}
