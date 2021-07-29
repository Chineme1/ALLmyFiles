#include <iostream>

using namespace std;

class Shape
{
	public:
		virtual void draw(void)= 0;
};

class Square : public Shape
{
	public:
		virtual void draw(void) {cout << "Square::draw" <<endl;}
};

class Circle : public Shape 
{
	public:
		virtual void draw(void) {cout <<"Circle::draw"<< endl;}
};

int main()
{
	Shape s;
}
