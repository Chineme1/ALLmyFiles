#include <iostream>
#include <cmath>

int main()
{
	TRandom3 rnd(0);
	double x, y;
	double pi_result;
	i_loop 0;
	i_loop_max = 100000;
	int hit = 0;
	for (i_loop; i_loop<=100; i_loop+=1)
	{
		for(i_loop;i_loop<i_loop_max; i_loop+=1)
		{
			x = rnd.Uniform(0,1);
			y = rnd.Uniform(0,1);
		
			if(y <= sqrt(1-pow(x,2)))
			{
				hit+=1;
			}
		}
		pi_result = 4*hit
	}
}
