#include <stdio.h>
#include <math.h>
int main ()
{

	double pi,n,term;
	pi=1.0;
	n=1.0;
	term=0.0;

	while(n<=100000)
	{
		term=(2*n*2*n)/((2*n-1)*(2*n+1));
		pi=pi*term;
		n=n+1;
	}
	pi=pi*2;
	printf("pi=%10.8f\n",pi);
	return 0;
}