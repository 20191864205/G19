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
	printf("请输入第一个数：");
	scanf("%d",&numA);
	printf("请输入第二个数：");
	scanf("%d",&numB);
	printf("%d和%d的最大公约数是：%d,最小公倍数是：%d。\n",numA,numB,big(numA,numB),small(numA,numB));
	return  ;
}