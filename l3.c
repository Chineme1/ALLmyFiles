#include <stdio.h>

struct Person
{
	char* name;
	int age;
	struct Person* bestfriend;

};

int main()
{

	struct Person p1 = {"Jenna", 23, NULL};
	struct Person p2 = {"Ryan", 24, &p1};
	p1.bestfriend = &p2;

	printf("The best friend of %s is %s, and bestfriend of %s is %s \n", p2.name, p2.bestfriend->name, p1.name, p1.bestfriend->name);

/*	printf("The number of eggs for the day: ");
	int eggs;
	scanf("%d",&eggs);
	float dzen =(double) eggs/12.0;
	printf("You have %f dozen eggs\n",dzen);

*/

}
