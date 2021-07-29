#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int a = atoi(" 53.4  28");
	printf("a=%d\n", a);
	long b = atol("500000");
	printf("b=%ld\n", b);
	double c = atof("53.4");
	printf("c=%f\n", c);

	int d  =0;
	char e = ' ';
	sscanf("50 x","%d %c",&d,&e);
	printf("d=%d\n", d);
	printf("e=%c\n", e);

	float f = 0.0f;
	sscanf("2.3", "%f", &f);
	printf("f=%f\n", f);
	sscanf(" 2.3", "%d%c%d", &a, &e, &d);
	printf("a=%d, e=%c, d=%d\n", a, e, d);

}
