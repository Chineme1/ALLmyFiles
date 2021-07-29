#include <stdio.h>

struct Person
{

	char* name;
	int age;
};
void makeitThree(int* val)
{
	*val =3;
}
int getThreeFloats(float* f1, float* f2, float* f3)
{
	return scanf("%f", f1)&& scanf("%f", f2) && scanf("%f", f3);
}

int main()
{

	char x = 'A';
	if(x == 'A')
	{
		printf("In\n");
	}
/*	int arr[6] = {12, 64, 72,18};
	for(int i =0; i< 6; ++i)
	{
		printf("arr[ %d ] is %d\n", i, arr[i]);
	}*/
	//printf("%p\n", arr);
	//printf("%p\n", &arr);
/*	float a, b, c;
	int success = getThreeFloats(&a, &b, &c);
	if(success)
		printf("a=%f, b=%f, c=%f\n", a, b, c);
	else
		printf("Failed\n");*/
//	int abcd = 02.;
//	makeitThree(&abcd);
//	printf("Number is %d\n",abcd);

	/*	
	struct Person people[] = {
	{"Bob", 40},
	{"Jacob", 37},
	{"Stacy", 38},
	{"Jackson", 35}};
	
	for(int i =0; i <4;  ++i)
	{
		printf("%s is %d years old.\n", people[i].name, people[i].age);
	}
*/

}
