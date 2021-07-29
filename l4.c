#include <stdio.h>

struct Foo
{
	int a;
	struct Foo* otherFoo;
	int* b;
};

int main()
{
	int x = 57;
	struct Foo f1 ={5, NULL, &x};
	struct Foo* f2 = &f1;
	printf("f1.a = %d\n", f1.a);
	printf("f2->a = %d\n", f2->a);
	struct Foo f3 = {3, &f1, &x};
	printf("%d\n", f3.otherFoo->a);
	struct Foo* f4 = &f3;

	//print 57
	printf("%d\n", *(f1.b));
	printf("%d\n", *(f2->b));
	printf("%d\n", *(f3.otherFoo->b));
	printf("f4: %d\n", *(f4->otherFoo->b));

	/*printf("What's your name: ");
	char name[31];
	scanf("%s",name);
	printf("Hello %s you look fine today\n",name);// Passing a string
	return 0;
*/


}
