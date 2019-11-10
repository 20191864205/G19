#include <stdio.h>
#include <math.h>
#define  M  1000
int main()
{
	int a,b;
	printf("请输入一个小于%d的整数：",M);
	scanf("%d",&a);
	while(a>M){
		printf("请重新输入一个小于%d：",M);
		scanf("%d",&a);
	}
	b=sqrt(a);
	printf("%d的平方根是%d",a,b);
	return 0;
}

