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
	printf("������%f��\n",s);
	printf("��ʮ�η����߶�Ϊ%f\n",h);
	return 0;
}

