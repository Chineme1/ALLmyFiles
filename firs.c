#include <stdio.h>
int abAdd(int a, int b);
int anyRegAdd(int a, int b);
int altAnyRegAdd(int a, int b);
int memAdd(int a, int b);
int anyWhereAdd(int a, int b);

int anyRegAdd(int a, int b)
{
	__asm__(
	"addl %1, %0" :
	"+r" (a) :
	"r" (b) :
	"cc","%edi", "%esi", "%ecx"
	);
	return a;
}

int abcAdd(int a, int b){
//add a and b together
//placing the result in result
//
	int result;
	__asm__(
	"movl %%ebx, %%eax;"//double % in front of them'
	"addl %%ecx, %%eax;"
	"movl $12, %%edi" : //if you are not the last line you have to end with a
       	"=a" (result) : // the = sign means that result will be overwritten with whatever value is
//is
	"b" (b), "c" (a) : //b will be stored in EBX and a in ECX
	"cc", "%edi" //codition codes will be changed
	);

	return result;

}

int abAdd(int a, int b)
{
	__asm__(
	"addl %%ebx, %%eax" :
	"+a" (a) : //store a in register a
	//output regiter
	"b" (b) : //store b in register b
	"cc"
	);
	return a;
}

int main()
{
	int x=58;
	int y=6;

	printf("Lucky #: %d\n",anyRegAdd(x+4,y));
}
