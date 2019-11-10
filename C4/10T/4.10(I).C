#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	double a,b,c,d,e,f,a1,a2,a3,a4,a5,z;
	a=0.1;
	b=0.075;
	c=0.05;
	d=0.03;
	e=0.015;
	f=0.01;
	a1=100000*a;
	a2=100000*b;
	a3=200000*c;
	a4=200000*d;
	a5=400000*e;
	scanf("%d",&i);
	if(i<=100000)
		z=i*a;
	else if(i<=200000)
		z=a1+(i-100000)*b;
	else if(i<=400000)
		z=a1+a2+(i-200000)*c;
	else if(i<=600000)
		z=a1+a2+a3+(i-400000)*d;
	else if(i<=1000000)
		z=a1+a2+a3+a4+(i-600000)*e;
	else 
		z=a1+a2+a3+a4+a5+(i-1000000)*f;
	printf("½±½ðÎª£º%10.2f\n",z);
	return 0;
}
