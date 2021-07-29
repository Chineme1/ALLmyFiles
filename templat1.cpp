#include <iostream>

using namespace std;

class Value
{
	public:
		bool operator>(const Value& x) const
		{
			return i > x.i;
		}
		void print(void) {cout <<i <<endl;}
		void set(int x) {i =x;}
	private:
		int i;
};



template <typename T>
T max(T v1, T v2, T v3)
{
	T m = v1;
	if (v2 > m) m = v2;
	if(v3 > m) m = v3;
	return m;
}

int main()
{
	Value v1, v2, v3;
	v1.set(1);
	v2.set(2);
	v3.set(3);

	Value v = max(v1, v2, v3);
	v.print();

	/*
	int i1 = 1, i2 = 2, i3 = 3;
	cout << max(i1, i2, i3) << endl;

	double d1 = 1.0, d2 = 2.0, d3 = 3.0;
	cout << max(d1, d2, d3) <<endl;

	float f1 = 1.0f, f2 = 2.0f, f3 = 3.0f;
	cout << max(f1, f2, f3) <<endl;

	//cout << max(i1, f2, i3);
	cout << max<int>(i1, f2, i3);*/
}
