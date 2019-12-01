#include <stdio.h>
int main()
{
	double fun(int n,int x);
	int x,n;
	double px;
	scanf("%d%d",&n,&x);
	px=fun(n,x);
	printf("%f\n",px);
	return 0;
}

double fun(int n,int x)
{
	double px;
	if(n==0)
		px=1;
	else if(n==1)
		px=x;
	else
		px=((2*n-1)*x-fun(n-1,x)-(n-1)*fun(n-2,x))/n;
	return (px);
}
