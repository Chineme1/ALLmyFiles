#include <stdio.h>
typedef struct
{
	int length;
	int width;
} rectangle;

typedef struct
{
	int x;
	int y;
}position;

typedef struct
{
	char owner[30];
	rectangle rectangle;
	position position;
}buildingPlan;

int main()
{

	rectangle myRect= {5,10};
	printf("Length : %d. Width: %d\n", myRect.length, myRect.width);
	buildingPlan myHouse = {"Caleb Curry", {5,10}, {32,48}};
	printf("The house at %d %d (size %d %d) is owned by %s\n", myHouse.position.x, myHouse.position.y, myHouse.rectangle.length, myHouse.rectangle.width, myHouse.owner);
	building Plan *structPointer = &myHouse;
	structPointer->position.x

}
