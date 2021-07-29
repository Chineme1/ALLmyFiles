#include <stdio.h>

struct Person
{
	char* firstname;
	char* lastname;
	int age;
};
void sayHi(const struct Person* p)
{
	printf("%s %s says hello to you.\n", p->firstname, p->lastname);
}

int main()
{
	struct Person p = {"Yugi", "Moto", 16};
	sayHi(&p);
	p.firstname = "Ash";
	p.age = -8;

	//sayHi(&p);
	//This is a comment
/*	int radius;
	printf("Please enter a radius: ");
	scanf("%d", &radius);
	double area = 3.14159*(radius*radius);
	printf("The area of a circle with radius %d is %f\n",radius,area);
	return 0;
*/
}
