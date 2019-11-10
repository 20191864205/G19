#include <stdio.h>
#include <math.h>
int main ()
{
	int sign=1,i=0,a;
	double pi=0.0,n=1.0,term=1.0;
	printf("请输入精确到第几位：");
	scanf("%d",&a);

	while(fabs(term)>=pow(10,-a))
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		i++;
	}
	pi=pi*4;
	printf("pi=%10.8f\n%d\n",pi,i);
	return 0;
}