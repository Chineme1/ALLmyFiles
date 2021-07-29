#include <stdio.h>


void makeitThree(int * val)
{
	*val = 3;
}




int main()
{
	int abcd = 20;
	makeitThree(&abcd);
	printf("abcd=%d\n", abcd);
	/*int w = 37;
	int* x = &w;
	int** y = &x;
	int***z = &y;
	printf("%d\n", *x);
	printf("%d\n", **y);
	printf("%d\n", ***z);*/
/*	double val  = 5.92;
	double* p1 = &val;
	double* p2 = p1, *p3 =p1;
	*p2 = 82.4;
	printf("%lf %lf %lf %lf\n", val, *p1, *p2, *p3);*/
/*	int x = 38;
	float y = 92.47;
	char z = '!';
	int* pX =&x;
	float* pY = &y;
	char* pZ = &z;
	printf("%d %f %c\n", *pX, *pY, *pZ);
	*pX+=2;
	printf("%d %d\n", *pX, x);*/
	/*char a = '@';
	int b = 57;
	int c = 84;
	char* pA = &a;
	int* pB = &b;
	printf("pA =%p, &a=%p\n", pA, &a);
	printf("pB=%p, &b=%p\n", pB, &b);
	printf("%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double), sizeof(char*), sizeof(int*), sizeof(float*),sizeof(double*));*/
}
