#include <stdio.h>
#include<math.h>
int main ()
{
	int i=1,sign=1;
	double pi=0.0,n=1.0,term=1.0;

	while(fabs(term)>=1e-6)
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		i=i+1;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("共循环了%d次",i);
	return 0;
}