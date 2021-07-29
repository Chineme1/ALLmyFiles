#include <iostream>

using namespace std;

class Shape
{
	public:
		virtual void draw(void) const = 0;
		static Shape *makeShape(int i);
};

class Square : public Shape
{
	public:
		virtual void draw(void) const {cout << "Square::draw" <<endl;}
};

class Circle : public Shape 
{
	public:
		virtual void draw(void) const {cout <<"Circle::draw"<< endl;}
};

class Triangle : public Shape
{
	public:
		virtual void draw(void) const {cout <<"Triangle::draw"<< endl;}
};
/*
Shape *Shape::makeShape(int i)
{
	if( i == 0) return new Square;
	if( i == 1) return new Circle;
	if( i==2) return new Triangle;
	return 0;
}*/
void drawSquares(Shape **p, int size)
{
	Square *sp;
	for( int i =0; i <size; i++)
	{
		cout<< "drawSquares: element " << i << ": ";
		cout << "type: " << typeid(*p[i]).name() <<endl;
		sp = dynamic_cast<Square*>(p[i]);
		if (sp)
			sp->draw();
	}
}
int main()
{
	Shape *shapes[4];
	shapes[0] = new Square;
	shapes[1] = new Circle;
	shapes[2] = new Circle;
	shapes[3] = new Square;

	drawSquares(shapes, sizeof(shapes)/sizeof(Shape*));
	//int i;
	//cin >> i;
	//Shape *p = Shape::makeShape(i);
	//if ( p != 0)
	//{	p->draw();}
}
