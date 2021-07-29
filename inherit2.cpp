#include <iostream>

class A
{
	public:
		int a_pub;
	protected:
		int a_prot;
	private:
		int a_priv;

};

class B : public A
{
	public:
		void f(void)
		{
			a_prot =1;
		}
};

class C : public B
{
	public:
		void g(void)
		{
			a_prot =1;
		}
};

int main()
{
	B b;
	b.a_pub =1;
	b.a_prot = 1;
	b.a_priv = 1;
}
