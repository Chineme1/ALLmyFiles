#include <iostream>
using namespace std;

class A
{
	public:
		A(int i) : val(i) {}
		int val;
		virtual void print(void)
		{
			cout << "Value printed using A::print: "<< val << endl;
		}
		virtual ~A(void) {cout<<"A::~A called" <<endl;}
};

class B: public A
{
	public:
		B(int i) : A(i) {}
		virtual void print(void)
		{
			cout<< "Value printed using B::print: " << val << endl;
		}
		virtual ~B(void) {cout << "B::~B called"<<endl;}
};

int main()
{
	A *pa = new B(3);
	pa ->print();
	delete pa;
}

