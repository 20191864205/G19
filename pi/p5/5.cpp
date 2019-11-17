#include <stdio.h>
#include <math.h>
int main()
{
	double pi,n,term;
	pi=0.0;
	n=1.0;
	term=0.0;
	while(n<100000)
	{
		term=1/(n*n);
		pi=pi+term;
		n=n+1;
	}
	pi=pi*6;
	pi=sqrt(pi);
	printf("pi=%10.8f\n",pi);
	return 0;
}