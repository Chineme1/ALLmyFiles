#include <stdio.h>



int main()
{
	printf("Enter your favorite number: ");
	int favoriteNumber;
	scanf("%d",&favoriteNumber);
	printf("Your favorite number is %d. Me too\n", favoriteNumber);

	if (favoriteNumber == 8)
		printf("That number equals 8.\n");
	if (favoriteNumber <52)
		printf("That number is less than 52.\n");
	if (favoriteNumber >= -8)
		printf("That number is greater than or equal to -8\n");
	if (favoriteNumber > 30)
		printf("That number is greater than 30.\n");
}
