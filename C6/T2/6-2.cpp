#include<stdio.h>
int main()
{
	int i,j,n,t,a[10];
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		n=i;
		for(j=i+1;j<10;j++)
			if(a[j]<a[n])n=j;
		t=a[n]; a[n]=a[i]; a[i]=t;
	}
	for(i=0;i<10;i++)
	   printf("%d\n",a[i]);
	return 0;
}
