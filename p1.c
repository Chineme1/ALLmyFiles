#include <stdio.h>
#define X_LEN 6
#define Y_LEN 4

unsigned getInts(int *arr, unsigned maxInts)
{
	for(unsigned i =0; i< maxInts; ++i)
	{
		int success = scanf("%d", &arr[i]);
		if(success ==0)
			return i;
	}
	return maxInts;
}

/*int getThreeFloats(float * f1, float * f2, float * f3)
{
	return scanf("%f", f1)&& scanf("%f", f2) && scanf("%f", f3);
}
void makeitThree( int *val)
{
	*val = 3;
	//printf("val %p\n", val);
}*/
/*
void printReferencedValue(int* val)
{
	if(val) printf("%d\n", *val);
	//if(val) printf("%p\n", *val);
//	if(val) printf("%d\n", val);
}*/
int main()
{
	short a[3] = {10, 20, 30};
	short b[2] = {40, 50};
	b[3] = -1;
	for (unsigned i = 0; i< 3; ++i)
		printf("a[ %u] is %d\n",i, a[i]);
	for (unsigned i = 0; i< 2; ++i)
		printf("b[%d] is %d\n",i, b[i]);
  	/*	int x[X_LEN];
	getInts(x, 3);
	for (unsigned i =0; i < X_LEN;++i)
		printf("x[ %u ] is %d\n", i, x[i]);
	printf("===\n");
	int y[Y_LEN];
	getInts(y, 4);
	for (unsigned i = 0; i< Y_LEN; ++i)
		printf("y[ %u] is %d\n", i, y[i]);
*/
//	int arr[6] = {12, 64, 72, 18};
//	for (int i =0; i < 6; ++i)
//		printf("arr[%d] is %d\n", i, arr[i]);
	/*float arr[6];
	for(int i =0; i<6; ++i)
		printf("arr[%d] is %f\n", i, arr[i]);
*/
	/*int arr[] = {53, 92, 25, -6, 84};
	printf("%p\n", arr);
	printf("%p\n", &arr);
	printf("First index %p\n", &arr[0]);
	printf("Second index %p\n", &arr[1]);
	printf("The=ird Index %p\n", &arr[2]);*/
	//int arr[] = {53, 92, 25, -6, 84};
	//for (int i = 0; i< 5; ++i)
		//printf("arr[%d] is %d\n", i, arr[i]); 
	//int abcd = 18;
	//printReferencedValue(&abcd);
//	printReferencedValue(NULL);

/*	int *a;
	printf("%p %p %d\n", a,NULL, NULL);
	printf("%d\n", *a);*/
/*	float a,b, c;
	int success = getThreeFloats(&a, &b, &c);
	if (success)
		printf("a=%f, b=%f, c=%f\n", a, b, c);
	else
		printf("Failed\n");*/
/*	int abcd = 20;
	makeitThree(&abcd);
	printf("abcd=%d\n", abcd);*/
/*	int w = 37;
	int* x = &w;
	int** y = &x;
	int***z = &y;
	printf("%d\n", *x);
	printf("%d\n", **y);
	printf("%d\n", ***z);*/
	/*double val = 5.92;
	double* p1 = &val;
	double* p2= p1, *p3 = p1; *p3 =82.4;
	printf("%lf %lf %lf %lf\n", val, *p1, *p2, *p3);*/
/*	int x = 38;
	float y =  92.47;
	char z = '!';
	int* pX= &x;
	float* pY = &y;
	char* pZ = &z;
	printf("%d %f %c\n", *pX, *pY, *pZ);
	*pX += 2;
	printf("%d %d\n", *pX, x);*/
//	printf("%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double), sizeof(char*),sizeof(int*),sizeof(float*), sizeof(double*));
	/*char a = '@';
	int b = 57;
	int c = 84;
	char* pA = &a;
	int* pB = &b;
	printf("pA=%p, &a=%p\n", pA, &a);
	printf("pB=%p, &b=%p\n", pB, &b);
	*/
}
