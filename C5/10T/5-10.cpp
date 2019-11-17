#include <stdio.h>
int main()
{
	int i;
	double a,b,c,d,s;
	b=2;
	c=1;
	s=0;
	a=0;
	d=0;
	for(i=1;i<=20;i++)
	{
		
		s=b/c+s;
		d=b;
		b=b+c;
		c=d;
	}
	printf("ԭʽ=%f\n",s);
	return 0;
}

