#include <stdio.h>
int main ()
{
	double s,a;    //sΪ�������aΪÿһ���ֵ��
	int n;
	a=1.0;
	s=0;
	for(n=1;n<=20;n++)
	{
		a=a*n;
		s=a+s;
	}
	printf("1!+2!+....+20!=%f\n",s);
	return 0;
}
	