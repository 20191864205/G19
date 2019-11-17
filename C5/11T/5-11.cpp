#include <stdio.h>
int main ()
{
	int i;
	double s,a,h;
	a=100;
	h=0;
	s=100;
	for(i=1;i<=10;i++)
	{
		h=a/2;
		a=h;
		s=s+a*2;
	}
	s=s-h*2;
	printf("共经过%f米\n",s);
	printf("第十次反弹高度为%f\n",h);
	return 0;
}

