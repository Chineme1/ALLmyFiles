#include <iostream>

using namespace std;

int main()
{
	int *p;;

	p = new int;
	*p= 3;

	delete p;

	p = new int[10];
	for( int i =0; i< 10; i++)
	{
		p[i] = i;
	}

	delete [] p;

	delete [] p;
	p =0;
	delete p;
}
