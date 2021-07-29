#include <stdio.h>


int main()
{
	int pizzaEat = 124;
	//pizzaEat++;//Unary= only takes one variable
	printf("pizza before light: %i\n",pizzaEat);
	int output = --pizzaEat;
	printf("Pizzas to eat: %i\n",output);
	printf("Pizza to consume: %i\n",pizzaEat);
}
