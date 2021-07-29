#include <iostream>

int main()
{
	int **a;

	a = new int*[4];

	for(int i=0; i <4; i++)
		a[i] = new int [4];

	a[3][2] = 100;
}
