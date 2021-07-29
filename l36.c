#include <stdio.h>


int main()
{
	int size= 6;
	int myGrades[size];
	myGrades[0] = 10;
	myGrades[1] = 11;
	myGrades[2] = 12;
	myGrades[3] = 13;
	myGrades[4] = 14;
	myGrades[5] = 15;
	for(int i=0; i<size;i++)
	{
		printf("%d\n", myGrades[i]);
	}
/*	myGrades[6] = 16;
	myGrades[7] = 17;
	myGrades[8] = 18;
	myGrades[9] = 19;*/ 
	//int myGrades []= {10, 12, 14, 15, 16,17,54, 34, 23};
	printf("My Grade %d", myGrades[0]);
	
}
