#include <iostream>
using namespace std;

void f(int& i)
{
	i++;
}

void g(int i)
{
	i++;
}

int main()
{
	int a =1, b =1;
	cout << "Before call: a = " <<a << " b ="<< b<< endl;
	int &refa;
	f(a);
	g(a);
	cout<< "After call: a = " << a << " b = " << b << endl;
}
