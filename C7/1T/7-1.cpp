#include<stdio.h>
int big(int a,int b)
{
	int t,c;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	return b;
}

int small(int a,int b)
{
	return (a*b)/big(a,b);
}

void main()
{
	int numA,numB;
	printf("�������һ������");
	scanf("%d",&numA);
	printf("������ڶ�������");
	scanf("%d",&numB);
	printf("%d��%d�����Լ���ǣ�%d,��С�������ǣ�%d��\n",numA,numB,big(numA,numB),small(numA,numB));
	return  ;
}