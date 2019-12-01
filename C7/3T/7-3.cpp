#include <stdio.h>
#include <math.h>
int main()
{
	int prime(int a);
	int n;
	printf("请输入一个整数");
	scanf("%d",&n);
	if(prime(n)==1)
		printf("yes");
	else
		printf("no");
	printf("\n");
	return 0;
}

int prime(int a)
{
	int flag=1,i;
	for(i=2;i<sqrt(a) && flag==1;i++)
	{
		if(a%i==0)
			flag=0;
	}
	return (flag);
}

