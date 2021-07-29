#include <iostream>
using namespace std;


class Rectangle
{
	public:
		Rectangle(float w, float h) : width(w), height(h) {}
		void flatten(void) {width+=10; height -=10;}
		float width, height;

};

class Square: public Rectangle
{
	public:
		Square(float side) : Rectangle(side, side) {}
};

int main()
{
	Square s(30.0f);
	s.flatten();
	cout << s.width <<" " << s.height << endl;
}
