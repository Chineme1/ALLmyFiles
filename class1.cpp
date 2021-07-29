#include <iostream>


class Value
{
	public:

		//Value(void){i =1;}
		//Value(int v){i= v;}
		void print(void) {std::cout <<i << std::endl;}
		void set(int x) {i = x;}
		int get(void) const {return i;}
		Value & operator=(const Value& rhs)
		{
			if( &rhs == this ) return *this;
			i = rhs.i;
			return *this;
		}
	private:
		int i;
};

int main()
{
	Value v1,v2,v3;

	//v.set(3);
	v1.set(3);
	v2 = v1;
	v3.operator=(v2);
	std::cout <<"v1: " << v1.get() << std::endl;
	std::cout << "v2: " << v2.get() << std::endl;
	std::cout << "v3: " << v3.get() << std::endl;
	//std::cout << v.i<<std::endl;
}
