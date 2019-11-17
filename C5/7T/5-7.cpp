#include <stdio.h>
int main ()
{
	int n,i,j;
	double a,b,c,s;
	a=0;
	b=0;
	c=0;
	for(n=1;n<=100;n++)
		a=a+n;
	for(i=1;i<=50;i++)
		b=b+i*i;
	for(j=1;j<=10;j++)
		c=c+1/j;
	s=a+b+c;
	printf("ԭʽ=%f\n",s);
	return 0;
}
