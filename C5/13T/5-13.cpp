#include <stdio.h>
#include <math.h>
int main()
{

	float x0,x1,a;	
	printf("������a��ֵ");
	scanf("%f",&a);
	x0=a/2;
	x1=(x0+a/x0)/2;
	do
	{	x0=x1;
		x1=(x0+a/x0)/2;
	
	}while(fabs(x0-x1)>=1e-5);
	printf("%f��ƽ����Ϊ%8.5f\n",a,x1);
	return 0;
}
