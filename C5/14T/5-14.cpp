#include <stdio.h>
#include <math.h>
int main()
{
	double x,f1,f2,x1,x0;
	x1=1.5;
	do
	{
		x0=x1;
		f1=2*x*x*x-4*x*x+3*x-6;
		f2=6*x*x-8*x+3;
		x1=x0-f1/f2;
	
	}while(fabs(x1-x0)>=1e-5);
	printf("在1.5附近的根为%5.2f\n",x1);
	return 0;
}
